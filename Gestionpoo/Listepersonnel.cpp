#include "Listepersonnel.h"

System::Void Gestionpoo::Listepersonnel::Liste_Load(System::Object^ sender, System::EventArgs^ e)
{
	//chargement de la liste des des employe
	dataGridView1->DataSource = gestionemploye->listeemploye();
}

System::Void Gestionpoo::Listepersonnel::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	//ajout d'un nouvel employe
	fe = gcnew FicheEmploye();

	fe->set_comp_sup(gestionemploye->cad->getRows("select id_Personnel, concat(nom_P,' ',prenom_P) as employe from personnel"));
	fe->set_comp_ville(gestionemploye->cad->getRows("select id_ville,nom_ville from ville"));
	fe->ShowDialog();
	if (fe->validate) {
		if (fe->havesup()) {
			gestionemploye->ajouter(fe->get_nom(), fe->get_prenom(), fe->get_embauche(), fe->get_adresse(), fe->get_ville(), fe->get_sup());
		}
		else {
			gestionemploye->ajouter(fe->get_nom(), fe->get_prenom(), fe->get_embauche(), fe->get_adresse(), fe->get_ville());
		}
		Listepersonnel::Liste_Load(sender, e);
	}
}

System::Void Gestionpoo::Listepersonnel::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	//affichage d'un personnel
	fe = gcnew FicheEmploye();
	gestionemploye->afficher(Convert::ToInt32(dataGridView1->SelectedRows[0]->Cells[0]->Value));
	fe->set_comp_sup(gestionemploye->cad->getRows("select id_Personnel, concat(nom_P,' ',prenom_P) as employe from personnel"));
	fe->set_comp_ville(gestionemploye->cad->getRows("select id_ville,nom_ville from ville"));
	fe->set_nom(gestionemploye->personnel->get_nom());
	fe->set_prenom(gestionemploye->personnel->get_prenom());
	fe->set_date(gestionemploye->personnel->get_date_embauche());
	fe->set_sup(gestionemploye->personnel->get_id_superieur());
	fe->set_adresse(gestionemploye->adresse->getAdresse());
	fe->set_ville(gestionemploye->ville->getIdVille());
	fe->set_id(gestionemploye->personnel->get_id());
	fe->mode_affichage();
	fe->ShowDialog();
}

System::Void Gestionpoo::Listepersonnel::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	//supprimer un employe
	gestionemploye->afficher(Convert::ToInt32(dataGridView1->SelectedRows[0]->Cells[0]->Value));
	DialogResult result = MessageBox::Show("etes vous sur de vouloir supprimer l'employe " + this->gestionemploye->personnel->get_nom() + " " + this->gestionemploye->personnel->get_prenom() + "?", "Suppression d'un employe", MessageBoxButtons::OKCancel);
	if (result == DialogResult::OK) {
		gestionemploye->supprimer();
		Listepersonnel::Liste_Load(sender, e);
	}

}

System::Void Gestionpoo::Listepersonnel::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	//modifier un employe 
	button2_Click(sender, e);
	if (fe->validate) {
		if (fe->havesup()) {
			gestionemploye->modifier(fe->get_id(),fe->get_nom(), fe->get_prenom(), fe->get_embauche(), fe->get_adresse(), fe->get_ville(), fe->get_sup());
		}
		else {
			gestionemploye->modifier(fe->get_id(),fe->get_nom(), fe->get_prenom(), fe->get_embauche(), fe->get_adresse(), fe->get_ville());
		}
		Listepersonnel::Liste_Load(sender, e);
	}
}

System::Void Gestionpoo::Listepersonnel::button5_Click(System::Object^ sender, System::EventArgs^ e)
{
	//actualiser la liste des employe
	Listepersonnel::Liste_Load(sender, e);
}
