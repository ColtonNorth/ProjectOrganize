#include "MyForm.h"
#include "mainForm.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault(false);
	ProjectOrganize::MyForm loginForm;

	loginForm.ShowDialog();
	User^ user = loginForm.user;

	if (user != nullptr)
	{
		//Account exists, therefore sign the user in and move to the next form
		MessageBox::Show("Successful Authentication of " + user->name, "Program.cpp", MessageBoxButtons::OK);

		ProjectOrganize::mainForm mForm(user);
		Application::Run(% mForm);

	}
	else
	{
		MessageBox::Show("Authentication canceled ", "Program.cpp", MessageBoxButtons::OK);
	}

}