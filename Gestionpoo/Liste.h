#pragma once


namespace Gestionpoo {

	/// <summary>
	/// Description résumée de Liste
	/// </summary>
	public ref class Liste : public System::Windows::Forms::UserControl
	{
	public:
		Liste(void)
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
		~Liste()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: System::Windows::Forms::Button^ button1;
	protected:
		System::Windows::Forms::Button^ button2;
		System::Windows::Forms::Button^ button3;
		System::Windows::Forms::Button^ button4;
		System::Windows::Forms::Button^ button5;
	protected: System::Windows::Forms::DataGridView^ dataGridView1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Liste::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(139, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(182, 49);
			this->button1->TabIndex = 0;
			this->button1->Text = L"        Ajouter";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Liste::button1_Click);
			// 
			// button2
			// 
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->Location = System::Drawing::Point(373, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(182, 49);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Afficher details    ";
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Liste::button2_Click);
			// 
			// button3
			// 
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->Location = System::Drawing::Point(597, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(182, 49);
			this->button3->TabIndex = 2;
			this->button3->Text = L"       Supprimer";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Liste::button3_Click);
			// 
			// button4
			// 
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button4->Location = System::Drawing::Point(830, 12);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(182, 49);
			this->button4->TabIndex = 3;
			this->button4->Text = L"      Modifier";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Liste::button4_Click);
			// 
			// button5
			// 
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->Location = System::Drawing::Point(27, 12);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(56, 49);
			this->button5->TabIndex = 5;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Liste::button5_Click);
			
			
			
			
			// 
			// Liste
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 19);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Liste";
			this->Size = System::Drawing::Size(1054, 457);
			this->Load += gcnew System::EventHandler(this, &Liste::Liste_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
		protected: 
			virtual System::Void Liste_Load(System::Object^ sender, System::EventArgs^ e);
			virtual System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
			virtual System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
			virtual System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
			virtual System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);
			virtual System::Void button5_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
