#include "SVC_Gcommande.h"
namespace Service {
	DataTable^ SVC_Gcommande::get_listearticle()
	{
		return this->cad->getRows(this->article->SELECT());
	}
	Composant::Commande^ SVC_Gcommande::get_commande()
	{
		return this->commande; 
	}
	List<Composant::Choisir^>^ SVC_Gcommande::get_choix()
	{
		return this->choisir;
	}
	void SVC_Gcommande::set_commande(Composant::Commande^ c)
	{
		this->commande = c;
	}
	void SVC_Gcommande::set_idclient(int id)
	{
		this->client->set_id(id);
	}
	DataTable^ SVC_Gcommande::get_adressesclient()
	{
		return this->cad->getRows("SELECT id_adresse, concat(adresse,' ,',(SELECT nom_ville from ville where ville.id_ville = adresse.id_ville)) as adresse from adresse where id_client = " + this->client->get_id());
	}
	DataTable^ SVC_Gcommande::listeclient()
	{
		return this->cad->getRows("SELECT id_client as ID ,concat(nom_c,' ',prenom_c) as Client from client");
	}
	void SVC_Gcommande::set_choix(List<Composant::Choisir^>^ l)
	{
		this->choisir = l;
	}
	SVC_Gcommande::SVC_Gcommande()
	{
		this->cad = gcnew Composant::CAD();
		this->article = gcnew Composant::Article();
		this->client = gcnew Composant::Client();
		this->commande = gcnew Composant::Commande();
	}
	DataTable^ SVC_Gcommande::listecommande()
	{
		this->ds = gcnew DataTable();
		this->ds = this->cad->getRows(this->commande->SELECT());
		return this->ds;
	}
	String^ SVC_Gcommande::get_nomprenom()
	{
		return this->client->get_nom() + " " + this->client->get_prenom();
	}
	void SVC_Gcommande::set_addr(DataTable^)
	{
		throw gcnew System::NotImplementedException();
	}
	void SVC_Gcommande::afficher(int id)
	{
		this->commande->set_id_commande(id);
		DataTable^ t = this->cad->getRows(this->commande->SELECTbyid());
		this->commande->set_ref(t->Rows[0]->ItemArray[1]->ToString());
		String^ date = t->Rows[0]->ItemArray[2]->ToString();
		this->commande->set_date_emmision(DateTime(int::Parse(date->Substring(6, 4)), int::Parse(date->Substring(3, 2)), int::Parse(date->Substring(0, 2))));
		date = t->Rows[0]->ItemArray[3]->ToString();
		this->commande->set_date_livraison(DateTime(int::Parse(date->Substring(6, 4)), int::Parse(date->Substring(3, 2)), int::Parse(date->Substring(0, 2))));
		this->client->set_id(int::Parse(t->Rows[0]->ItemArray[4]->ToString()));
		this->commande->set_id_adresse_livraison(int::Parse(t->Rows[0]->ItemArray[4]->ToString()));
		this->commande->set_id_adresse_facturation(int::Parse(t->Rows[0]->ItemArray[5]->ToString()));
		t = this->cad->getRows(this->client->SELECTbyid());
		this->client->set_nom(t->Rows[0]->ItemArray[1]->ToString());
		this->client->set_prenom(t->Rows[0]->ItemArray[2]->ToString());
		Composant::Choisir^ f = gcnew Composant::Choisir();
		choisir = gcnew List<Composant::Choisir^>();
		f->setIdCommande(this->commande->get_id_commande());
		t = this->cad->getRows(f->SELECT() + "where id_commande = " + f->getIdCommande());
		//ID_Article, ID_Commande,Quantite_Article,Remise,prix_ht,tva
		for (size_t i = 0; i < t->Rows->Count; i++)
		{
			f->setIdArticle(int::Parse(t->Rows[0]->ItemArray[0]->ToString()));
			f->setIdCommande(int::Parse(t->Rows[0]->ItemArray[1]->ToString()));
			f->setQuantiteAricle(int::Parse(t->Rows[0]->ItemArray[2]->ToString()));
			f->setRemise(float::Parse(t->Rows[0]->ItemArray[3]->ToString()));
			f->setprixht(float::Parse(t->Rows[0]->ItemArray[4]->ToString()));
			f->settva(float::Parse(t->Rows[0]->ItemArray[5]->ToString()));
			choisir->Add(f);
			f = gcnew Composant::Choisir();
		}

	}
	void SVC_Gcommande::ajouter()
	{
		this->commande->set_id_client(this->client->get_id());
		this->commande->set_id_commande(this->cad->actionRowsID(this->commande->INSERT()));
		this->commande->set_ref(this->commande->get_ref() + this->commande->get_id_commande());
		this->cad->actionRows(this->commande->UPDATE());
		for (size_t i = 0; i < choisir->Count; i++)
		{
			this->choisir[i]->setIdCommande(this->commande->get_id_commande());
			this->cad->actionRows(this->choisir[i]->INSERT());
			this->article->SetID_article(choisir[i]->getIdArticle());
			DataTable^ dArticle = this->cad->getRows(article->SELECTbyID());
			this->article->SetReference_article(Convert::ToString(dArticle->Rows[0]->ItemArray[1]));
			this->article->SetDesignation(Convert::ToString(dArticle->Rows[0]->ItemArray[2]));
			this->article->setPrix_HT(float::Parse(Convert::ToString(dArticle->Rows[0]->ItemArray[3])));
			this->article->setTaux_TVA(float::Parse(Convert::ToString(dArticle->Rows[0]->ItemArray[4])));
			this->article->setQuantite_en_Stock(Convert::ToInt32(dArticle->Rows[0]->ItemArray[5]));
			this->article->setSeuil_de_reapprovisionnement(Convert::ToInt32(dArticle->Rows[0]->ItemArray[6]));
			this->article->SetCouleur(Convert::ToString(dArticle->Rows[0]->ItemArray[7]));
			this->article->setQuantite_en_Stock(this->article->getQuantite_en_Stock() - this->choisir[i]->getQuantiteArticle());
			this->cad->actionRows(this->article->UPDATE());
		}
	}
	void SVC_Gcommande::modifier(int, DateTime^, int, String^, DateTime^, String^, DateTime^, DateTime^, int, int, int)
	{
		throw gcnew System::NotImplementedException();
	}
	void SVC_Gcommande::supprimer(int a)
	{
		afficher(a);
		
		for (int i = 0; i < choisir->Count; i++) {
			this->cad->actionRows(choisir[i]->DELETE());
		}
		this->cad->actionRows(this->commande->DELETE());
	}
}