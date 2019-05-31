#include "HauptFenster.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace Grafikanwendung;

[STAThread]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Hauptfenster^ fenster1 = gcnew Hauptfenster;

	Application::Run(fenster1);
}