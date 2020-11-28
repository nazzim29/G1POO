#include "Main.h"
#include <Windows.h>

using namespace System::Windows::Forms;
using namespace Gestionpoo;

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
		this->panel1->Size = System::Drawing::Size(88, 529);
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

System::Void Gestionpoo::Main::button8_Click(System::Object^ sender, System::EventArgs^ e)
{
	System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Main::typeid));
	if (this->WindowState == System::Windows::Forms::FormWindowState::Normal) {
		this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
		this->button8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"minimize")));
	}
	else {
		this->WindowState = System::Windows::Forms::FormWindowState::Normal;
		this->button8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"maximize")));
	}
}

System::Void Gestionpoo::Main::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->panel2->Visible = true;
	this->panel2->Top = button1->Top;
	if (panel3->Controls->Contains(lstpersonne)) {
		lstpersonne->BringToFront();
	}
	else {
		this->panel3->Controls->Add(lstpersonne);
		lstpersonne->Dock = DockStyle::Fill;
		lstpersonne->BringToFront();
	}

}

System::Void Gestionpoo::Main::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->panel2->Visible = true;
	this->panel2->Top = button2->Top;
}

System::Void Gestionpoo::Main::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->panel2->Visible = true;
	this->panel2->Top = button3->Top;
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
