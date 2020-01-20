#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main() {

	//Llamada del componente principal para ventanas de windows form
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	//Instancia del reproductor a través de la llamada de la biblioteca principal
	reproductor::MyForm form;

	//Uso de try y catch para error genérico 
	try {
		Application::Run(% form);//Inicia el bojeto
	}
	catch (...) {
		MessageBox::Show("Agrega un una canción");
		Application::Restart();//Reinicio del objeto
	}


}
