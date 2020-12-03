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
}
