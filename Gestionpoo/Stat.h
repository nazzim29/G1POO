#pragma once
#include "SVC_Gstat.h"
namespace Gestionpoo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Stat
	/// </summary>
	public ref class Stat : public System::Windows::Forms::UserControl
	{
	private: Service::SVC_Gstat^ stat = gcnew Service::SVC_Gstat();
	public:
		Stat(void)
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
		~Stat()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DateTimePicker^ debut;
	private: System::Windows::Forms::ComboBox^ lstclient;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DateTimePicker^ fin;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ montantclient;
	private: System::Windows::Forms::Label^ chifreaffaire;
	private: System::Windows::Forms::Label^ paniermoyen;
	private: System::Windows::Forms::Label^ valeurstock;
	private: System::Windows::Forms::Button^ button1;

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Stat::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->debut = (gcnew System::Windows::Forms::DateTimePicker());
			this->lstclient = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->fin = (gcnew System::Windows::Forms::DateTimePicker());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->montantclient = (gcnew System::Windows::Forms::Label());
			this->chifreaffaire = (gcnew System::Windows::Forms::Label());
			this->paniermoyen = (gcnew System::Windows::Forms::Label());
			this->valeurstock = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
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
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->Location = System::Drawing::Point(885, 67);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(157, 331);
			this->dataGridView1->TabIndex = 0;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->AllowUserToResizeColumns = false;
			this->dataGridView2->AllowUserToResizeRows = false;
			this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->ColumnHeadersVisible = false;
			this->dataGridView2->Location = System::Drawing::Point(694, 67);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView2->Size = System::Drawing::Size(176, 331);
			this->dataGridView2->TabIndex = 1;
			// 
			// dataGridView3
			// 
			this->dataGridView3->AllowUserToAddRows = false;
			this->dataGridView3->AllowUserToDeleteRows = false;
			this->dataGridView3->AllowUserToResizeColumns = false;
			this->dataGridView3->AllowUserToResizeRows = false;
			this->dataGridView3->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView3->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->ColumnHeadersVisible = false;
			this->dataGridView3->Location = System::Drawing::Point(487, 67);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->ReadOnly = true;
			this->dataGridView3->RowHeadersVisible = false;
			this->dataGridView3->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView3->Size = System::Drawing::Size(188, 331);
			this->dataGridView3->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(483, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(196, 19);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Les article les moins vendus";
			// 
			// debut
			// 
			this->debut->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->debut->Location = System::Drawing::Point(16, 80);
			this->debut->Name = L"debut";
			this->debut->Size = System::Drawing::Size(200, 27);
			this->debut->TabIndex = 4;
			this->debut->ValueChanged += gcnew System::EventHandler(this, &Stat::Stat_Load);
			// 
			// lstclient
			// 
			this->lstclient->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lstclient->FormattingEnabled = true;
			this->lstclient->Location = System::Drawing::Point(118, 162);
			this->lstclient->Name = L"lstclient";
			this->lstclient->Size = System::Drawing::Size(239, 27);
			this->lstclient->TabIndex = 5;
			this->lstclient->DropDownClosed += gcnew System::EventHandler(this, &Stat::lstclient_DropDownClosed);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(690, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(183, 19);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Les article les plus vendus";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(891, 45);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(142, 19);
			this->label3->TabIndex = 7;
			this->label3->Text = L"les article sous seuil";
			// 
			// fin
			// 
			this->fin->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->fin->Location = System::Drawing::Point(262, 80);
			this->fin->Name = L"fin";
			this->fin->Size = System::Drawing::Size(200, 27);
			this->fin->TabIndex = 8;
			this->fin->ValueChanged += gcnew System::EventHandler(this, &Stat::Stat_Load);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(184, 45);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(115, 19);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Chiffre d\'affaire";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label5->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(12, 165);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(92, 19);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Achat Client";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label5->Click += gcnew System::EventHandler(this, &Stat::label5_Click);
			// 
			// montantclient
			// 
			this->montantclient->AutoSize = true;
			this->montantclient->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->montantclient->Location = System::Drawing::Point(374, 165);
			this->montantclient->Name = L"montantclient";
			this->montantclient->Size = System::Drawing::Size(88, 19);
			this->montantclient->TabIndex = 11;
			this->montantclient->Text = L"Achat Client";
			this->montantclient->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// chifreaffaire
			// 
			this->chifreaffaire->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->chifreaffaire->Location = System::Drawing::Point(184, 124);
			this->chifreaffaire->Name = L"chifreaffaire";
			this->chifreaffaire->Size = System::Drawing::Size(110, 19);
			this->chifreaffaire->TabIndex = 12;
			this->chifreaffaire->Text = L"Chiffre d\'affaire";
			this->chifreaffaire->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// paniermoyen
			// 
			this->paniermoyen->AutoSize = true;
			this->paniermoyen->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->paniermoyen->Location = System::Drawing::Point(12, 235);
			this->paniermoyen->Name = L"paniermoyen";
			this->paniermoyen->Size = System::Drawing::Size(98, 19);
			this->paniermoyen->TabIndex = 13;
			this->paniermoyen->Text = L"Panier Moyen";
			this->paniermoyen->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// valeurstock
			// 
			this->valeurstock->AutoSize = true;
			this->valeurstock->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->valeurstock->Location = System::Drawing::Point(12, 286);
			this->valeurstock->Name = L"valeurstock";
			this->valeurstock->Size = System::Drawing::Size(108, 19);
			this->valeurstock->TabIndex = 14;
			this->valeurstock->Text = L"Valeur du stock";
			this->valeurstock->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(1012, 7);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(30, 30);
			this->button1->TabIndex = 15;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Stat::Stat_Load);
			// 
			// Stat
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 19);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->button1);
			this->Controls->Add(this->valeurstock);
			this->Controls->Add(this->paniermoyen);
			this->Controls->Add(this->chifreaffaire);
			this->Controls->Add(this->montantclient);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->fin);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->lstclient);
			this->Controls->Add(this->debut);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Stat";
			this->Size = System::Drawing::Size(1054, 457);
			this->Load += gcnew System::EventHandler(this, &Stat::Stat_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Stat_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void lstclient_DropDownClosed(System::Object^ sender, System::EventArgs^ e) {
	montantclient->Text = this->stat->calcultotalachatclient(Convert::ToInt32(lstclient->SelectedValue)).ToString();
}
};
}
