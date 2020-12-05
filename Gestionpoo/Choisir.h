#pragma once

namespace Composant
{
	using namespace System;
	ref class Choisir
	{
	private:
		int Id_Article;
		int Id_Commande;
		int Quantité_Article;
		float Remise,prix_ht,tva;

	public:
		Choisir(void);
		String^ SELECT(void);
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);
		void setIdArticle(int);
		void setIdCommande(int);
		void setQuantiteAricle(int);
		void setRemise(float);
		int getIdArticle(void);
		int getIdCommande(void);
		int getQuantiteArticle(void);
		float getRemise(void);
		float getprixht(void);
		float gettva(void);
		void settva(float);
		void setprixht(float);
	protected:
		~Choisir() {
			delete this;
		}
	};
}