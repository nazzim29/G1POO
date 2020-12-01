#pragma once
//classe se mappage pour la table Article

namespace Composant
{

	ref class Article
	{
	private:
		int ID_article;
		System::String^ Reference_Article;
		System::String^ Designation;
		float Prix_HT;
		float Taux_TVA;
		int Quantite_en_Stock;
		int Seuil_de_reapprovisionnement;
		System::String^ Couleur;
	public:
		Article(); //constructeur par défaut
		//accesseurs
		void SetID_article(int);
		int getID_article(void);
		void SetReference_article(System::String^);
		System::String^ getReference_article(void);
		void SetDesignation(System::String^);
		System::String^ getDesignation(void);
		void setPrix_HT(float);
		float getPrix_HT(void);
		void setTaux_TVA(float);
		float getTaux_TVA(void);
		void setQuantite_en_Stock(int);
		int getQuantite_en_Stock(void);
		void setSeuil_de_reapprovisionnement(int);
		int getSeuil_de_reapprovisionnement(void);
		void SetCouleur(System::String^);
		System::String^ getCouleur(void);
		//methode de mappage pour la table Article
		System::String^ SELECT(void);
		System::String^ INSERT(void);
		System::String^ UPDATE(void);
		System::String^ DELETE(void);
		~Article();
	};
}
