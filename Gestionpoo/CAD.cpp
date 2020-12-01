#include "CAD.h"

namespace Composant
{
    //le constructeur par défaut
    CAD::CAD()
    {
        this->rq_sql = "RIEN"; //initialiser la requete à RIEN
        //les informations de connexion à la base de données: le serveur; le nom de la BDD; le type de la sécurité
        this->cnx = "Server=tcp:poo.database.windows.net,1433;Initial Catalog=Projetg1;Persist Security Info=False;User ID=nazim;Password=uLafdnE6-;MultipleActiveResultSets=False;Encrypt=True;TrustServerCertificate=False;Connection Timeout=30;";
        this->CNX = gcnew SqlConnection(this->cnx);//connexion à la BDD SQL Server
        this->CMD = gcnew SqlCommand(this->rq_sql, this->CNX);//Initialise une nouvelle instance de la classe SqlCommand avec le texte de la requete et l'objet CNX
        this->CMD->CommandType = CommandType::Text;//définit le type de la commande à texte
    }

    int CAD::actionRowsID(String^ rq_sql)
    {
        int id;
        this->setSQL(rq_sql);
        this->CMD->CommandText = this->rq_sql;
        this->CNX->Open();
        id = Convert::ToInt32(this->CMD->ExecuteScalar()); //récuperer la valeur de l'id lors de l'éxécution de la requete
        this->CNX->Close();
        return id;
    }//permet de récupérer l'ID courant

    void CAD::actionRows(String^ rq_sql)
    {
        this->setSQL(rq_sql);
        this->CMD->CommandText = this->rq_sql;
        this->CNX->Open();
        this->CMD->ExecuteNonQuery();//retourne le nbr de lignes affectées par la commande (rq_sql)
        this->CNX->Close();
    }

    DataTable^ CAD::getRows(String^ rq_sql)
    {
        this->setSQL(rq_sql);
        this->DA = gcnew SqlDataAdapter(this->CMD);
        this->CMD->CommandText = this->rq_sql;
        this->DS = gcnew DataTable();
        this->DA->Fill(this->DS);//remplir le dataset avec la table spécifiée en exécutant la requete de commande
        return this->DS;
    }
    
    void CAD::setSQL(String^ rq_sql)
    {
        if (rq_sql == "" || rq_sql == "RIEN")
        {
            this->rq_sql = "RIEN";
        }
        else
        {
            this->rq_sql = rq_sql;//SELECT/INSERT/UPDATE/CREATE
        }
    }

    //destructeur 
    CAD::~CAD(void)
    {
        delete this->cnx;
        delete this->rq_sql;
        delete this->CNX;
        delete this->DA;
        delete this->DS;
        delete this;
    }
}