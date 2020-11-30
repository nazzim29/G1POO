#include "Client.h"

void Client::init()
{
    System::Data::SqlClient::SqlCommand^ query = gcnew System::Data::SqlClient::SqlCommand("select nom ,prenom,date_naissance,date_achat from client where id = 4", cnx);
    System::Data::SqlClient::SqlDataReader^ rd = query->ExecuteReader();
    this->nom = rd->GetString(0);
    this->prenom = rd->GetString(1);
    this->date_naissance = rd->GetDateTime(2);
    this->date_pr_achat = rd->GetDateTime(3);
    query = gcnew System::Data::SqlClient::SqlCommand("select id_adresse from adresse_facturation_livraison where id = "+ this->id, cnx);
    rd = query->ExecuteReader();
    while(rd->Read()) {
        addr->Add(gcnew Addr(rd->GetInt64(0),this->cnx));
    }

}

System::DateTime Client::Getdate_naissance()
{
    return System::DateTime();
}

void Client::Setdate_naissance(System::DateTime date_naissance)
{
    throw gcnew System::NotImplementedException();
}

System::DateTime Client::Getdate_pr_achat()
{
    return System::DateTime();
}

void Client::Setdate_pr_achat(System::DateTime date_pr_achat)
{
    throw gcnew System::NotImplementedException();
}



System::Collections::Generic::List<Addr^>^ Client::Getaddr()
{
    throw gcnew System::NotImplementedException();
    // TODO: insérer une instruction return ici
}

void Client::Setaddr(System::Collections::Generic::List<Addr^>^ addr)
{
    throw gcnew System::NotImplementedException();
}

Client::Client(int id)
{
    this->id = id;
    this->cnx = cnx;
    init();
}

Client::Client()
{
    new_client = true;

}

Client::~Client()
{
    throw gcnew System::NotImplementedException();
}
