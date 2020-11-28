#pragma once
#include <array>
//#include"Addr.h"
//#include "Client.h"
#include "Produit.h"

ref class Commande
{
private:
	System::String^ ref;
	System::DateTime date_liv;
	System::DateTime date_emission;
	System::DateTime date_reglement;
	//Addr addr_fact;
	//Addr addr_liv;
	//Client acht;
	array<Produit^>^ art;
	array<int>^ quant_comm;
	array<int>^ remise;
	
public:
	System::String^ Getref();
	void Setref(System::String^ ref);

	System::DateTime Getdate_liv();
	void Setdate_liv(System::DateTime date_liv);

	System::DateTime Getdate_emission();
	void Setdate_emission(System::DateTime date_emmision);

	System::DateTime Getdate_reglement();
	void Setdate_reglement(System::DateTime date_reglement);
	
	//Addr Getaddr_fact();
	//void Setaddr_fact(Addr addr_fact);

	//Addr Getaddr_liv();
	//void Setaddr_liv(Addr addr_liv);

	//Client Getacht();
	//void Setacht(Cliet acht);

	/*array<Produit^>^ Getart();*/
	void Setart(array<Produit^>^ art);

	//array<int>^ Getquant_comm();
	void Setquant_comm(array<int>^ quant_comm);


	//array<int>^ Getremise();
	void Setremise(array<int>^ remise);
	
	//Commande::Commande(System::String^ ref, System::DateTime date_liv, System::DateTime date_emission, System::DateTime date_reglement, Addr addr_fact, Addr addr_liv, Client acht, array<Produit^>^ art, array<int>^ quant_comm, array<int>^ remise);
	Commande::Commande();

	Commande::~Commande();

};

