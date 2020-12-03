#include "Listeclient.h"

System::Void Gestionpoo::Listeclient::Liste_Load(System::Object^ sender, System::EventArgs^ e)
{
	dataGridView1->DataSource = this->gestionclient->listeclients();
}

System::Void Gestionpoo::Listeclient::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	FicheClient^ fc = gcnew FicheClient();
	fc->ShowDialog();
	if (fc->valider) {
		gestionclient->ajouter(fc->get_nom(), fc->get_prenom(), fc->get_date_naissance(), fc->get_pr_achat(), fc->get_adresses());
	}
	Liste_Load(sender, e);
}

System::Void Gestionpoo::Listeclient::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	//client = gcnew Client(Convert::ToInt64(dataGridView1->SelectedRows[0]->Cells[0]->Value));
	//FicheClient^ ficheclient = gcnew FicheClient(client);
	//ficheclient->ShowDialog();
	Liste_Load(sender, e);
}

System::Void Gestionpoo::Listeclient::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void Gestionpoo::Listeclient::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void Gestionpoo::Listeclient::button5_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}
