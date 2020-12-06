#include "FicheCommande.h"





void Gestionpoo::FicheCommande::set_adresse_list(DataTable^ ds)
{
    comboBox1->DataSource = ds->Copy();
    comboBox1->ValueMember = "id_adresse";
    comboBox1->DisplayMember = "adresse";
    comboBox2->DataSource = ds->Copy();
    comboBox2->ValueMember = "id_adresse";
    comboBox2->DisplayMember = "adresse";
}

void Gestionpoo::FicheCommande::set_article_list(DataTable^ ds)
{
    dataGridView1->DataSource = ds;
}

System::Collections::Generic::List<Composant::Choisir^>^ Gestionpoo::FicheCommande::get_choix()
{
    System::Collections::Generic::List<Composant::Choisir^>^ c = gcnew System::Collections::Generic::List<Composant::Choisir^>();
    Composant::Choisir^ a = gcnew Composant::Choisir();
    for (int i = 0; i < dataGridView1->Rows->Count; i++)
    {
        int f = getartindex(dataGridView1->Rows[i]->Cells[0]->Value->ToString());
        a->setIdArticle(Convert::ToInt32(listearticle->Rows[f]->ItemArray[0]));
        a->setQuantiteAricle(Convert::ToInt32(dataGridView1->Rows[i]->Cells[5]->Value));
        a->setRemise(float::Parse(dataGridView1->Rows[i]->Cells[7]->Value->ToString()));
        a->setprixht(float::Parse(dataGridView1->Rows[i]->Cells[3]->Value->ToString()));
        a->settva(float::Parse(dataGridView1->Rows[i]->Cells[4]->Value->ToString()));
        c->Add(a);
        a = gcnew Composant::Choisir();
    }
    return c;
}

void Gestionpoo::FicheCommande::set_commande(Composant::Commande^ d)
{
    comboBox1->SelectedValue = d->get_id_adresse_livraison();
    comboBox2->SelectedValue = d->get_adresse_facturation();
    datenais->Value = DateTime(d->get_date_livraison()->Year, d->get_date_livraison()->Month, d->get_date_livraison()->Day);
    dateachat->Value = DateTime(d->get_date_emission()->Year, d->get_date_emission()->Month, d->get_date_emission()->Day);
}

void Gestionpoo::FicheCommande::set_client(String^ d)
{
    this->lblclient->Text = d;
}

void Gestionpoo::FicheCommande::set_choix(System::Collections::Generic::List<Composant::Choisir^>^ l)
{
    for (int i = 0; i < l->Count; i++) {
        int f = getartindex(l[i]->getIdArticle());
        this->dataGridView1->Rows->Add(listearticle->Rows[f]->ItemArray[1]->ToString(),
            listearticle->Rows[f]->ItemArray[2]->ToString(),
            listearticle->Rows[f]->ItemArray[7]->ToString(),
            l[i]->getprixht(),
            l[i]->gettva(),
            l[i]->getQuantiteArticle(),
            (l[i]->getprixht() + (l[i]->getprixht() * l[i]->gettva())) * l[i]->getQuantiteArticle(),
            l[i]->getRemise());
            //reference,designation,couleur,prixht,tva,quantité,prixttc,remise
    }
}



Composant::Commande^ Gestionpoo::FicheCommande::get_commande()
{
    Composant::Commande^ c = gcnew Composant::Commande();
    c->set_date_livraison(this->datenais->Value);
    c->set_date_emmision(this->dateachat->Value);
    c->set_date_reglement_solde(DateTime::MaxValue);
    c->set_ref(lblclient->Text->Substring(0, 2) + lblclient->Text->Substring(lblclient->Text->IndexOf(' ') + 1, 2) + DateTime::Now.Year + comboBox1->Text->Substring(comboBox1->Text->IndexOf(',') + 1, 3));
    c->set_id_adresse_facturation(Convert::ToInt32(comboBox1->SelectedValue));
    c->set_id_adresse_livraison(Convert::ToInt32(comboBox2->SelectedValue));
    return c;
}

System::Void Gestionpoo::FicheCommande::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
    Listearticle^ la = gcnew Listearticle();
    la->dt = this->listearticle;
    la->ShowDialog();
    if (la->valider) {
        textBox2->Text = la->ref;
    }
}

System::Void Gestionpoo::FicheCommande::FicheCommande_Load(System::Object^ sender, System::EventArgs^ e)
{
    AutoCompleteStringCollection^ d = gcnew AutoCompleteStringCollection();
    textBox2->AutoCompleteSource = AutoCompleteSource::CustomSource;
    for (size_t i = 0; i < listearticle->Rows->Count; i++)
    {
        d->Add(listearticle->Rows[i]->ItemArray[1]->ToString());
    }
    textBox2->AutoCompleteCustomSource = d;
}

bool Gestionpoo::FicheCommande::existinarticle(String^ f)
{
    for (size_t i = 0; i < listearticle->Rows->Count; i++)
    {
        if (listearticle->Rows[i]->ItemArray[1]->ToString()->Equals(f)) {
            return true;
        }
    }
    return false;
}

int Gestionpoo::FicheCommande::getartindex(String^ s)
{
    for (size_t i = 0; i < listearticle->Rows->Count; i++)
    {
        if (listearticle->Rows[i]->ItemArray[1]->ToString()->Equals(s)) {
            return i;
        }
    }
}

int Gestionpoo::FicheCommande::getartindex(int s)
{
    for (size_t i = 0; i < listearticle->Rows->Count; i++)
    {
        if (listearticle->Rows[i]->ItemArray[0]->ToString()->Equals(s.ToString())) {
            return i;
        }
    }
}

System::Void Gestionpoo::FicheCommande::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (existinarticle(textBox2->Text)) {
        if (numericUpDown1->Value != 0) {
            int indexart = getartindex(textBox2->Text);

            if (numericUpDown1->Value > Convert::ToDecimal(Convert::ToInt32(listearticle->Rows[indexart]->ItemArray[5]->ToString()))) {
                System::Windows::Forms::MessageBox::Show("Quantité en stock insuffisante", "Incohérance", MessageBoxButtons::OK);
                numericUpDown1->Value = Convert::ToDecimal(Convert::ToInt32(listearticle->Rows[getartindex(textBox2->Text)]->ItemArray[5]));
            }
            else {
                float remise;
                float prix_ht_unit = float::Parse(listearticle->Rows[indexart]->ItemArray[3]->ToString());
                if (textBox4->Text != "") {
                    remise = float::Parse(textBox4->Text) / 100;
                }
                else {
                    remise = 0.00;
                }
                float tva = float::Parse(listearticle->Rows[indexart]->ItemArray[4]->ToString()) / 100;
                float prix_ttc = prix_ht_unit + (prix_ht_unit * (tva - remise));
                dataGridView1->Rows->Add(listearticle->Rows[indexart]->ItemArray[1]->ToString(),
                    listearticle->Rows[indexart]->ItemArray[2]->ToString(),
                    listearticle->Rows[indexart]->ItemArray[7]->ToString(),
                    listearticle->Rows[indexart]->ItemArray[3]->ToString(),
                    listearticle->Rows[indexart]->ItemArray[4]->ToString(),
                    numericUpDown1->Value.ToString(),
                    prix_ttc * Convert::ToInt32(numericUpDown1->Value),
                    remise*100);
            }
        }
        else {
            System::Windows::Forms::MessageBox::Show("Vous avez oublié d'insérer la quantité!");
        }
    }
    else {
        System::Windows::Forms::MessageBox::Show("La réference n'existe pas dans le stock!!");
    }
}

System::Void Gestionpoo::FicheCommande::textBox4_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
    if (e->KeyChar == ',' || e->KeyChar == '.') {
        e->KeyChar = ',';
    }
    else if (!System::Char::IsDigit(e->KeyChar)) {
        e->Handled = true;
    }
}

System::Void Gestionpoo::FicheCommande::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->Close();
}
