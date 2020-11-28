#pragma once
ref class Produit
{
 private: 
	System::String^ nom;
	System::String^ ref;
	float prix_ht;
	int tva;
	int quantit_stock;
	int quantit_reap;
	float prix_ttc;

 public:
	 System::String^ Getref();
	 void Setref(System::String^ ref);

	 System::String^ Getnom();
	 void Setnom(System::String^ nom);

	 float Getprix_ht();
	 void Setprix_ht(float prix_ht);

	 int Gettva();
	 void Settva(int tva);

	 int Getquantite_stock();
	 void Setquantite_stock(int quantite_stock);

	 int Getquantit_reap();
	 void Setquantit_reap(int quantit_reap);

	 float Getprix_ttc();
	 void Setprix_ttc(float prix_ttc);

	 Produit::Produit(System::String^ nom, System::String^ ref, float prix_ht, int tva, int quantit_stock, int quantit_reap, float prix_ttc);
	 Produit::Produit();

	 Produit::~Produit();
		 
};

