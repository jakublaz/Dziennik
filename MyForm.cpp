#include "MyForm.h"
#include<iostream>

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Data::OleDb;

int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Dziennik::MyForm form;
	Application::Run(% form);
}