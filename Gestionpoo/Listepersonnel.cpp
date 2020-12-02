#include "Listepersonnel.h"

System::Void Gestionpoo::Listepersonnel::Liste_Load(System::Object^ sender, System::EventArgs^ e)
{
	dataGridView1->DataSource = gestionemploye->listeemploye();
}

System::Void Gestionpoo::Listepersonnel::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	FicheEmploye^ fe = gcnew FicheEmploye();
	fe->ShowDialog();
	if (fe->havesup()) {
		gestionemploye->ajouter(fe->get_nom(), fe->get_prenom(), fe->get_embauche(), fe->get_adresse(), fe->get_ville(), fe->get_sup());
	}
	else {
		gestionemploye->ajouter(fe->get_nom(), fe->get_prenom(), fe->get_embauche(), fe->get_adresse(), fe->get_ville());
	}


}

System::Void Gestionpoo::Listepersonnel::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	FicheEmploye^ fe = gcnew FicheEmploye();
	gestionemploye->afficher(Convert::ToInt32(dataGridView1->SelectedRows[0]->Cells[0]->Value));
	fe->set_nom(gestionemploye->personnel->get_nom());
	fe->set_prenom(gestionemploye->personnel->get_prenom());
	fe->set_date(gestionemploye->personnel->get_date_embauche());
	fe->set_sup(gestionemploye->personnel->get_id_superieur());
	fe->set_adresse(gestionemploye->adresse->getAdresse());
	fe->set_ville(gestionemploye->ville->getIdVille());
	fe->set_id(gestionemploye->personnel->get_id());
	fe->set_comp_sup(gestionemploye->cad->getRows("select id_Personnel, concat(nom_P,' ',prenom_P) as employe from personnel"));
	fe->set_comp_ville(gestionemploye->cad->getRows("select id_ville,nom_ville from ville"));
	//fe->mode_affichage();
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
