#include "SVC_Gstat.h"

Service::SVC_Gstat::SVC_Gstat()
{
    this->cad = gcnew Composant::CAD();
}

float Service::SVC_Gstat::calculpaniermoyen()
{
    float chiffreaffaire;
    int nbcommande = this->cad->actionRowsID("Select count(id_commande) from commande");
    DataTable^ t = this->cad->getRows("select sum((prix_ht +(prix_ht*(tva-remise)/100))*quantite_article) from choisir");
    if (t->Rows[0]->ItemArray[0]->ToString() != "") {
        chiffreaffaire = float::Parse(t->Rows[0]->ItemArray[0]->ToString());
    }
    else {
        chiffreaffaire = 0.00;
    }
    return chiffreaffaire / nbcommande;
}

float Service::SVC_Gstat::calculchiffreaffaire(DateTime^, DateTime^)
{
    
}
