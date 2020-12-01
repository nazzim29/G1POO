#include "FicheEmploye.h"

void Gestionpoo::FicheEmploye::set_id(int i)
{
    lblid->Text = Convert::ToString(i);
}

void Gestionpoo::FicheEmploye::set_adresse(String^ addr)
{
    this->textBox3->Text = addr;
}
