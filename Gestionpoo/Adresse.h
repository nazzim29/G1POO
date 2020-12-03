#pragma once

namespace Composant
{
	using namespace System;
	ref class Adresse
	{
	private:
		int ID_Adresse;
		String^ adresse;
		int Id_Ville;
		int Id_Client;

	public:
		Adresse(void);
		String^ SELECT(void);
		String^ SELECTbyid(void);
		String^ SELECTbyidclient(void);
		String^ INSERT(void);
		String^ INSERTclient();
		String^ UPDATE(void);
		String^ UPDATEclient(void);
		String^ DELETE(void);
		void setIdAdresse(int);
		void setAdresse(String^);
		void setIdVille(int);
		int getIdAdresse(void);
		String^ getAdresse(void);
		int getIdVille(void);
		void setIdClient(int);
		int getIdClient(void);
	protected:
		~Adresse() {
			delete adresse;
			delete this;
		}

	};
}
