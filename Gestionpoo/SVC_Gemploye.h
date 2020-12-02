#pragma once
#include "CAD.h"
#include "Personnel.h"
#include "Adresse.h"
#include "Ville.h"


namespace Service
{
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Xml;
	using namespace System;
	ref class SVC_Gemploye
	{
	private:

		DataTable^ ds;
		void adressesemploye();
	public:
		Composant::CAD^ cad;
		Composant::Personnel^ personnel;
		Composant::Adresse^ adresse;
		Composant::Ville^ ville;
		SVC_Gemploye(void);
		DataTable^ liste_ville();
		DataTable^ listeemploye();
		void afficher(int i);
		void ajouter(String^ nom, String^ prenom, System::DateTime^ date, String^ adresse, String^ ville, int superieur);
		void ajouter(String^ nom, String^ prenom, System::DateTime^ date, String^ adresse, String^ ville);
		void modifier(int id_personne, String^ nom, String^ prenom, System::DateTime^ date, int adresse, int ville);
		void modifier(int id_personne, String^ nom, String^ prenom, System::DateTime^ date, int adresse, int ville, int superieur);
		void supprimer(int);
	};
}