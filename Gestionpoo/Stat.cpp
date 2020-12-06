#include "Stat.h"

System::Void Gestionpoo::Stat::Stat_Load(System::Object^ sender, System::EventArgs^ e)
{
    chifreaffaire->Text = this->stat->calculchiffreaffaire(debut->Value, fin->Value).ToString();
    dataGridView1->DataSource = this->stat->produitsousseuil();
    dataGridView2->DataSource = this->stat->topvendu();
    dataGridView3->DataSource = this->stat->flopvendu();
    lstclient->DataSource = this->stat->clientliste();
    lstclient->ValueMember = "id_client";
    lstclient->DisplayMember = "client";
    montantclient->Text = this->stat->calcultotalachatclient(Convert::ToInt32(lstclient->SelectedValue)).ToString();
    paniermoyen->Text = "Panier Moyen : " + this->stat->calculpaniermoyen();
    
}
