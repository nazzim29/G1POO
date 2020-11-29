#include "ListeStock.h"

System::Void Gestionpoo::ListeStock::button1_Click(System::Object^ sender, System::EventArgs^ e)
{

	
}

System::Void Gestionpoo::ListeStock::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void Gestionpoo::ListeStock::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void Gestionpoo::ListeStock::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void Gestionpoo::ListeStock::button5_Click(System::Object^ sender, System::EventArgs^ e)
{
	ListeStock::Liste_Load(sender, e);
}

System::Void Gestionpoo::ListeStock::Liste_Load(System::Object^ sender, System::EventArgs^ e)
{
	SqlConnection^ dbcnx = gcnew SqlConnection("Server=tcp:poo.database.windows.net,1433;Initial Catalog=Projetg1;Persist Security Info=False;User ID=nazim;Password=uLafdnE6-;MultipleActiveResultSets=False;Encrypt=True;TrustServerCertificate=False;Connection Timeout=30;");
	SqlCommand^ query = gcnew SqlCommand("SELECT ID,Ref,Nom,((prix_ht*tva/100)+prix_ht)as [Prix TTC],quantite_stock as [Quantité en Stock],Couleur from article", dbcnx);
	SqlDataAdapter^ adapter = gcnew SqlDataAdapter(query);
	DataTable^ dt = gcnew DataTable();
	adapter->Fill(dt);
	dataGridView1->DataSource = dt;
}
