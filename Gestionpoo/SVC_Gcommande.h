#pragma once
#include "Adresse.h"
#include "CAD.h"
#include "Client.h"
#include"Article.h"
#include "Commande.h"
#include "Ville.h"
#include "Choisir.h"


namespace Service {
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Xml;
	using namespace System;
	using namespace System::Collections::Generic;
	ref class SVC_Gcommande {
	private:
		
		DataTable^ ds;
		Composant::CAD^ cad;
		Composant::Client^ client;
		Composant::Commande^ commande;
		Composant::Article^ article;
		List<Composant::Article^>^ lstarticle;
		List<Composant::Adresse^>^ adresse;
		List<Composant::Ville^>^ ville;
		List<Composant::Choisir^>^ choisir;

	public:
		SVC_Gcommande();
		DataTable^ listecommande();
		String^ get_nomprenom();
		DataTable^ get_adressesclient();
		DataTable^ listeclient();
		DataTable^ get_listearticle();
		Composant::Commande^ get_commande();
		List<Composant::Choisir^>^ get_choix();
		void set_addr(DataTable^);
		void set_commande(Composant::Commande^ c);
		void set_idclient(int id);
		void set_choix(List<Composant::Choisir^>^ l);
		void afficher(int);
		void ajouter();
		void modifier(int, DateTime^, int, String^, DateTime^, String^, DateTime^, DateTime^, int, int, int);
		void supprimer(int);
	};
}

