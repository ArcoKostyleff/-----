#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute] //������� ���� ��������� � ��������� ������ ������//�������(���������� ������������� � ������������ �������)
int main(array<String^>^ arg) { //massive strok
	Application::SetCompatibleTextRenderingDefault(false); //obrabotka texta
	Application::EnableVisualStyles();
	Project::MyForm form;
	Application::Run(% form);

}
