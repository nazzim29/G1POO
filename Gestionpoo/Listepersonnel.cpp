#include "Listepersonnel.h"

System::Void Gestionpoo::Listepersonnel::Liste_Load(System::Object^ sender, System::EventArgs^ e)
{
	dataGridView1->DataSource = gestionemploye->listeemploye();
}

System::Void Gestionpoo::Listepersonnel::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	FicheEmploye^ fe = gcnew FicheEmploye();

	fe->ShowDialog();

}

System::Void Gestionpoo::Listepersonnel::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	FicheEmploye^ fe = gcnew FicheEmploye();
	gestionemploye->afficher(Convert::ToInt32(dataGridView1->SelectedRows[0]->Cells[0]->Value));
	fe->ShowDialog();
}

System::Void Gestionpoo::Listepersonnel::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void Gestionpoo::Listepersonnel::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void Gestionpoo::Listepersonnel::button5_Click(System::Object^ sender, System::EventArgs^ e)
{
	Listepersonnel::Liste_Load(sender, e);
}
