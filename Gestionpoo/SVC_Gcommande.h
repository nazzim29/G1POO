#pragma once
#include "Adresse.h"
#include "CAD.h"
#include "Client.h"
#include"Article.h"
#include "Commande.h"
#include "Ville.h"



namespace Service {
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Xml;
	using namespace System;
	using namespace System::Collections::Generic;
	ref class SVC_Gcommande {
	private:
		
		DataTable^ ds;

	public:
		Composant::CAD^ cad;
		Composant::Client^ client;
		Composant::Commande^ commande;
		Composant::Article^ article;
		List<Composant::Adresse^>^ adresse;
		List<Composant::Ville^>^ ville;
		SVC_Gcommande();
		DataTable^ listecommande();
		void get_addr();
		void set_addr(DataTable^);
		void afficher(int);
		void ajouter(DateTime^, int, String^, DateTime^, String^, DateTime^, DateTime^, int, int, int);
		void modifier(int, DateTime^, int, String^, DateTime^, String^, DateTime^, DateTime^, int, int, int);
		void supprimer(int);
	};
}

