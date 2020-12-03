#include "Listecommande.h"

System::Void Gestionpoo::Listecommande::Liste_Load(System::Object^ sender, System::EventArgs^ e)
{
    System::Data::DataTable^ ds = this->gestioncommande->cad->getRows(this->gestioncommande->commande->SELECT());
    this->dataGridView1->DataSource = ds;
}

System::Void Gestionpoo::Listecommande::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    FicheCommande^ fc = gcnew FicheCommande();
    MyForm1^ lstcl = gcnew MyForm1();
    lstcl->set_cl_lst(this->gestioncommande->cad->getRows(this->gestioncommande->client->SELECT()));
    lstcl->ShowDialog();
    if (lstcl->selected) {
        this->gestioncommande->client->set_id(lstcl->get_cl_sl());
        this->gestioncommande.
        fc->set_adresse_list(this->gestioncommande->cad->getRows("SELECT id_adresse, concat(adresse,' ,',(SELECT ville from ville where ville.id_ville = adresse.id_ville)) as adresse from adresse where id_client = " + this->gestioncommande->client->get_id()));

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
