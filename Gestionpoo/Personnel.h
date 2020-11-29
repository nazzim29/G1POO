
#include "Personne.h"
#include"Addr.h"
ref class Personnel :
    public Personne
{
 private:
    System::DateTime date_embauche;
    Addr^ addr;
    

public:
    System::DateTime Getdate_embauche();
    void Setdate_embache(System::DateTime date_embache);

    Addr^ Getaddr();
    void Setaddr_(Addr^ addr);

 
  
    Personnel::Personnel(System::DateTime date_embauche, Addr^ addr);
    Personnel::Personnel();

    Personnel::~Personnel();

};
