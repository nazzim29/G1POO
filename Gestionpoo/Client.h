#pragma once
#include "Personne.h"
#include "Addr.h"
ref class Client : public Personne
{
private:
    System::DateTime date_naissance;
    System::DateTime date_pr_achat;
    System::Collections::Generic::List<Addr^>^ addr;
    System::Data::SqlClient::SqlConnection^ cnx = gcnew System::Data::SqlClient::SqlConnection("Server=tcp:poo.database.windows.net,1433;Initial Catalog=Projetg1;Persist Security Info=False;User ID=nazim;Password=uLafdnE6-;MultipleActiveResultSets=False;Encrypt=True;TrustServerCertificate=False;Connection Timeout=30;");
    void init();
public:
    bool new_client;
    System::DateTime Getdate_naissance();
    void Setdate_naissance(System::DateTime date_naissance);
    System::DateTime Getdate_pr_achat();
    void Setdate_pr_achat(System::DateTime date_pr_achat);
    System::Collections::Generic::List<Addr^>^ Getaddr();
    void Setaddr(System::Collections::Generic::List<Addr^>^ addr);
    Client::Client(int id);
    Client::Client();
    Client::~Client();
};


