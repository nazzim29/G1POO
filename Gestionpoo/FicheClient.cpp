#include "FicheClient.h"

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
    System::Data::DataTable^ d = gcnew System::Data::DataTable();
    d->Columns->Add("id");
    d->Columns->Add("adresse");
    d->Columns->Add("ville");
    for (int i = 0; i < dataGridView1->Rows->Count-1;i++) {
        d->Rows->Add(Convert::ToInt32(dataGridView1->Rows[i]->Cells[0]->Value), Convert::ToString(dataGridView1->Rows[i]->Cells[1]->Value), Convert::ToString(dataGridView1->Rows[i]->Cells[2]->Value));
    }
    return d;
}

void Gestionpoo::FicheClient::set_info(int id, String^ nom, String^ prenom, System::DateTime^ naissance, System::DateTime^ pr_achat, List<Composant::Adresse^>^ adresses, List<Composant::Ville^>^ ville)
{
    lblid->Text = Convert::ToString(id);
    txtnom->Text = nom;
    txtprenom->Text = prenom;
    dateachat->Value = System::DateTime(naissance->Year, naissance->Month, naissance->Day);
    datenais->Value = System::DateTime(pr_achat->Year, pr_achat->Month, naissance->Day);
}


System::Void Gestionpoo::FicheClient::button6_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->valider = true;
    this->Close();
}

System::Void Gestionpoo::FicheClient::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
    Ficheadresse^ fa = gcnew Ficheadresse();
    fa->set_comp_ville(comp_ville);
    fa->ShowDialog();
    dataGridView1->Rows->Add(0, fa->get_adresse(), fa->get_ville());

}

System::Void Gestionpoo::FicheClient::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
    Ficheadresse^ fa = gcnew Ficheadresse();
    fa->set_comp_ville(this->comp_ville);
    fa->set_ville(Convert::ToString(dataGridView1->SelectedRows[0]->Cells[2]->Value));
    fa->set_adresse(Convert::ToString(dataGridView1->SelectedRows[0]->Cells[1]->Value));
    fa->ShowDialog();
    dataGridView1->SelectedRows[0]->Cells[2]->Value = fa->get_ville();
    dataGridView1->SelectedRows[0]->Cells[1]->Value = fa->get_adresse();
}

System::Void Gestionpoo::FicheClient::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
    del_add->Add(Convert::ToInt32(dataGridView1->SelectedRows[0]->Cells[0]->Value));
    dataGridView1->Rows->Remove(dataGridView1->SelectedRows[0]);
}
