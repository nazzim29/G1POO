#include "Commande.h"

System::String^ Commande::Getref()
{
    return"";
}

void Commande::Setref(System::String^ ref)
{
    throw gcnew System::NotImplementedException();
}

System::DateTime Commande::Getdate_liv()
{
    return System::DateTime();
}

void Commande::Setdate_liv(System::DateTime date_liv)
{
    throw gcnew System::NotImplementedException();
}

System::DateTime Commande::Getdate_emission()
{
    return System::DateTime();
}

void Commande::Setdate_emission(System::DateTime date_emmision)
{
    throw gcnew System::NotImplementedException();
}

System::DateTime Commande::Getdate_reglement()
{
    return System::DateTime();
}

void Commande::Setdate_reglement(System::DateTime date_reglement)
{
    throw gcnew System::NotImplementedException();
}

/*Addr Commande::Getaddr_fact()
{
    return Addr();
}

void Commande::Setaddr_fact(Addr addr_fact)
{
    throw gcnew System::NotImplementedException();
}

Addr Commande::Getaddr_liv()
{
    return Addr();
}

void Commande::Setaddr_liv(Addr addr_liv)
{
    throw gcnew System::NotImplementedException();
}

Client Commande::Getacht()
{
    return Client();
}

void Commande::Setacht(Cliet acht)
{
    throw gcnew System::NotImplementedException();
}

std::array<Produit> Commande::Getart()
{
    return std::array<Produit>();
}*/

void Commande::Setart(array<Produit^>^ art)
{
    
}

/*array<int>^ Commande::Getquant_comm()
{
    return  array<int>^;
}*/

void Commande::Setquant_comm(array<int>^ quant_comm)
{
 
}

/*array<int>^ Commande::Getremise()
{

}*/

void Commande::Setremise(array<int>^ remise)
{

}

/*
Commande::Commande(System::String ref, System::DateTime date_liv, System::DateTime date_emission, System::DateTime date_reglement, Addr addr_fact, Addr addr_liv, Client acht, std::array<Produit> art, std::array<int> quant_comm, std::array<int> remise)
{
    throw gcnew System::NotImplementedException();
}
*/


Commande::Commande()
{

}

Commande::~Commande()
{

}
