#pragma once
#include "CAD.h"
#include "Personnel.h"
#include "Adresse.h"

namespace Service
{
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Xml;
	using namespace System;
	ref class SVC_Gemploye
	{
	private:
		Composant::CAD^ cad;
		Composant::Personnel^ personnel;
		Composant::Adresse^ adresse;
		DataTable^ ds;
	public:
		SVC_Gemploye(void);
		DataTable^ listeemploye();
		String^ adressesemploye(int);
		void ajouter(String^ nom, String^ prenom, System::DateTime^ date, int adresse, int ville, int superieur);
		void ajouter(String^ nom, String^ prenom, System::DateTime^ date, int adresse, int ville);
		void modifier(int id_personne, String^ nom, String^ prenom, System::DateTime^ date, int adresse, int ville);
		void modifier(int id_personne, String^ nom, String^ prenom, System::DateTime^ date, int adresse, int ville, int superieur);
		void supprimer(int);
	};
}