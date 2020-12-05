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
    }
    
}

System::Void Gestionpoo::Listecommande::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void Gestionpoo::Listecommande::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void Gestionpoo::Listecommande::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void Gestionpoo::Listecommande::button5_Click(System::Object^ sender, System::EventArgs^ e)
{
    Listecommande::Liste_Load(sender, e);
}
