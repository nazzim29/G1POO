#include "Client.h"
namespace Composant {

    using namespace System;
    Composant::Client::Client()
    {
        this->id = -1;
        this->nom = "RIEN";
        this->prenom = "RIEN";
        //initialiser les dates à la date actuelle
        this->date_naiss = System::DateTime::Now;
        this->date_pr_achat = System::DateTime::Now;
    }

    void Composant::Client::SetDate_naiss(System::DateTime^ date_naiss)
    {
        this->date_naiss = date_naiss;
    }

    System::DateTime^ Composant::Client::GetDate_naiss(void)
    {
        return this->date_naiss;
    }

    void Composant::Client::SetDate_pr_achat(System::DateTime^ date_pr_achat)
    {
        this->date_pr_achat = date_pr_achat;
    }

    System::DateTime^ Composant::Client::GetDate_pr_achat()
    {
        return this->date_pr_achat;
    }

    String^ Composant::Client::SELECT(void)
    {
        return "SELECT ID_Client, Nom_C, Prenom_C, Date_de_naissance, Date_du_premier_achat" +
            " FROM Client";
    }

    String^ Client::SELECTbyid()
    {
        return this->SELECT() + " where id_client = " + this->id;
    }

    String^ Composant::Client::INSERT(void)
    {
        return "INSERT INTO Client " +
            "(Nom_C, Prenom_C, Date_de_naissance, Date_du_premier_achat)" +
            "VALUES('" + this->get_nom() + "', '" + this->get_prenom() + "', convert(datetime,'" + date_to_string(this->GetDate_naiss()) + "',103),convert(datetime,'" + date_to_string(this->GetDate_pr_achat()) + "',103));SELECT id_client from client where nom_c = '"+ this->nom+"' and prenom_c = '"+this->prenom+"'" ;
    }

    String^ Composant::Client::UPDATE(void)
    {
        return "UPDATE Client " +
            "SET Nom_C = '" + this->get_nom() + "', Prenom_C = '" + this->get_prenom() + "', Date_de_naissance = convert(datetime,'" + date_to_string(this->GetDate_naiss()) + "',103), Date_du_premier_achat = convert(datetime,'" + date_to_string(this->GetDate_pr_achat()) + "',103) " +
            "WHERE(ID_Client = " + this->get_id() + ");";
    }

    String^ Composant::Client::DELETE(void)
    {
        return "DELETE FROM Client " +
            "WHERE(ID_Client = " + this->get_id() + ");";
    }
    //destructeur
    Client::~Client()
    {
        delete this->date_naiss;
        delete this->date_pr_achat;
        delete this;
    }
    //une methode qui transforme une date de type DateTime à une date de type String
    String^ Client::date_to_string(DateTime^ date) {
        return date->Day + "/" + date->Month + "/" + date->Year;
    }
}