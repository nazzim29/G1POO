#pragma once
#include "Article.h"

namespace Gestionpoo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de FicheArticle
	/// </summary>
	public ref class FicheArticle : public System::Windows::Forms::Form
	{
	public:
		Composant::Article^ article = gcnew Composant::Article();
	private: System::Windows::Forms::NumericUpDown^ seuil;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtcouleur;

	public:
		bool valider = false;

		FicheArticle(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~FicheArticle()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtref;





	private: System::Windows::Forms::Label^ label5;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtdesignation;

	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::Label^ label8;

	private: System::Windows::Forms::Button^ button6;



	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ lblid;

	private: System::Windows::Forms::NumericUpDown^ quanstock;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ ht;

	private: System::Windows::Forms::TextBox^ tva;


	private: System::Windows::Forms::Button^ button2;


	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FicheArticle::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtref = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtdesignation = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lblid = (gcnew System::Windows::Forms::Label());
			this->quanstock = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->ht = (gcnew System::Windows::Forms::TextBox());
			this->tva = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->seuil = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtcouleur = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->quanstock))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->seuil))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(70, 23);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(120, 26);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Fiche Article";
			// 
			// txtref
			// 
			this->txtref->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtref->Location = System::Drawing::Point(180, 141);
			this->txtref->Multiline = true;
			this->txtref->Name = L"txtref";
			this->txtref->Size = System::Drawing::Size(125, 19);
			this->txtref->TabIndex = 6;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(98, 141);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(75, 19);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Reference";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(337, 141);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(87, 19);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Designation";
			// 
			// txtdesignation
			// 
			this->txtdesignation->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtdesignation->Location = System::Drawing::Point(430, 141);
			this->txtdesignation->Multiline = true;
			this->txtdesignation->Name = L"txtdesignation";
			this->txtdesignation->Size = System::Drawing::Size(125, 19);
			this->txtdesignation->TabIndex = 13;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(45, 192);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(128, 19);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Quantité en stock ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(9, 242);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(165, 19);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Seuil reaprovisionement";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(352, 242);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(72, 19);
			this->label8->TabIndex = 20;
			this->label8->Text = L"Taux TVA:";
			// 
			// button6
			// 
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button6->Location = System::Drawing::Point(235, 336);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(144, 35);
			this->button6->TabIndex = 25;
			this->button6->Text = L"Valider  ";
			this->button6->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &FicheArticle::button6_Click);
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(50, 50);
			this->button1->TabIndex = 26;
			this->button1->UseVisualStyleBackColor = true;
			// 
			// lblid
			// 
			this->lblid->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lblid->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblid->Location = System::Drawing::Point(256, 70);
			this->lblid->Name = L"lblid";
			this->lblid->Size = System::Drawing::Size(144, 41);
			this->lblid->TabIndex = 27;
			this->lblid->Text = L"Identifiant";
			this->lblid->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// quanstock
			// 
			this->quanstock->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->quanstock->Location = System::Drawing::Point(180, 190);
			this->quanstock->Name = L"quanstock";
			this->quanstock->Size = System::Drawing::Size(125, 23);
			this->quanstock->TabIndex = 28;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(369, 192);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 19);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Prix HT";
			// 
			// ht
			// 
			this->ht->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ht->Location = System::Drawing::Point(431, 192);
			this->ht->Multiline = true;
			this->ht->Name = L"ht";
			this->ht->Size = System::Drawing::Size(124, 19);
			this->ht->TabIndex = 29;
			// 
			// tva
			// 
			this->tva->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tva->Location = System::Drawing::Point(431, 242);
			this->tva->Multiline = true;
			this->tva->Name = L"tva";
			this->tva->Size = System::Drawing::Size(124, 19);
			this->tva->TabIndex = 31;
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->button2->Location = System::Drawing::Point(572, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(30, 30);
			this->button2->TabIndex = 32;
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &FicheArticle::button2_Click);
			// 
			// seuil
			// 
			this->seuil->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->seuil->Location = System::Drawing::Point(180, 238);
			this->seuil->Name = L"seuil";
			this->seuil->Size = System::Drawing::Size(125, 23);
			this->seuil->TabIndex = 33;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(98, 289);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 19);
			this->label2->TabIndex = 35;
			this->label2->Text = L"Reference";
			// 
			// txtcouleur
			// 
			this->txtcouleur->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtcouleur->Location = System::Drawing::Point(180, 289);
			this->txtcouleur->Multiline = true;
			this->txtcouleur->Name = L"txtcouleur";
			this->txtcouleur->Size = System::Drawing::Size(125, 19);
			this->txtcouleur->TabIndex = 34;

			// 
			// FicheArticle
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 19);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ClientSize = System::Drawing::Size(614, 383);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtcouleur);
			this->Controls->Add(this->seuil);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->tva);
			this->Controls->Add(this->ht);
			this->Controls->Add(this->quanstock);
			this->Controls->Add(this->lblid);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtdesignation);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txtref);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FicheArticle";
			this->Text = L"FicheArticle";
			this->Load += gcnew System::EventHandler(this, &FicheArticle::FicheArticle_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->quanstock))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->seuil))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void FicheArticle_Load(System::Object^ sender, System::EventArgs^ e);
		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e);
		public:
			void set_article(Composant::Article^);
			Composant::Article^ get_article(void);
};
}
