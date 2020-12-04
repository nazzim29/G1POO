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