#include "FicheArticle.h"

System::Void Gestionpoo::FicheArticle::FicheArticle_Load(System::Object^ sender, System::EventArgs^ e)
{

}

System::Void Gestionpoo::FicheArticle::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->Close();
}

System::Void Gestionpoo::FicheArticle::button6_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->article->SetReference_article(this->txtref->Text);
    this->article->SetDesignation(this->txtdesignation->Text);
    this->article->SetCouleur(this->txtcouleur->Text);
    this->article->setPrix_HT(float::Parse(this->ht->Text->Replace(".",",")));
    this->article->setQuantite_en_Stock(Convert::ToInt32(quanstock->Value));
    this->article->setSeuil_de_reapprovisionnement(Convert::ToDouble(this->seuil->Value));
    this->article->setTaux_TVA(Convert::ToDouble(this->tva->Text->Replace(".",",")));
    valider = true;
    this->Close();
}

void Gestionpoo::FicheArticle::set_article(Composant::Article^ a)
{
    this->article = a;
    this->lblid->Text = this->article->getID_article().ToString();
    this->txtref->Text = this->article->getReference_article();
    this->txtdesignation->Text = this->article->getDesignation();
    this->txtcouleur->Text = this->article->getCouleur();
    this->ht->Text = this->article->getPrix_HT().ToString();
    this->quanstock->Value = this->article->getQuantite_en_Stock();

    this->seuil->Value = this->article->getSeuil_de_reapprovisionnement();
    this->tva->Text = this->article->getTaux_TVA().ToString();
}

Composant::Article^ Gestionpoo::FicheArticle::get_article(void)
{
    return this->article;
}

void Gestionpoo::FicheArticle::num_box(System::Windows::Forms::KeyPressEventArgs^ e)
{
    if (e->KeyChar == ',' || e->KeyChar == '.') {
        e->KeyChar = '.';
    }
    else if (!System::Char::IsDigit(e->KeyChar)) {
        e->Handled = true;
    }
}
