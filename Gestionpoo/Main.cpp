#include "Main.h"
#include <Windows.h>

using namespace System::Windows::Forms;
using namespace Gestionpoo;


[STAThread]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Main());
	return 0;
}

System::Void Gestionpoo::Main::button7_Click(System::Object^ sender, System::EventArgs^ e) {
	System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Main::typeid));
	if (panel1->Size == System::Drawing::Size(200, 529)) {

		this->button7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"right_arrow")));
		this->panel1->Size = System::Drawing::Size(60, 529);
	}
	else {
		this->button7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"left_arrow")));
		this->panel1->Size = System::Drawing::Size(200, 529);
	}
}
System::Void Gestionpoo::Main::button5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
System::Void Main::button6_Click(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = System::Windows::Forms::FormWindowState::Minimized;
}


System::Void Gestionpoo::Main::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->panel2->Visible = true;
	this->panel2->Top = button1->Top;
	if (panel3->Controls->Contains(lstpersonnel)) {
		lstpersonnel->BringToFront();
	}
	else {
		this->panel3->Controls->Add(lstpersonnel);
		lstpersonnel->Dock = DockStyle::Fill;
		lstpersonnel->BringToFront();
	}

}

System::Void Gestionpoo::Main::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->panel2->Visible = true;
	this->panel2->Top = button2->Top;
	if (panel3->Controls->Contains(lstclient)) {
		lstclient->BringToFront();
	}
	else {
		this->panel3->Controls->Add(lstclient);
		lstclient->Dock = DockStyle::Fill;
		lstclient->BringToFront();
	}
}

System::Void Gestionpoo::Main::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->panel2->Visible = true;
	this->panel2->Top = button3->Top;
	if (panel3->Controls->Contains(lstarticle)) {
		lstarticle->BringToFront();
	}
	else {
		this->panel3->Controls->Add(lstarticle);
		lstarticle->Dock = DockStyle::Fill;
		lstarticle->BringToFront();
	}
}

System::Void Gestionpoo::Main::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->panel2->Visible = true;
	this->panel2->Top = button4->Top;
}

System::Void Gestionpoo::Main::button9_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->panel2->Visible = true;
	this->panel2->Top = button9->Top;
}

System::Void Gestionpoo::Main::button8_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->panel2->Visible = true;
	this->panel2->Top = button8->Top;
}
