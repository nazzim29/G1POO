#pragma once
ref class Addr
{
	private: System::String^ adresse;
		   int id_ville, id_adresse;
		   System::String^ ville;
	public:
		Addr();
		Addr(int adresse);
		System::String^ get_adresse();
		void set_adresse(System::String^ adresse);
		void set_ville(System::String^ ville);
		System::String^ get_ville();
	protected: ~Addr() {
		delete adresse, id_ville, id_adresse, ville;
	}
};

