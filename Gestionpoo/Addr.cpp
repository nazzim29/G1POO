#include "Addr.h"

Addr::Addr()
{
    throw gcnew System::NotImplementedException();
}

Addr::Addr(int adresse, System::Data::SqlClient::SqlConnection^ cnx)
{
    this->id_adresse = adresse;
    this->cnx = cnx;

}

int Addr::get_id()
{
    return id_adresse;
}

System::String^ Addr::get_adresse()
{
    get_info();
    return adresse;
}

void Addr::set_adresse(System::String^ adresse)
{
    this->adresse = adresse;
}

void Addr::set_ville(System::String^ ville)
{
    this->ville = ville;
}

System::String^ Addr::get_ville()
{
    get_info();
    return this->ville;
}
void Addr::get_info() {
    if (this->adresse == ""||this->ville == "") {
        System::Data::SqlClient::SqlCommand^ query = gcnew System::Data::SqlClient::SqlCommand("Select Nom,(select nom from ville where id = adresse.id_ville) as ville from adresse where id = " + id_adresse, this->cnx);
        System::Data::SqlClient::SqlDataReader^ rd = query->ExecuteReader();
        this->adresse = rd->GetString(0);
        this->ville = rd->GetString(1);
        rd->Close();
    }
}
