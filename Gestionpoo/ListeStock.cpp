#include "ListeStock.h"

System::Void Gestionpoo::ListeStock::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	FicheArticle^ fa = gcnew FicheArticle();
	fa->ShowDialog();
	if (fa->valider) {
		this->gestionarticle->ajouter(fa->get_article()->getReference_article(), fa->get_article()->getDesignation(), fa->get_article()->getPrix_HT(), fa->get_article()->getTaux_TVA(), fa->get_article()->getQuantite_en_Stock(), fa->get_article()->getSeuil_de_reapprovisionnement(), fa->get_article()->getCouleur());
	}
	Liste_Load(sender, e);
}

System::Void Gestionpoo::ListeStock::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	FicheArticle^ fa = gcnew FicheArticle();
	this->gestionarticle->afficher(Convert::ToInt32(dataGridView1->SelectedRows[0]->Cells[0]->Value));
	fa->set_article(this->gestionarticle->get_article());
	fa->ShowDialog();
}

System::Void Gestionpoo::ListeStock::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->gestionarticle->afficher(Convert::ToInt32(dataGridView1->SelectedRows[0]->Cells[0]->Value));
	DialogResult r = System::Windows::Forms::MessageBox::Show("voulez vous supprimer l'article " + this->gestionarticle->get_article()->getDesignation(), "Suppression!", MessageBoxButtons::OKCancel);
	if (r == DialogResult::OK) {
		this->gestionarticle->supprimer(this->gestionarticle->get_article()->getID_article());
	}
	Liste_Load(sender,e);
}

System::Void Gestionpoo::ListeStock::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	FicheArticle^ fa = gcnew FicheArticle();
	this->gestionarticle->afficher(Convert::ToInt32(dataGridView1->SelectedRows[0]->Cells[0]->Value));
	fa->set_article(this->gestionarticle->get_article());
	fa->ShowDialog();
	if (fa->valider) {
		this->gestionarticle->modifier(fa->get_article()->getID_article(), fa->get_article()->getReference_article(), fa->get_article()->getDesignation(), fa->get_article()->getPrix_HT()
			, fa->get_article()->getTaux_TVA(), fa->get_article()->getQuantite_en_Stock(), fa->get_article()->getSeuil_de_reapprovisionnement(), fa->get_article()->getCouleur());
	}
	Liste_Load(sender, e);
}

System::Void Gestionpoo::ListeStock::button5_Click(System::Object^ sender, System::EventArgs^ e)
{
	ListeStock::Liste_Load(sender, e);
}

System::Void Gestionpoo::ListeStock::Liste_Load(System::Object^ sender, System::EventArgs^ e)
{
	this->dataGridView1->DataSource = this->gestionarticle->listestock();
}
