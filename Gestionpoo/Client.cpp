#include "Client.h"

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

array<Addr^>^ Client::Getaddr_fact()
{
    throw gcnew System::NotImplementedException();
    // TODO: insérer une instruction return ici
}

void Client::Setaddr_fact(std::array<Addr^>^ addr_fact)
{
    throw gcnew System::NotImplementedException();
}

array<Addr^>^ Client::Getaddr_liv()
{
    throw gcnew System::NotImplementedException();
    // TODO: insérer une instruction return ici
}

void Client::Setaddr_liv(array<Addr^>^ addr_liv)
{
    throw gcnew System::NotImplementedException();
}

Client::Client(System::DateTime date_naissance, System::DateTime date_pr_achat, array<Addr^>^ addr_liv, array<Addr^>^ addr_fact)
{
    throw gcnew System::NotImplementedException();
}

Client::Client()
{
    throw gcnew System::NotImplementedException();
}

Client::~Client()
{
    throw gcnew System::NotImplementedException();
}
