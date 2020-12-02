#include "FicheEmploye.h"

void Gestionpoo::FicheEmploye::set_id(int i)
{
    lblid->Text = Convert::ToString(i);
}

void Gestionpoo::FicheEmploye::set_nom(String^ nom)
{
    this->txtnom->Text = nom;
}

void Gestionpoo::FicheEmploye::set_prenom(String^ prenom)
{
    this->txtprenom->Text = prenom;
}

void Gestionpoo::FicheEmploye::set_adresse(String^ addr)
{
    this->textBox3->Text = addr;
}

void Gestionpoo::FicheEmploye::set_date(DateTime^ date)
{
    this->datenais->MaxDate = DateTime::Now;
    this->datenais->Value = System::DateTime(date->Year, date->Month, date->Day);
}

void Gestionpoo::FicheEmploye::set_ville(int ville)
{
    this->comboBox1->SelectedValue = ville;
}

void Gestionpoo::FicheEmploye::set_sup(int id)
{
    if (id == 0) {
        this->comboBox2->Text = "";
    }
    else {
        this->comboBox2->SelectedValue = id;
    }
}

void Gestionpoo::FicheEmploye::set_comp_ville(DataTable^ v)
{
    comboBox1->DataSource = v;
    comboBox1->ValueMember = "id_ville";
    comboBox1->DisplayMember = "nom_ville";
}

void Gestionpoo::FicheEmploye::set_comp_sup(DataTable^ s)
{
    comboBox2->DataSource = s;
    comboBox2->ValueMember = "id_Personnel";
    comboBox2->DisplayMember = "employe";
}

void Gestionpoo::FicheEmploye::mode_affichage()
{
    txtnom->Enabled = false;
    txtprenom->Enabled = false;
    comboBox1->Enabled = false;
    comboBox2->Enabled = false;
    textBox3->Enabled = false;
    datenais->Enabled = false;
    checkBox1->Enabled = false;
}

int Gestionpoo::FicheEmploye::get_id()
{
    return Convert::ToInt32(lblid->Text);
}

System::String^ Gestionpoo::FicheEmploye::get_nom()
{
    return txtnom->Text;
}

System::String^ Gestionpoo::FicheEmploye::get_prenom()
{
    return txtprenom->Text;
}

System::String^ Gestionpoo::FicheEmploye::get_adresse()
{
    return textBox3->Text;
}

System::DateTime^ Gestionpoo::FicheEmploye::get_embauche()
{
    return datenais->Value;
}

System::String^ Gestionpoo::FicheEmploye::get_ville()
{
    return comboBox1->Text;
}

int Gestionpoo::FicheEmploye::get_sup()
{
    return Convert::ToInt32(comboBox2->SelectedValue);
}

bool Gestionpoo::FicheEmploye::havesup()
{
    return checkBox1->Checked;
}
