#include "FicheCommande.h"

void Gestionpoo::FicheCommande::set_client(String^ cl)
{
    lblclient->Text = "Client : " + cl;
}

void Gestionpoo::FicheCommande::set_date_livraison(DateTime^ date)
{
    this->datenais->Value = DateTime(date->Year, date->Month, date->Day);
}

void Gestionpoo::FicheCommande::set_date_emission(DateTime^ date)
{
    this->dateachat->Value = DateTime(date->Year, date->Month, date->Day);
}

void Gestionpoo::FicheCommande::set_adresse_livraison(int i)
{
    comboBox1->SelectedValue = i;
}

void Gestionpoo::FicheCommande::set_adresse_facturation(int i)
{
    comboBox2->SelectedValue = i;
}

void Gestionpoo::FicheCommande::set_adresse_list(DataTable^ ds)
{
    comboBox1->DataSource = ds;
    comboBox1->ValueMember = "id_adresse";
    comboBox1->DisplayMember = "adresse";
    comboBox2->DataSource = ds;
    comboBox2->ValueMember = "id_adresse";
    comboBox2->DisplayMember = "adresse";
}

void Gestionpoo::FicheCommande::set_article_list(DataTable^ ds)
{
    dataGridView1->DataSource = ds;
}
