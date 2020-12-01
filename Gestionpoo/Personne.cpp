#include "Personne.h"
namespace Composant {
    

    Composant::Personne::Personne()
    {
        
    }

    void Composant::Personne::set_nom(String^ nom)
    {
        this->nom = nom;
    }

    void Composant::Personne::set_prenom(String^ prenom)
    {
        this->prenom = prenom;
    }

    String^ Composant::Personne::get_nom()
    {
        return this->nom;
    }

    String^ Composant::Personne::get_prenom()
    {
        return this->prenom;
    }

    void Composant::Personne::set_id(int id)
    {
        this->id = id;
    }

    int Composant::Personne::get_id()
    {
        return this->id;
    }

    String^ Personne::SELECT(void)
    {
        throw gcnew System::NotImplementedException();
        // TODO: insérer une instruction return ici
    }

    String^ Personne::INSERT(void)
    {
        throw gcnew System::NotImplementedException();
        // TODO: insérer une instruction return ici
    }

    String^ Personne::UPDATE(void)
    {
        throw gcnew System::NotImplementedException();
        // TODO: insérer une instruction return ici
    }

    String^ Personne::DELETE(void)
    {
        throw gcnew System::NotImplementedException();
        // TODO: insérer une instruction return ici
    }

}