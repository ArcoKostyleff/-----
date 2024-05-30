#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute] //функцию мэйн запускаем в отдельном потоке данных//атрибут(информация привязывается к поределенной функции)
int main(array<String^>^ arg) { //massive strok
	Application::SetCompatibleTextRenderingDefault(false); //obrabotka texta
	Application::EnableVisualStyles();
	Project::MyForm form;
	Application::Run(% form);

}
