#include "WelcomeScreen.h"

#include <iostream>

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main()
{

	//check to see if a language table is present
	std::ifstream fin("laungaugeTable.txt");

	if (!fin) {
		//generate a table
		std::ofstream genO;

		genO.open("laungaugeTable.txt");

		//genO << "\n";
		genO << "            Avg                    Median              Low          High\n";
		genO << "ABAP(SAP) 28                         18                16           60\n";
		genO << "ASP       51                         54                15           69\n";
		genO << "Assembler  119                      98                 25           320\n";
		genO << "Brio+       14                      14                 13            16\n";
		genO << "C          97                       99                 39           333\n";
		genO << "C++        50                       53                 25            80\n";
		genO << "C#          54                     59                  29            70\n";
		genO << "COBOL       61                     55                  23            297\n";
		genO << "Cool:Gen/IEF  32                   24                  10            82\n";
		genO << "Datastage    71                    65                  31            157\n";
		genO << "Excel       209                   191                  131           315\n";
		genO << "Focus       43                    45                   45            45\n";
		genO << "FoxPro      36                    35                   34            38\n";
		genO << "HTML        34                    40                   14            48\n";
		genO << "J2EE        46                    49                   15            67\n";
		genO << "Java        53                    53                   14            134\n";
		genO << "JavaScript  47                    53                   31            63\n";
		genO << "JCL         62                    48                   25           221\n";
		genO << "LINC_II     29                    30                   22           38\n";
		genO << "Lotus_Notes 23                    21                   19           40\n";
		genO << "Natural     40                    34                   34           53\n";
		genO << ".NET        57                    60                   53           60\n";
		genO << "Oracle      37                    40                   17           60\n";
		genO << "PACBASE     35                    32                   22           60\n";
		genO << "Perl        24                    15                   15           60\n";
		genO << "PL/1        64                    80                   16           80\n";
		genO << "PL/SQL       37                   35                   13           60\n";
		genO << "Powerbuilder  26                  28                    7           40\n";
		genO << "REXX          77                  80                   50           80\n";
		genO << "Sabretalk     70                  66                   45          109\n";
		genO << "SAS           38                  37                   22           55\n";
		genO << "Siebel        59                  60                   51           60\n";
		genO << "SLOGAN        75                  75                   74           75\n";
		genO << "SQL           21                   21                  13           37\n";
		genO << "VB.NET        52                  60                   26            60\n";
		genO << "Visual_Basic  42                  44                   20            60";

		genO.close();

	}
	else {
		fin.close();

	}

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	FPCCostEstimationCalculator::WelcomeScreen form;
	Application::Run(%form);
}