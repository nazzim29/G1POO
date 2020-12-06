#include "Listecommande.h"

System::Void Gestionpoo::Listecommande::Liste_Load(System::Object^ sender, System::EventArgs^ e)
{
    System::Data::DataTable^ ds = this->gestioncommande->listecommande();
    this->dataGridView1->DataSource = ds;
}

System::Void Gestionpoo::Listecommande::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    FicheCommande^ fc = gcnew FicheCommande();
    MyForm1^ lstcl = gcnew MyForm1();
    lstcl->set_cl_lst(this->gestioncommande->listeclient());
    lstcl->ShowDialog();
    if (lstcl->selected) {
        this->gestioncommande->set_idclient(lstcl->get_cl_sl());
        fc->set_adresse_list(this->gestioncommande->get_adressesclient());
        fc->set_client(lstcl->get_client());
        fc->listearticle = this->gestioncommande->get_listearticle();
        fc->ShowDialog();
        if (fc->valider) {
            this->gestioncommande->set_commande(fc->get_commande());
            this->gestioncommande->set_choix(fc->get_choix());
            this->gestioncommande->ajouter();
        }
    }
    
}

System::Void Gestionpoo::Listecommande::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
    FicheCommande^ fc = gcnew FicheCommande();
    fc->listearticle = this->gestioncommande->get_listearticle();
    this->gestioncommande->afficher(Convert::ToInt32(this->dataGridView1->SelectedRows[0]->Cells[0]->Value));
    fc->set_adresse_list(this->gestioncommande->get_adressesclient());
    fc->set_client(this->gestioncommande->get_nomprenom());
    fc->set_commande(this->gestioncommande->get_commande());
    fc->set_choix(this->gestioncommande->get_choix());
    fc->ShowDialog();
}

System::Void Gestionpoo::Listecommande::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->gestioncommande->supprimer(int::Parse(this->dataGridView1->SelectedRows[0]->Cells[0]->Value->ToString()));
    Liste_Load(sender, e);
}

System::Void Gestionpoo::Listecommande::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void Gestionpoo::Listecommande::button5_Click(System::Object^ sender, System::EventArgs^ e)
{
    Listecommande::Liste_Load(sender, e);
}
