#include "Ficheadresse.h"

System::String^ Gestionpoo::Ficheadresse::get_adresse()
{
    return textBox1->Text;
}

System::String^ Gestionpoo::Ficheadresse::get_ville()
{
    return comboBox1->Text;
}

void Gestionpoo::Ficheadresse::set_comp_ville(DataTable^ t)
{
    comboBox1->DataSource = t;
    comboBox1->ValueMember = "id_ville";
    comboBox1->DisplayMember = "nom_ville";
}

void Gestionpoo::Ficheadresse::set_ville(String^ d)
{
    this->comboBox1->SelectedIndex = comboBox1->FindString(d);
}

void Gestionpoo::Ficheadresse::set_adresse(String^ d)
{
    this->textBox1->Text = d;
}
