#include "SVC_Gcommande.h"
namespace Service {

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
	void SVC_Gcommande::get_addr()
	{
		adresse->Add(gcnew Composant::Adresse());
		adresse[0]->setIdClient(this->client->get_id());
		DataTable^ dt = this->cad->getRows(adresse[0]->SELECTclient());
		for (int i = 1; i < dt->Rows->Count; i++) {
			Composant::Adresse^ a = gcnew Composant::Adresse();
			a->setIdAdresse(Convert::ToInt32(dt->Rows[i]->ItemArray[0]));
			a->setAdresse(Convert::ToString(dt->Rows[i]->ItemArray[1]));
			a->setIdClient(this->client->get_id());
			a->setIdVille(Convert::ToInt32(dt->Rows[i]->ItemArray[2]));
			adresse->Add(a);
		}
		for (int i = 0; i < adresse->Count; i++)
		{
			Composant::Ville^ v = gcnew Composant::Ville();
			v->setIdVille(this->adresse[i]->getIdVille());
			dt = this->cad->getRows(v->SELECTbyid());
			v->setNomVille(Convert::ToString(dt->Rows[0]->ItemArray[1]));
			ville->Add(v);

		}
	}
	void SVC_Gcommande::set_addr(DataTable^)
	{
		throw gcnew System::NotImplementedException();
	}
	void SVC_Gcommande::afficher(int)
	{
		throw gcnew System::NotImplementedException();
	}
	void SVC_Gcommande::ajouter(DateTime^, int, String^, DateTime^, String^, DateTime^, DateTime^, int, int, int)
	{
		throw gcnew System::NotImplementedException();
	}
	void SVC_Gcommande::modifier(int, DateTime^, int, String^, DateTime^, String^, DateTime^, DateTime^, int, int, int)
	{
		throw gcnew System::NotImplementedException();
	}
	void SVC_Gcommande::supprimer(int)
	{
		throw gcnew System::NotImplementedException();
	}
}