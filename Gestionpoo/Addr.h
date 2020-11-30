#pragma once
ref class Addr
{
	private: System::String^ adresse;
		   int id_adresse;
		   System::String^ ville;
		   System::Data::SqlClient::SqlConnection^ cnx;
		   void get_info();

	public:
		Addr();
		Addr(int adresse, System::Data::SqlClient::SqlConnection^ cnx);
		int get_id();
		System::String^ get_adresse();
		void set_adresse(System::String^ adresse);
		void set_ville(System::String^ ville);
		System::String^ get_ville();
	protected: ~Addr() {
		delete adresse, id_adresse, ville;
	}
};

