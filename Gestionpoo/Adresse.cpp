#include "Adresse.h"
namespace Composant
{
	Adresse::Adresse(void) {
		this->ID_Adresse = -1;
		this->adresse = "RIEN";
		this->Id_Ville = -1;
	}
	String^ Adresse::SELECT(void)
	{
		return "SELECT id_adresse, adresse, Id_ville " +
			"FROM Adresse where id_adresse = " + this->ID_Adresse + ";";
	}
	String^ Adresse::INSERT(void)
	{
		return "INSERT INTO Adresse(adresse, id_ville) " +
			"VALUES('" + this->adresse + "'," + this->Id_Ville + ");select id_adresse from adresse where adresse = '"+this->adresse+"'";
	}
	String^ Adresse::UPDATE(void)
	{
		return "UPDATE Adresse SET id_ville =" + this->Id_Ville + ",adresse = '" +this->adresse+"' WHERE ID_Adresse = " + this->ID_Adresse;
	}
	String^ Adresse::DELETE(void)
	{
		return "DELETE FROM Adresse " +
			"WHERE(ID_Adresse = " + this->ID_Adresse + ");";
	}
	void Adresse::setIdAdresse(int ID_Adresse)
	{
		if (ID_Adresse > 0)this->ID_Adresse = ID_Adresse;
	}
	void Adresse::setAdresse(String^ Adresse)
	{
		if (Adresse != "")this->adresse = Adresse;
	}

	void Adresse::setIdVille(int Id_Ville)
	{
		if (Id_Ville > 0)this->Id_Ville = Id_Ville;
	}

	int Adresse::getIdAdresse(void)
	{
		return this->ID_Adresse;
	}
	String^ Adresse::getAdresse(void)
	{
		return this->adresse;
	}
	int Adresse::getIdVille(void)
	{
		return this->Id_Ville;
	}
	void Adresse::setIdClient(int id)
	{
		this->Id_Client = id;
	}
	int Adresse::getIdClient(void)
	{
		return this->Id_Client;
	}
}
