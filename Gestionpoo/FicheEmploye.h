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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::Label^ lblid;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DateTimePicker^ datenais;
	private: System::Windows::Forms::TextBox^ txtprenom;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtnom;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button6;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FicheEmploye::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->lblid = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->datenais = (gcnew System::Windows::Forms::DateTimePicker());
			this->txtprenom = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtnom = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(94, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(138, 26);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Fiche Employe";
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(1, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(60, 60);
			this->button1->TabIndex = 2;
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(426, 203);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(163, 19);
			this->label7->TabIndex = 22;
			this->label7->Text = L"supérieur hiérarchique :";
			// 
			// lblid
			// 
			this->lblid->AutoSize = true;
			this->lblid->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblid->Location = System::Drawing::Point(128, 143);
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
			this->label5->Location = System::Drawing::Point(47, 145);
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
			this->label4->Location = System::Drawing::Point(47, 203);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(111, 19);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Date embauche";
			this->label4->Click += gcnew System::EventHandler(this, &FicheEmploye::label4_Click);
			// 
			// datenais
			// 
			this->datenais->Location = System::Drawing::Point(182, 203);
			this->datenais->Name = L"datenais";
			this->datenais->Size = System::Drawing::Size(222, 20);
			this->datenais->TabIndex = 17;
			this->datenais->Value = System::DateTime(2020, 11, 30, 12, 48, 12, 0);
			// 
			// txtprenom
			// 
			this->txtprenom->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtprenom->Location = System::Drawing::Point(545, 143);
			this->txtprenom->Name = L"txtprenom";
			this->txtprenom->Size = System::Drawing::Size(125, 13);
			this->txtprenom->TabIndex = 16;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(481, 143);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 19);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Prenom";
			// 
			// txtnom
			// 
			this->txtnom->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtnom->Location = System::Drawing::Point(327, 146);
			this->txtnom->Name = L"txtnom";
			this->txtnom->Size = System::Drawing::Size(125, 13);
			this->txtnom->TabIndex = 14;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(281, 143);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(39, 19);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Nom";
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Location = System::Drawing::Point(156, 148);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(104, 13);
			this->textBox1->TabIndex = 23;
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Location = System::Drawing::Point(617, 207);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(125, 13);
			this->textBox2->TabIndex = 24;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(13, 270);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(138, 19);
			this->label8->TabIndex = 25;
			this->label8->Text = L"Adresses du Client :";
			// 
			// textBox3
			// 
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Location = System::Drawing::Point(51, 292);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(460, 43);
			this->textBox3->TabIndex = 26;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &FicheEmploye::textBox3_TextChanged);
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(1, 378);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(50, 50);
			this->button2->TabIndex = 27;
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(57, 378);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(50, 50);
			this->button4->TabIndex = 28;
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(132, 378);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(50, 50);
			this->button3->TabIndex = 29;
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button6->Location = System::Drawing::Point(703, 377);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(144, 42);
			this->button6->TabIndex = 30;
			this->button6->Text = L"Valider  ";
			this->button6->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button6->UseVisualStyleBackColor = true;
			// 
			// FicheEmploye
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ClientSize = System::Drawing::Size(859, 431);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->lblid);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->datenais);
			this->Controls->Add(this->txtprenom);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtnom);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FicheEmploye";
			this->Text = L"FicheEmploye";
			this->Load += gcnew System::EventHandler(this, &FicheEmploye::FicheEmploye_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FicheEmploye_Load(System::Object^ sender, System::EventArgs^ e) {
	}


	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void dateachat_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
