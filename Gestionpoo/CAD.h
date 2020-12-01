#pragma once

//Classe d'accèes aux données
namespace Composant
{
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Xml;
	using namespace System;
	ref class CAD
	{
	private:
		String^ cnx; //chaine de caractère pour la connexion avec la base de données
		String^ rq_sql; //string qui va contenir la requete SQL 
		SqlConnection^ CNX;
		SqlCommand^ CMD;
		SqlDataAdapter^ DA; //remplir le DataSet et mettre à jour la base de données 
		DataTable^ DS; //prend en charge la création et la gestion des données 
		void setSQL(String^); //modifier la valeur de la requete SQL
	public:
		CAD(void); //contructeur par défaut
		int actionRowsID(String^);
		void actionRows(String^);
		DataTable^ getRows(String^);
		~CAD(void); //destructeur
	};
}



