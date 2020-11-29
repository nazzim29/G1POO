#include "Liste.h"
#pragma once




namespace Gestionpoo {

	/// <summary>
	/// Description résumée de ListeStock
	/// </summary>
	public ref class ListeStock : public Gestionpoo::Liste
	{
	public: ListeStock() {
		Liste::InitializeComponent();
		this->button5->Click += gcnew System::EventHandler(this, &ListeStock::Liste_Load);
		this->Load += gcnew System::EventHandler(this, &ListeStock::Liste_Load);
		this->button1->Click += gcnew System::EventHandler(this, &ListeStock::button1_Click);
		this->button2->Click += gcnew System::EventHandler(this, &ListeStock::button2_Click);
		this->button3->Click += gcnew System::EventHandler(this, &ListeStock::button3_Click);
		this->button4->Click += gcnew System::EventHandler(this, &ListeStock::button4_Click);
	}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~ListeStock()
		{
			if (components)
			{
				delete components;
			}
		}
#pragma region Windows Form Designer generated code
		
#pragma endregion
	protected:
	System::Void Liste_Load(System::Object^ sender, System::EventArgs^ e) new;
	System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) new;
	System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) new;
	System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) new;
	System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) new;
	};
}
