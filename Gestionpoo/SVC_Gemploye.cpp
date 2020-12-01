#include "SVC_Gemploye.h"
namespace Service
{
	SVC_Gemploye::SVC_Gemploye(void)
	{
		this->cad = gcnew Composant::CAD();
		this->personnel = gcnew Composant::Personnel();
		this->adresse = gcnew Composant::Adresse();
	}
	DataTable^ SVC_Gemploye::listeemploye()
	{
		this->ds = gcnew DataTable();
		this->ds = this->cad->getRows(this->personnel->SELECT());
		return this->ds;
	}
	String^ SVC_Gemploye::adressesemploye(int id_personne)
	{
		this->ds = gcnew DataTable();
		personnel->set_id(id_personne);
		this->adresse->setIdAdresse(personnel->get_id_adresse());
		this->ds = this->cad->getRows(this->adresse->SELECT());
		return Convert::ToString(this->ds->Rows[0]->ItemArray[1]);
	}
	void SVC_Gemploye::ajouter(String^ nom, String^ prenom,System::DateTime^ date, int adresse, int ville,int superieur)
	{
		int id;
		this->personnel->set_nom(nom);
		this->personnel->set_prenom(prenom);
		this->personnel->set_date_embauche(date);
		this->personnel->set_id_superieur(superieur);
		this->personnel->set_id_adresse(adresse);
		id = this->cad->actionRowsID(this->personnel->INSERTwithsup());
	}
	void SVC_Gemploye::ajouter(String^ nom, String^ prenom, System::DateTime^ date, int adresse, int ville)
	{
		int id;
		this->personnel->set_nom(nom);
		this->personnel->set_prenom(prenom);
		this->personnel->set_date_embauche(date);
		this->personnel->set_id_adresse(adresse);
		id = this->cad->actionRowsID(this->personnel->INSERT());
	}
	void SVC_Gemploye::modifier(int id_personne, String^ nom, String^ prenom, System::DateTime^ date, int adresse, int ville, int superieur)
	{
		this->personnel->set_id(id_personne);
		this->personnel->set_nom(nom);
		this->personnel->set_prenom(prenom);
		this->personnel->set_date_embauche(date);
		this->personnel->set_id_adresse(adresse);
		this->personnel->set_id_superieur(superieur);
		this->cad->actionRows(this->personnel->UPDATEwithsup());

	}
	void SVC_Gemploye::modifier(int id_personne, String^ nom, String^ prenom, System::DateTime^ date, int adresse, int ville)
	{
		this->personnel->set_id(id_personne);
		this->personnel->set_nom(nom);
		this->personnel->set_prenom(prenom);
		this->personnel->set_date_embauche(date);
		this->personnel->set_id_adresse(adresse);
		this->cad->actionRows(this->personnel->UPDATE());

	}
	void SVC_Gemploye::supprimer(int idPersonne)
	{
		this->personnel->set_id(idPersonne);
		this->cad->actionRows(this->personnel->DELETE());
	}
}