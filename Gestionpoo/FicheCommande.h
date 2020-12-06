#pragma once
#include "Listearticle.h"
#include "Commande.h"
#include "Choisir.h"
namespace Gestionpoo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Description résumée de FicheCommande
	/// </summary>
	public ref class FicheCommande : public System::Windows::Forms::Form
	{
	public:
		bool valider = false;
		DataTable^ listearticle;
		FicheCommande(void)
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
		~FicheCommande()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;






	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DateTimePicker^ dateachat;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DateTimePicker^ datenais;






	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ lblclient;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;







	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Reference;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Designation;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Couleur;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Prix_HT;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ TVA;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Quantite;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Prix_ttc;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ remise;




















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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FicheCommande::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->dateachat = (gcnew System::Windows::Forms::DateTimePicker());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->datenais = (gcnew System::Windows::Forms::DateTimePicker());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Reference = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Designation = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Couleur = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Prix_HT = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TVA = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Quantite = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Prix_ttc = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->remise = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->lblclient = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(68, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(111, 26);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Commande";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(488, 137);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(114, 19);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Date d\'émission";
			// 
			// dateachat
			// 
			this->dateachat->Location = System::Drawing::Point(608, 131);
			this->dateachat->Name = L"dateachat";
			this->dateachat->Size = System::Drawing::Size(217, 27);
			this->dateachat->TabIndex = 15;
			this->dateachat->Value = System::DateTime(2020, 12, 23, 0, 0, 0, 0);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(42, 137);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(119, 19);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Date de livraison";
			// 
			// datenais
			// 
			this->datenais->Location = System::Drawing::Point(167, 131);
			this->datenais->Name = L"datenais";
			this->datenais->Size = System::Drawing::Size(223, 27);
			this->datenais->TabIndex = 13;
			this->datenais->Value = System::DateTime(2020, 12, 5, 13, 40, 51, 502);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Reference,
					this->Designation, this->Couleur, this->Prix_HT, this->TVA, this->Quantite, this->Prix_ttc, this->remise
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 298);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(984, 271);
			this->dataGridView1->TabIndex = 25;
			// 
			// Reference
			// 
			this->Reference->HeaderText = L"Reference";
			this->Reference->Name = L"Reference";
			this->Reference->ReadOnly = true;
			// 
			// Designation
			// 
			this->Designation->HeaderText = L"Designation";
			this->Designation->Name = L"Designation";
			this->Designation->ReadOnly = true;
			// 
			// Couleur
			// 
			this->Couleur->HeaderText = L"Couleur";
			this->Couleur->Name = L"Couleur";
			this->Couleur->ReadOnly = true;
			// 
			// Prix_HT
			// 
			this->Prix_HT->HeaderText = L"Prix HT";
			this->Prix_HT->Name = L"Prix_HT";
			this->Prix_HT->ReadOnly = true;
			// 
			// TVA
			// 
			this->TVA->HeaderText = L"TVA";
			this->TVA->Name = L"TVA";
			this->TVA->ReadOnly = true;
			// 
			// Quantite
			// 
			this->Quantite->HeaderText = L"Quantité Commandée";
			this->Quantite->Name = L"Quantite";
			this->Quantite->ReadOnly = true;
			// 
			// Prix_ttc
			// 
			this->Prix_ttc->HeaderText = L"Prix TTC";
			this->Prix_ttc->Name = L"Prix_ttc";
			this->Prix_ttc->ReadOnly = true;
			this->Prix_ttc->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->Prix_ttc->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// remise
			// 
			this->remise->HeaderText = L"Remise";
			this->remise->Name = L"remise";
			this->remise->ReadOnly = true;
			// 
			// button9
			// 
			this->button9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.BackgroundImage")));
			this->button9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button9->Location = System::Drawing::Point(12, 12);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(50, 50);
			this->button9->TabIndex = 28;
			this->button9->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(29, 190);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(132, 19);
			this->label6->TabIndex = 29;
			this->label6->Text = L"Adresse livraison : ";
			// 
			// comboBox1
			// 
			this->comboBox1->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->comboBox1->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(176, 182);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(267, 27);
			this->comboBox1->TabIndex = 30;
			// 
			// comboBox2
			// 
			this->comboBox2->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->comboBox2->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(615, 182);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(267, 27);
			this->comboBox2->TabIndex = 32;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(461, 185);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(148, 19);
			this->label8->TabIndex = 31;
			this->label8->Text = L"Adresse facturation : ";
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(930, 262);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(30, 30);
			this->button1->TabIndex = 33;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FicheCommande::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Location = System::Drawing::Point(122, 234);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(125, 20);
			this->textBox2->TabIndex = 35;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(40, 233);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(76, 19);
			this->label9->TabIndex = 34;
			this->label9->Text = L"Ref article";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(273, 234);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(66, 19);
			this->label10->TabIndex = 36;
			this->label10->Text = L"Quantité";
			// 
			// textBox4
			// 
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Location = System::Drawing::Point(570, 233);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(125, 20);
			this->textBox4->TabIndex = 39;
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &FicheCommande::textBox4_KeyPress);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(488, 233);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(57, 19);
			this->label11->TabIndex = 38;
			this->label11->Text = L"Remise";
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(966, 262);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(30, 30);
			this->button2->TabIndex = 40;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &FicheCommande::button2_Click);
			// 
			// lblclient
			// 
			this->lblclient->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblclient->Location = System::Drawing::Point(325, 76);
			this->lblclient->Name = L"lblclient";
			this->lblclient->Size = System::Drawing::Size(245, 19);
			this->lblclient->TabIndex = 41;
			this->lblclient->Text = L"Client";
			this->lblclient->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->numericUpDown1->Location = System::Drawing::Point(345, 231);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 23);
			this->numericUpDown1->TabIndex = 42;
			this->numericUpDown1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button3
			// 
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->Location = System::Drawing::Point(446, 575);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(116, 38);
			this->button3->TabIndex = 43;
			this->button3->Text = L"Valider";
			this->button3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &FicheCommande::button3_Click);
			// 
			// button4
			// 
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(966, 12);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(30, 30);
			this->button4->TabIndex = 44;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &FicheCommande::button4_Click);
			// 
			// FicheCommande
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 19);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ClientSize = System::Drawing::Size(1003, 625);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->lblclient);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->dateachat);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->datenais);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FicheCommande";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"FicheCommande";
			this->Load += gcnew System::EventHandler(this, &FicheCommande::FicheCommande_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public:
			Composant::Commande^ get_commande();
			void set_adresse_list(DataTable^);
			void set_article_list(DataTable^);
			System::Collections::Generic::List<Composant::Choisir^>^ get_choix();
			void set_commande(Composant::Commande^ d);
			void set_client(String^ d);


			void set_choix(System::Collections::Generic::List<Composant::Choisir^>^ l);
		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void FicheCommande_Load(System::Object^ sender, System::EventArgs^ e);
		private: bool existinarticle(String^ f);
		private: int getartindex(String^ s);
		private: int getartindex(int i);	
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void textBox4_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);
		private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	valider = true;
	this->Close();
}
};
}
