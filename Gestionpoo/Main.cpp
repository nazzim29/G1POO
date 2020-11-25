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