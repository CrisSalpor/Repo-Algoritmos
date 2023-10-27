#include "MyForm.h"


using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

int main(array<System::String^>^ args)
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Prueba::MyForm frm;
	Application::Run(% frm);

	return 0;
}