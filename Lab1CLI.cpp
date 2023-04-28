#include "Lab1CLI.h"
#include <Windows.h>

using namespace Project5; // Название проекта
using namespace System;
using namespace System::Windows::Forms;



int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Lab1CLI);
	return 0;
}


