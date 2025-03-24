#pragma comment(linker, "/subsystem:windows /ENTRY:mainCRTStartup")
#include "MainForm.h"
#include "random"
#include "TBuffer.h"

using namespace System;
using namespace System::Windows::Forms;
int main()
{
	srand((unsigned)time(NULL));
	Application::EnableVisualStyles();
	Interface::MyForm form;
	buf = new TBuffer();
	Application::Run(% form);
	delete buf;
}

