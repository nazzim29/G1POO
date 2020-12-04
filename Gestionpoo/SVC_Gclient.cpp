#include "SVC_Gclient.h"
namespace Service {
	using namespace System;
	SVC_Gclient::SVC_Gclient()
	{
		this->cad = gcnew Composant::CAD();
		this->client = gcnew Composant::Client();
		this->ville = gcnew List<Composant::Ville^>();
		this->adrclient = gcnew List<Composant::Adresse^>();
	}
	//une méthode qui retourne un DataTable contenant la liste des clients
	DataTable^ SVC_Gclient::listeclients()
	{
		DataTable^ ds = this->cad->getRows(this->client->SELECT());
		return ds;
	}

	DataTable^ SVC_Gclient::listeville()
	{
		return this->cad->getRows("Select id_ville,nom_ville from ville");
	}

	List<Composant::Ville^>^ SVC_Gclient::get_ville()
	{
		return this->ville;
	}

	List<Composant::Adresse^>^ SVC_Gclient::get_adrclient()
	{
		return this->adrclient;
	}

	Composant::Client^ SVC_Gclient::get_client()
	{
		return this->client;
	}

	DataTable^ SVC_Gclient::adressesClient(int)
	{
		this->dt = gcnew DataTable();
		return dt;
	}

	void SVC_Gclient::afficher(int id)
	{
		this->client->set_id(id);
		DataTable^ c = this->cad->getRows(this->client->SELECTbyid());
		String^ date_naiss = Convert::ToString(c->Rows[0]->ItemArray[3]);
		String^ date_prachat = Convert::ToString(c->Rows[0]->ItemArray[4]);
		this->client->set_nom(Convert::ToString(c->Rows[0]->ItemArray[1]));
		this->client->set_prenom(Convert::ToString(c->Rows[0]->ItemArray[2]));
		this->client->SetDate_naiss(DateTime(Convert::ToInt32(date_naiss->Substring(6, 4)), Convert::ToInt32(date_naiss->Substring(3, 2)), Convert::ToInt32(date_naiss->Substring(0, 2))));
		this->client->SetDate_pr_achat(DateTime(Convert::ToInt32(date_prachat->Substring(6, 4)), Convert::ToInt32(date_naiss->Substring(3, 2)), Convert::ToInt32(date_naiss->Substring(0, 2))));
		this->adrclient = gcnew List<Composant::Adresse^>();
		this->ville = gcnew List<Composant::Ville^>();
		Composant::Adresse^ a = gcnew Composant::Adresse();
		a->setIdClient(this->client->get_id());
		c = this->cad->getRows(a->SELECTbyidclient());
		Composant::Ville^ v = gcnew Composant::Ville();
		for (int i = 0; i < c->Rows->Count; i++) {
			a->setAdresse(Convert::ToString(c->Rows[i]->ItemArray[1]));
			a->setIdAdresse(Convert::ToInt32(c->Rows[i]->ItemArray[0]));
			a->setIdVille(Convert::ToInt32(c->Rows[i]->ItemArray[2]));
			adrclient->Add(a);
			v->setIdVille(a->getIdVille());
			v->setNomVille(Convert::ToString(this->cad->getRows(v->SELECTbyid())->Rows[0]->ItemArray[1]));
			ville->Add(v);
		}
	}
	void SVC_Gclient::ajouter(String^ nom, String^ prenom, DateTime^ date_naiss, DateTime^ date_pr_achat,DataTable^ d)
	{
		this->client->set_nom(nom);
		this->client->set_prenom(prenom);
		this->client->SetDate_naiss(date_naiss);
		this->client->SetDate_pr_achat(date_pr_achat);
		this->client->set_id(this->cad->actionRowsID(this->client->INSERT()));
		Composant::Adresse^ addr = gcnew Composant::Adresse();
		Composant::Ville^ v = gcnew Composant::Ville();
		for (int i = 0; i < d->Rows->Count; i++) {
			v->setNomVille(Convert::ToString(d->Rows[i]->ItemArray[2]));
			v->setIdVille(this->cad->actionRowsID(v->INSERT()));
			ville->Add(v);
			addr->setAdresse(Convert::ToString(d->Rows[i]->ItemArray[1]));
			addr->setIdVille(v->getIdVille());
			addr->setIdClient(this->client->get_id());
			addr->setIdAdresse(this->cad->actionRowsID(addr->INSERTclient()));
			this->adrclient->Add(addr);
		}

	}
	void SVC_Gclient::modifier(int id_client, String^ nom, String^ prenom, System::DateTime^ date_naiss, System::DateTime^ date_pr_achat,DataTable^ d)
	{
		this->client->set_id(id_client);
		this->client->set_nom(nom);
		this->client->set_prenom(prenom);
		this->client->SetDate_naiss(date_naiss);
		this->client->SetDate_pr_achat(date_pr_achat);
		this->cad->actionRows(this->client->UPDATE());
		Composant::Adresse^ addr = gcnew Composant::Adresse();
		Composant::Ville^ v = gcnew Composant::Ville();
		for (int i = 0; i < d->Rows->Count; i++) {
			v->setNomVille(Convert::ToString(d->Rows[i]->ItemArray[2]));
			v->setIdVille(this->cad->actionRowsID(v->INSERT()));
			ville->Add(v);
			addr->setAdresse(Convert::ToString(d->Rows[i]->ItemArray[1]));
			addr->setIdVille(v->getIdVille());
			addr->setIdClient(this->client->get_id());
			addr->setIdAdresse(Convert::ToInt32(d->Rows[i]->ItemArray[0]));
			this->cad->actionRows(addr->UPDATEclient());
			this->adrclient->Add(addr);
		}
	}
	void SVC_Gclient::supprimer(int id_client)
	{
		this->afficher(id_client);
		for (int i = 0; i < adrclient->Count; i++ ) {
			this->cad->actionRows(this->adrclient[i]->DELETE());
		}
		this->cad->actionRows(this->client->DELETE());
	}
}