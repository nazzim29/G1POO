#include "SVC_Gemploye.h"
namespace Service
{
	SVC_Gemploye::SVC_Gemploye(void)
	{
		this->cad = gcnew Composant::CAD();
		this->personnel = gcnew Composant::Personnel();
		this->adresse = gcnew Composant::Adresse();
		this->ville = gcnew Composant::Ville();
	}
	DataTable^ SVC_Gemploye::liste_ville()
	{
		return this->cad->getRows("select * from ville");
	}
	DataTable^ SVC_Gemploye::listeemploye()
	{
		this->ds = gcnew DataTable();
		this->ds = this->cad->getRows(this->personnel->SELECT());
		return this->ds;
	}
	void SVC_Gemploye::afficher(int i)
	{
		//ja
		this->personnel->set_id(i);
		DataTable^ aa = this->cad->getRows(personnel->SELECTbyid());
		this->personnel->set_id_adresse(Convert::ToInt32(aa->Rows[0]->ItemArray[5]));
		String^ date = Convert::ToString(aa->Rows[0]->ItemArray[3]);
		this->personnel->set_date_embauche(DateTime(Convert::ToInt32(date->Substring(6, 4)), Convert::ToInt32(date->Substring(3, 2)), Convert::ToInt32(date->Substring(0, 2))));
		this->personnel->set_nom(Convert::ToString(aa->Rows[0]->ItemArray[1]));
		this->personnel->set_prenom(Convert::ToString(aa->Rows[0]->ItemArray[2]));
		if (DBNull::Value->Equals(aa->Rows[0]->ItemArray[4])) {
			this->personnel->set_id_superieur(0);
		}
		else {
			this->personnel->set_id_superieur(Convert::ToInt32(aa->Rows[0]->ItemArray[4]));
		}
		adressesemploye();
	}
	void SVC_Gemploye::adressesemploye()
	{
		DataTable^ dd = gcnew DataTable();
		this->adresse->setIdAdresse(this->personnel->get_id_adresse());
		dd = this->cad->getRows(this->adresse->SELECT());
		this->adresse->setAdresse(Convert::ToString(dd->Rows[0]->ItemArray[1]));
		this->adresse->setIdVille(Convert::ToInt32(dd->Rows[0]->ItemArray[2]));
		this->ville->setIdVille(this->adresse->getIdVille());
		dd = this->cad->getRows(this->ville->SELECTbyid());
		this->ville->setNomVille(Convert::ToString(dd->Rows[0]->ItemArray[1]));
	}
	void SVC_Gemploye::ajouter(String^ nom, String^ prenom, System::DateTime^ date, String^ adresse, String^ ville, int superieur)
	{
		personnel = gcnew Composant::Personnel();
		this->personnel->set_nom(nom);
		this->personnel->set_prenom(prenom);
		this->personnel->set_date_embauche(date);
		this->personnel->set_id_superieur(superieur);
		this->ville->setNomVille(ville);

		this->personnel->set_id_adresse();
		id = this->cad->actionRowsID(this->personnel->INSERTwithsup());
	}
	void SVC_Gemploye::ajouter(String^ nom, String^ prenom, System::DateTime^ date, String^ adresse, String^ ville)
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