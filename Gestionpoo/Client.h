#pragma once
#include "Personne.h"
#include "Addr.h"
#include <array>
ref class Client : public Personne
{
private:
    System::DateTime date_naissance;
    System::DateTime date_pr_achat;
    array<Addr^>^ addr;
    System::Data::SqlClient::SqlConnection^ cnx;
    void init();
public:
    bool new_client;
    System::DateTime Getdate_naissance();
    void Setdate_naissance(System::DateTime date_naissance);
    System::DateTime Getdate_pr_achat();
    void Setdate_pr_achat(System::DateTime date_pr_achat);
    array<Addr^>^ Getaddr();
    void Setaddr(array<Addr^>^ addr_liv);
    Client::Client(int id);
    Client::Client();
    Client::~Client();
};


