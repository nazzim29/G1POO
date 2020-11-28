#pragma once
#include "Personne.h"
#include "Addr"
#include <array>
ref class Client :
    public Personne
{
private:
    System::DateTime date_naissance;
    System::DateTime date_pr_achat;
    array<Addr^>^ addr_liv;
    array<Addr^>^ addr_fact;
public:
        System::DateTime Getdate_naissance();
    void Setdate_naissance(System::DateTime date_naissance);

    System::DateTime Getdate_pr_achat();
    void Setdate_pr_achat(System::DateTime date_pr_achat);

    array<Addr^>^ Getaddr_fact();
    void Setaddr_fact(std::array<Addr^>^ addr_fact);


    array<Addr^>^ Getaddr_liv();
    void Setaddr_liv(array<Addr^>^ addr_liv);

    Client::Client(System::DateTime date_naissance, System::DateTime date_pr_achat, array<Addr^>^ addr_liv, array<Addr^>^ addr_fact);
    Client::Client();

    Client::~Client();
};


