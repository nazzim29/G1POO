#pragma once
#include"CAD.h"
#include"Client.h"
#include"Adresse.h"
#include"Ville.h"
#include <tuple>

namespace Service {
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Xml;
	using namespace System;
	using namespace System::Collections::Generic;
	ref class SVC_Gclient
	{
	private:
		Composant::CAD^ cad;
		Composant::Client^ client;
		List<Composant::Adresse^>^ adrclient;
		List<Composant::Ville^>^ ville;
		DataTable^ dt;

	public:
		SVC_Gclient();
		DataTable^ listeclients();
		DataTable^ listeville();
		List<Composant::Ville^>^ get_ville();
		List<Composant::Adresse^>^ get_adrclient();
		Composant::Client^ get_client();
		DataTable^ adressesClient(int);
		void afficher(int);
		void ajouter(String^, String^, DateTime^, DateTime^,DataTable^);
		void modifier(int, String^, String^, DateTime^, DateTime^,DataTable^);
		void supprimer(int);
	};
}