#include "FicheClient.h"
#include<chrono>

System::Void Gestionpoo::FicheClient::FicheClient_Load(System::Object^ sender, System::EventArgs^ e)
{
    this->dataGridView1->Columns[0]->HeaderText = "ID";
    this->dataGridView1->Columns[1]->HeaderText = "Adresse";
    this->dataGridView1->Columns[2]->HeaderText = "Ville";
    dateachat->Value = DateTime::Now;
    dateachat->MaxDate = DateTime::Now;
    datenais->MaxDate = DateTime::Now;
    if (!current_client->new_client) {
        this->lblid->Text = Convert::ToString(current_client->Getid());
        this->txtnom->Text = current_client->Getnom();
        this->txtprenom->Text = current_client->Getprenom();
        datenais->Value = current_client->Getdate_naissance();
        dateachat->MinDate = current_client->Getdate_naissance();
        dateachat->Value = current_client->Getdate_pr_achat();
        System::Collections::Generic::List<Addr^>^ addr = current_client->Getaddr();
        for (int i = 0; i < addr->Count; i++) {
            dataGridView1->Rows->Add();
            dataGridView1->Rows[i]->Cells[0]->Value = addr[i]->get_id();
            dataGridView1->Rows[i]->Cells[1]->Value = addr[i]->get_adresse();
            dataGridView1->Rows[i]->Cells[2]->Value = addr[i]->get_ville();

        }
    }
    else {
        lblid->Text = "NEW";
    }
}

System::Void Gestionpoo::FicheClient::button5_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->Close();
}
