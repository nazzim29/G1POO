#pragma once
ref class Personne
{
private:
	System::String^ nom;
	System::String^ prenom;
	int id;

public:
	System::String^ Getnom();
	void Setnom(System::String^ nom);

	System::String^ Getprenom();
	void Setprenom(System::String^ prenom);

	int Getid();
	void Setid(int id);

	Personne::Personne(System::String^ nom, System::String^ prenom, int id);
	Personne::Personne();

	Personne::~Personne();


};


