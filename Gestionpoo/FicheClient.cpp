#include "FicheClient.h"

System::Void Gestionpoo::FicheClient::FicheClient_Load(System::Object^ sender, System::EventArgs^ e)
{
    this->lblid->Text = Convert::ToString(current_client->Getid());
    this->txtnom->Text = current_client->Getnom();
    this->txtprenom->Text = current_client->Getprenom();
    datenais->Value = current_client->Getdate_naissance();
    dateachat->Value = current_client->Getdate_pr_achat();
    for
}
