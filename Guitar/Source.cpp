#include "MyForm.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Guitar::MyForm form; //WinFormsTest - имя вашего проекта
	Application::Run(%form);
}