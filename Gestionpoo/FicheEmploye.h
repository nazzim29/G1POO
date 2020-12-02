#pragma once

namespace Gestionpoo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de FicheEmploye
	/// </summary>
	public ref class FicheEmploye : public System::Windows::Forms::Form
	{
	public:
		FicheEmploye(void)
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
		~FicheEmploye()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:



	private: System::Windows::Forms::Label^ lblid;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DateTimePicker^ datenais;
	private: System::Windows::Forms::TextBox^ txtprenom;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtnom;
	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox3;



	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;



	protected:


	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FicheEmploye::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblid = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->datenais = (gcnew System::Windows::Forms::DateTimePicker());
			this->txtprenom = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtnom = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(76, 29);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(138, 26);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Fiche Employe";
			// 
			// lblid
			// 
			this->lblid->AutoSize = true;
			this->lblid->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblid->Location = System::Drawing::Point(172, 134);
			this->lblid->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblid->Name = L"lblid";
			this->lblid->Size = System::Drawing::Size(23, 19);
			this->lblid->TabIndex = 20;
			this->lblid->Text = L"ID";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(63, 134);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(75, 19);
			this->label5->TabIndex = 19;
			this->label5->Text = L"Identifiant";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(27, 206);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(111, 19);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Date embauche";
			// 
			// datenais
			// 
			this->datenais->Location = System::Drawing::Point(161, 200);
			this->datenais->Margin = System::Windows::Forms::Padding(4);
			this->datenais->Name = L"datenais";
			this->datenais->Size = System::Drawing::Size(257, 27);
			this->datenais->TabIndex = 17;
			this->datenais->Value = System::DateTime(2020, 11, 30, 12, 48, 12, 0);
			// 
			// txtprenom
			// 
			this->txtprenom->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtprenom->Location = System::Drawing::Point(582, 134);
			this->txtprenom->Margin = System::Windows::Forms::Padding(4);
			this->txtprenom->Name = L"txtprenom";
			this->txtprenom->Size = System::Drawing::Size(167, 20);
			this->txtprenom->TabIndex = 16;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(516, 134);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 19);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Prenom";
			// 
			// txtnom
			// 
			this->txtnom->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtnom->Location = System::Drawing::Point(313, 134);
			this->txtnom->Margin = System::Windows::Forms::Padding(4);
			this->txtnom->Name = L"txtnom";
			this->txtnom->Size = System::Drawing::Size(167, 20);
			this->txtnom->TabIndex = 14;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(266, 134);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(39, 19);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Nom";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(27, 267);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(69, 19);
			this->label8->TabIndex = 25;
			this->label8->Text = L"Adresse :";
			// 
			// textBox3
			// 
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Location = System::Drawing::Point(100, 267);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(439, 20);
			this->textBox3->TabIndex = 26;
			// 
			// button6
			// 
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button6->Location = System::Drawing::Point(422, 370);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(143, 36);
			this->button6->TabIndex = 30;
			this->button6->Text = L"Valider  ";
			this->button6->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button5->Location = System::Drawing::Point(1, 15);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 69);
			this->button5->TabIndex = 31;
			this->button5->UseVisualStyleBackColor = true;
			// 
			// comboBox1
			// 
			this->comboBox1->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->comboBox1->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(672, 264);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(214, 27);
			this->comboBox1->TabIndex = 32;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(619, 267);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(46, 19);
			this->label6->TabIndex = 33;
			this->label6->Text = L"Ville :";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(483, 205);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(182, 23);
			this->checkBox1->TabIndex = 34;
			this->checkBox1->Text = L"supérieur hiérarchique :";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// comboBox2
			// 
			this->comboBox2->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->comboBox2->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(672, 203);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(214, 27);
			this->comboBox2->TabIndex = 35;
			// 
			// FicheEmploye
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 19);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ClientSize = System::Drawing::Size(986, 419);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->lblid);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->datenais);
			this->Controls->Add(this->txtprenom);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtnom);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"FicheEmploye";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FicheEmploye";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	public:
		void set_id(int i);
		void set_nom(String^ nom);
		void set_prenom(String^ prenom);
		void set_adresse(String^ adresse);
		void set_date(DateTime^ date);
		void set_ville(int ville);
		void set_sup(int id);
		void set_comp_ville(DataTable^ v);
		void set_comp_sup(DataTable^ s);
		void mode_affichage();
		int get_id();
		String^ get_nom();
		String^ get_prenom();
		String^ get_adresse();
		DateTime^ get_embauche();
		String^ get_ville();
		int get_sup();
		bool havesup();

#pragma endregion
	};
}
