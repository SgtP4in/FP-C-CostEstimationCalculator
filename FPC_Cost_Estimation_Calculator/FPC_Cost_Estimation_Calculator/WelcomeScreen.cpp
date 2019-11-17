#include "WelcomeScreen.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	FPCCostEstimationCalculator::WelcomeScreen form;
	Application::Run(%form);
}