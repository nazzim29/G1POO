#include "Listeclient.h"

System::Void Gestionpoo::Listeclient::Liste_Load(System::Object^ sender, System::EventArgs^ e)
{
	dataGridView1->DataSource = this->gestionclient->listeclients();
}

System::Void Gestionpoo::Listeclient::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	FicheClient^ fc = gcnew FicheClient();
	fc->comp_ville = this->gestionclient->listeville();
	fc->ShowDialog();
	if (fc->valider) {
		gestionclient->ajouter(fc->get_nom(), fc->get_prenom(), fc->get_date_naissance(), fc->get_pr_achat(), fc->get_adresses());
	}
	Liste_Load(sender, e);
}

System::Void Gestionpoo::Listeclient::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	FicheClient^ fc = gcnew FicheClient();
	fc->comp_ville = this->gestionclient->listeville();
	this->gestionclient->afficher(Convert::ToInt32(dataGridView1->SelectedRows[0]->Cells[0]->Value));
	fc->set_client(this->gestionclient->get_client());
	fc->set_adresses(this->gestionclient->get_adrclient(), this->gestionclient->get_ville());
	fc->ShowDialog();
	Liste_Load(sender, e);
}

System::Void Gestionpoo::Listeclient::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->gestionclient->supprimer(Convert::ToInt32(this->dataGridView1->SelectedRows[0]->Cells[0]->Value));
	Liste_Load(sender, e);
}

System::Void Gestionpoo::Listeclient::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	FicheClient^ fc = gcnew FicheClient();
	fc->comp_ville = this->gestionclient->listeville();
	this->gestionclient->afficher(Convert::ToInt32(dataGridView1->SelectedRows[0]->Cells[0]->Value));
	fc->set_client(this->gestionclient->get_client());
	fc->set_adresses(this->gestionclient->get_adrclient(), this->gestionclient->get_ville());
	fc->ShowDialog();
	if (fc->valider) {
		this->gestionclient->modifier(fc->get_id(), fc->get_nom(), fc->get_prenom(), fc->get_date_naissance(), fc->get_pr_achat(), fc->get_adresses());
	}
	Liste_Load(sender, e);
}

System::Void Gestionpoo::Listeclient::button5_Click(System::Object^ sender, System::EventArgs^ e)
{
	Liste_Load(sender, e);
}
