#include "Choisir.h"
namespace Composant
{
	Choisir::Choisir(void) {
		this->Id_Article = -1;
		this->Id_Commande = -1;
		this->Quantité_Article = -1;
		this->Remise = -1;
	}
	String^ Choisir::SELECT(void)
	{
		return "SELECT ID_Article, ID_Commande,Quantite_Article,Remise,prix_ht,tva " +
			"FROM Choisir ";
	}
	String^ Choisir::INSERT(void)
	{
		return "INSERT INTO Choisir (ID_Article,ID_Commande,Quantite_Article,Remise,prix_ht,tva) " +
			"VALUES(" + this->Id_Article + "," + this->Id_Commande + "," + this->Quantité_Article + "," + this->Remise + ","+this->prix_ht+","+this->tva+")";
	}
	String^ Choisir::UPDATE(void)
	{
		return "UPDATE Choisir " +
			"SET ID_Article =" + this->Id_Article + ", id_commande =" + this->Id_Commande + ", quantite_article =" + this->Quantité_Article + ", remise =" + this->Remise + ",prix_ht = "+this->prix_ht+", tva = "+this->tva;
	}
	String^ Choisir::DELETE(void)
	{
		return "DELETE FROM Choisir " +
			"WHERE(ID_Article = " + this->Id_Article + "and ID_Commande = " + this->Id_Commande +")";
	}
	void Choisir::setIdArticle(int Id_Article)
	{
		if (Id_Article > 0)this->Id_Article = Id_Article;
	}
	void Choisir::setIdCommande(int Id_Commande)
	{
		if (Id_Commande > 0)this->Id_Commande = Id_Commande;
	}
	void Choisir::setQuantiteAricle(int Quantite_Article)
	{
		if (Quantite_Article > 0)this->Quantité_Article = Quantite_Article;
	}
	void Choisir::setRemise(float Remise)
	{
		if (Remise > 0)this->Remise= Remise;
	}
	int Choisir::getIdArticle(void)
	{
		return this->Id_Article;
	}
	int Choisir::getIdCommande(void)
	{
		return this->Id_Commande;
	}
	int Choisir::getQuantiteArticle(void)
	{
		return this->Quantité_Article;
	}
	float Choisir::getRemise(void)
	{
		return this->Remise;
	}
	float Choisir::getprixht(void)
	{
		return this->prix_ht;
	}
	float Choisir::gettva(void)
	{
		return this->tva;
	}
	void Choisir::settva(float t)
	{
		this->tva = t;
	}
	void Choisir::setprixht(float t)
	{
		this->prix_ht = t;
	}
}