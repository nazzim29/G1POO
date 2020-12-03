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

	void SVC_Gcommande::afficher(int id)
	{
		this->commande->setIdPaiement(id);
		this->paiement->setIdPaiement(Convert::ToInt32(dPaiement->Rows[0]->ItemArray[1]));
		DataTable^ dp = this->cad->getRows(paiement->SELECTbyID());
		String^ Date_Paiement = Convert::ToString(dp->Rows[0]->ItemArray[2]);
		String^ Date_RegSolde = Convert::ToString(dp->Rows[0]->ItemArray[3]);
		this->paiement->setDatePaiement(DateTime(Convert::ToInt32(Date_Paiement->Substring(6, 4)), Convert::ToInt32(Date_Paiement->Substring(3, 2)), Convert::ToInt32(Date_Paiement->Substring(0, 2))));
		this->paiement->setDate_ReglementSolde(DateTime(Convert::ToInt32(Date_RegSolde->Substring(6, 4)), Convert::ToInt32(Date_RegSolde->Substring(3, 2)), Convert::ToInt32(Date_RegSolde->Substring(0, 2))));
		this->paiement->setMoyenPaiement(Convert::ToString(dp->Rows[0]->ItemArray[4]));
		this->paiement->setMontantTotalHT(Convert::ToInt32(dp->Rows[0]->ItemArray[5]));
		this->paiement->setMontantTotalTVA(Convert::ToInt32(dp->Rows[0]->ItemArray[6]));
		this->paiement->setIdClient(Convert::ToInt32(dp->Rows[0]->ItemArray[7]));
		this->paiement->setIdCommande(Convert::ToInt32(dp->Rows[0]->ItemArray[8]));

	}
	void SVC_Gpaiement::ajouter(DateTime^ Date_Paiement, DateTime^ Date_ReglementSolde, String^ Moyen_Paiement, float Montant_Total_HT, float Montant_Total_TVA, int ID_Client, int ID_Commande)
	{
		int id;
		this->paiement->setDatePaiement(Date_Paiement);
		this->paiement->setDate_ReglementSolde(Date_ReglementSolde);
		this->paiement->setMoyenPaiement(Moyen_Paiement);
		this->paiement->setMontantTotalHT(Montant_Total_HT);
		this->paiement->setMontantTotalTVA(Montant_Total_TVA);
		this->paiement->setIdClient(ID_Client);
		this->paiement->setIdCommande(ID_Commande);
		id = this->cad->actionRowsID(this->paiement->INSERT());
	}
	void SVC_Gpaiement::modifier(int ID_Paiement, DateTime^ Date_Paiement, DateTime^ Date_ReglementSolde, String^ Moyen_Paiement, float Montant_Total_HT, float Montant_Total_TVA, int ID_Client, int ID_Commande)
	{
		this->paiement->setIdPaiement(ID_Paiement);
		this->paiement->setDatePaiement(Date_Paiement);
		this->paiement->setDate_ReglementSolde(Date_ReglementSolde);
		this->paiement->setMoyenPaiement(Moyen_Paiement);
		this->paiement->setMontantTotalHT(Montant_Total_HT);
		this->paiement->setMontantTotalTVA(Montant_Total_TVA);
		this->paiement->setIdClient(ID_Client);
		this->paiement->setIdCommande(ID_Commande);
		this->cad->actionRows(this->paiement->UPDATE());
	}
	void SVC_Gpaiement::supprimer(int ID_Paiement)
	{
		this->paiement->setIdPaiement(ID_Paiement);
		this->cad->actionRows(this->paiement->DELETE());
	}
}