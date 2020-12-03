#include "FicheClient.h"
#include<chrono>

System::Void Gestionpoo::FicheClient::FicheClient_Load(System::Object^ sender, System::EventArgs^ e)
{
   
}

System::Void Gestionpoo::FicheClient::button5_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->Close();
}

System::String^ Gestionpoo::FicheClient::get_nom()
{
    return txtnom->Text;
}

System::String^ Gestionpoo::FicheClient::get_prenom()
{
    return txtprenom->Text;
}

System::DateTime^ Gestionpoo::FicheClient::get_date_naissance()
{
    return datenais->Value;
}

System::DateTime^ Gestionpoo::FicheClient::get_pr_achat()
{
    return dateachat->Value;
}

System::Data::DataTable^ Gestionpoo::FicheClient::get_adresses()
{
    return (DataTable^)dataGridView1->DataSource;
}

void Gestionpoo::FicheClient::set_nom(String^ nom)
{
    txtnom->Text = nom;
}

void Gestionpoo::FicheClient::set_prenom(String^ prenom )
{
    txtprenom->Text = prenom;
}

void Gestionpoo::FicheClient::set_date_naissance(DateTime^ d)
{
    datenais->Value = DateTime(d->Year, d->Month, d->Day);
}

void Gestionpoo::FicheClient::set_pr_achat(DateTime^ d)
{
    dateachat->Value = DateTime(d->Year, d->Month, d->Day);
}

void Gestionpoo::FicheClient::get_adresses(DataTable^ d)
{
    dataGridView1->DataSource = d;
}

System::Void Gestionpoo::FicheClient::button6_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->valider = true;
    this->Close();
}
