#include "Listepersonnel.h"

System::Void Gestionpoo::Listepersonnel::Liste_Load(System::Object^ sender, System::EventArgs^ e)
{
	SqlConnection^ dbcnx = gcnew SqlConnection("Server=tcp:poo.database.windows.net,1433;Initial Catalog=Projetg1;Persist Security Info=False;User ID=nazim;Password=uLafdnE6-;MultipleActiveResultSets=False;Encrypt=True;TrustServerCertificate=False;Connection Timeout=30;");
	SqlCommand^ query = gcnew SqlCommand("SELECT ID , Nom ,Prenom FROM [dbo].[client]", dbcnx);
	SqlDataAdapter^ adapter = gcnew SqlDataAdapter(query);
	DataTable^ dt = gcnew DataTable();
	adapter->Fill(dt);
	dataGridView1->DataSource = dt;
}

System::Void Gestionpoo::Listepersonnel::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void Gestionpoo::Listepersonnel::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
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
