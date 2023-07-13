#include "MyForm.h"
#include <windows.h>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// ProjectName - name of your project
	// NameForm - name of the form to run
	Froms7::MyForm form;
	Application::Run(% form);
}