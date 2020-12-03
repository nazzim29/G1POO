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
		this->personnel = gcnew Composant::Personnel();
		this->adresse = gcnew Composant::Adresse();
		this->ville = gcnew Composant::Ville();
		this->cad->actionRows("BEGIN TRAN");
		this->personnel->set_nom(nom);
		this->personnel->set_prenom(prenom);
		this->personnel->set_date_embauche(date);
		this->personnel->set_id_superieur(superieur);
		this->ville->setNomVille(ville);
		this->ville->setIdVille(this->cad->actionRowsID(this->ville->INSERT()));
		this->adresse->setAdresse(adresse);
		this->adresse->setIdVille(this->ville->getIdVille());
		this->adresse->setIdAdresse(this->cad->actionRowsID(this->adresse->INSERT()));
		this->personnel->set_id_adresse(this->adresse->getIdAdresse());
		this->cad->actionRows(this->personnel->INSERTwithsup());
		this->cad->actionRows("COMMIT");
	}
	void SVC_Gemploye::ajouter(String^ nom, String^ prenom, System::DateTime^ date, String^ adresse, String^ ville)
	{
		this->personnel = gcnew Composant::Personnel();
		this->adresse = gcnew Composant::Adresse();
		this->ville = gcnew Composant::Ville();
		this->personnel->set_nom(nom);
		this->personnel->set_prenom(prenom);
		this->personnel->set_date_embauche(date);
		this->ville->setNomVille(ville);
		this->cad->actionRows("BEGIN TRAN");
		this->ville->setIdVille(this->cad->actionRowsID(this->ville->INSERT()));
		this->adresse->setAdresse(adresse);
		this->adresse->setIdVille(this->ville->getIdVille());
		this->adresse->setIdAdresse(this->cad->actionRowsID(this->adresse->INSERT()));
		this->personnel->set_id_adresse(this->adresse->getIdAdresse());
		this->cad->actionRows(this->personnel->INSERT());
		this->cad->actionRows("COMMIT TRAN");
	}
	void SVC_Gemploye::modifier(String^ nom, String^ prenom, System::DateTime^ date, String^ adresse, String^ ville, int superieur)
	{
		this->personnel->set_nom(nom);
		this->personnel->set_prenom(prenom);
		this->personnel->set_date_embauche(date);
		this->personnel->set_id_superieur(superieur);
		this->adresse->setAdresse(adresse);
		this->ville->setNomVille(ville);
		this->cad->actionRows("BEGIN TRAN");
		this->ville->setIdVille(this->cad->actionRowsID(this->ville->INSERT()));
		this->adresse->setIdVille(this->ville->getIdVille());
		this->cad->actionRows(this->adresse->UPDATE());
		this->cad->actionRows(this->personnel->UPDATEwithsup());
		this->cad->actionRows("COMMIT");
	}
	void SVC_Gemploye::modifier(String^ nom, String^ prenom, System::DateTime^ date, String^ adresse, String^ ville)
	{
		this->personnel->set_nom(nom);
		this->personnel->set_prenom(prenom);
		this->personnel->set_date_embauche(date);
		this->adresse->setAdresse(adresse);
		this->ville->setNomVille(ville);
		this->cad->actionRows("BEGIN TRAN");
		this->ville->setIdVille(this->cad->actionRowsID(this->ville->INSERT()));
		this->adresse->setIdVille(this->ville->getIdVille());
		this->cad->actionRows(this->adresse->UPDATE());
		this->cad->actionRows(this->personnel->UPDATE());
		this->cad->actionRows("COMMIT");

	}
	void SVC_Gemploye::supprimer()
	{
		this->cad->actionRows("BEGIN TRAN");
		this->cad->actionRows(this->personnel->DELETE());
		this->cad->actionRows(this->adresse->DELETE());
		this->cad->actionRows("COMMIT TRAN");
	}
}