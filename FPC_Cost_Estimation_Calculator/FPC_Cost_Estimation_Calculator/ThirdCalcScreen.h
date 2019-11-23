#pragma once
#include <fstream>
#include <string>
#include <sstream>
#include <stdlib.h>
#include <math.h>
#include <msclr\marshal_cppstd.h>

#include "FinalCalcScreen.h"

namespace FPCCostEstimationCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for ThirdCalcScreen
	/// </summary>
	public ref class ThirdCalcScreen : public System::Windows::Forms::Form
	{
	public:
		double totFP = 0;//SEND THIS VALUE TO RESULTS!!!
	public:
		ThirdCalcScreen(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		ThirdCalcScreen(double tempFP)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			totFP = tempFP;
		}

	protected:
		String^ langChoice = "DEFAULT";
		double devSalary = 0;
	private: System::Windows::Forms::Button^  refrshButton;
	private: System::Windows::Forms::Button^  button1;
	protected:
		int dataAmt = 1; //1 = Average, 2 = Low, 3 = Median, 4 = High

		//Begin Calculation Functions
		double getLocMultiplier(string dataAmount, string launguage)
		{
			string x = " ";
			string amount = " ";
			ifstream inFile;
			string str = "";
			string arr[4];
			double locMultiplier = 0.0;
			int i = 0;

			inFile.open("laungaugeTable.txt");

			while (x != launguage) {
				inFile >> x;

			}
			getline(inFile, amount);

			inFile.close();


			stringstream ssin(amount);

			while (ssin.good() && i < 4) {
				ssin >> arr[i];
				++i;
			}

			if (dataAmount == "Avg")
			{
				locMultiplier = atof(arr[0].c_str());

			}
			if (dataAmount == "Median")
			{
				locMultiplier = atof(arr[1].c_str());

			}
			if (dataAmount == "Low")
			{
				locMultiplier = atof(arr[2].c_str());

			}
			if (dataAmount == "High")
			{
				locMultiplier = atof(arr[3].c_str());
			}

			return locMultiplier;
		}

		double LocCalculation(string dataAmount, string launguage, double fp)
		{
			double locMultipler = 0.0;
			double loc = 0.0;
			locMultipler = getLocMultiplier(dataAmount, launguage);
			loc = locMultipler * fp;

			return loc;
		}

		double finalCalculations(double fp, double loc, string cocomoMode, double yearlySalary)
		{
			double a = 0.0;
			double b = 0.0;
			double c = 0.0;
			double d = 0.0;
			double effort = 0.0;
			double duration = 0.0;
			double staffing = 0.0;
			double numberOfMonths = 0.0;
			double cost = 0.0;

			if (cocomoMode == "organic")
			{
				a = 2.4;
				b = 1.05;
				c = 2.5;
				d = 0.38;
			}
			else if (cocomoMode == "semi-detached")
			{
				a = 3.0;
				b = 1.12;
				c = 2.5;
				d = 0.35;
			}
			else if (cocomoMode == "embedded")
			{
				a = 3.6;
				b = 1.20;
				c = 2.5;
				d = 0.32;
			}

			effort = loc / 1000.0;
			effort = pow(effort, b);
			effort = effort * a;


			duration = c * effort;
			duration = pow(effort, d);

			staffing = effort / duration;


			numberOfMonths = duration / staffing;

			cost = numberOfMonths * (yearlySalary / 12)*staffing;


			return effort, numberOfMonths, cost, staffing;

		}
		//End Calculation Functions

		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ThirdCalcScreen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  titleLabel;
	private: System::Windows::Forms::Button^  button1_ABAP;
	private: System::Windows::Forms::Button^  button2_ASP;
	private: System::Windows::Forms::Button^  button3_Assembler;



	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5_C;
	private: System::Windows::Forms::Button^  Button6_Cplusplus;
	private: System::Windows::Forms::Button^  button7_Csharp;
	private: System::Windows::Forms::Button^  button8_COBOL;
	private: System::Windows::Forms::Button^  button9_CoolGenIEF;
	private: System::Windows::Forms::Button^  button10_Datastage;
	private: System::Windows::Forms::Button^  button11_Excel;
	private: System::Windows::Forms::Button^  button12_Focus;
	private: System::Windows::Forms::Button^  button13_FoxPro;
	private: System::Windows::Forms::Button^  button14_HTML;
	private: System::Windows::Forms::Button^  button15_J2EE;
	private: System::Windows::Forms::Button^  button16_Java;
	private: System::Windows::Forms::Button^  button17_JavaScript;
	private: System::Windows::Forms::Button^  button18_JCL;
	private: System::Windows::Forms::Button^  button19_LINC2;
	private: System::Windows::Forms::Button^  button20_LotusNotes;
	private: System::Windows::Forms::Button^  button21_Natural;
	private: System::Windows::Forms::Button^  button22_dotNET;
	private: System::Windows::Forms::Button^  button23_Oracle;
	private: System::Windows::Forms::Button^  button24_PACBASE;
	private: System::Windows::Forms::Button^  button25_Perl;
	private: System::Windows::Forms::Button^  button26_PLdash1;
	private: System::Windows::Forms::Button^  button27_PLdashSQL;

























	private: System::Windows::Forms::Button^  button28;
	private: System::Windows::Forms::Button^  button29_REXX;
	private: System::Windows::Forms::Button^  button30_Sabretalk;
	private: System::Windows::Forms::Button^  button31_SAS;
	private: System::Windows::Forms::Button^  button32_Siebel;
	private: System::Windows::Forms::Button^  button33_SLOGAN;
	private: System::Windows::Forms::Button^  button34_SQL;
	private: System::Windows::Forms::Button^  avgOptionButton;
	private: System::Windows::Forms::Button^  lowOptionButton;
	private: System::Windows::Forms::Button^  medianOptionButton;
	private: System::Windows::Forms::Button^  highOptionButton;










	private: System::Windows::Forms::Button^  button39;
private: System::Windows::Forms::Button^  button1_VBdotNET;
private: System::Windows::Forms::Button^  button2_VisualBasic;
private: System::Windows::Forms::Label^  subTitleLabel;
private: System::Windows::Forms::Label^  seccondTItleLabel;
private: System::Windows::Forms::Label^  defaultLabel;
private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::Label^  statusLabel;
private: System::Windows::Forms::Label^  languageLabel;
private: System::Windows::Forms::Label^  salaryLabel;
private: System::Windows::Forms::Label^  dataUseLabel;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->titleLabel = (gcnew System::Windows::Forms::Label());
			this->button1_ABAP = (gcnew System::Windows::Forms::Button());
			this->button2_ASP = (gcnew System::Windows::Forms::Button());
			this->button3_Assembler = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5_C = (gcnew System::Windows::Forms::Button());
			this->Button6_Cplusplus = (gcnew System::Windows::Forms::Button());
			this->button7_Csharp = (gcnew System::Windows::Forms::Button());
			this->button8_COBOL = (gcnew System::Windows::Forms::Button());
			this->button9_CoolGenIEF = (gcnew System::Windows::Forms::Button());
			this->button10_Datastage = (gcnew System::Windows::Forms::Button());
			this->button11_Excel = (gcnew System::Windows::Forms::Button());
			this->button12_Focus = (gcnew System::Windows::Forms::Button());
			this->button13_FoxPro = (gcnew System::Windows::Forms::Button());
			this->button14_HTML = (gcnew System::Windows::Forms::Button());
			this->button15_J2EE = (gcnew System::Windows::Forms::Button());
			this->button16_Java = (gcnew System::Windows::Forms::Button());
			this->button17_JavaScript = (gcnew System::Windows::Forms::Button());
			this->button18_JCL = (gcnew System::Windows::Forms::Button());
			this->button19_LINC2 = (gcnew System::Windows::Forms::Button());
			this->button20_LotusNotes = (gcnew System::Windows::Forms::Button());
			this->button21_Natural = (gcnew System::Windows::Forms::Button());
			this->button22_dotNET = (gcnew System::Windows::Forms::Button());
			this->button23_Oracle = (gcnew System::Windows::Forms::Button());
			this->button24_PACBASE = (gcnew System::Windows::Forms::Button());
			this->button25_Perl = (gcnew System::Windows::Forms::Button());
			this->button26_PLdash1 = (gcnew System::Windows::Forms::Button());
			this->button27_PLdashSQL = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29_REXX = (gcnew System::Windows::Forms::Button());
			this->button30_Sabretalk = (gcnew System::Windows::Forms::Button());
			this->button31_SAS = (gcnew System::Windows::Forms::Button());
			this->button32_Siebel = (gcnew System::Windows::Forms::Button());
			this->button33_SLOGAN = (gcnew System::Windows::Forms::Button());
			this->button34_SQL = (gcnew System::Windows::Forms::Button());
			this->avgOptionButton = (gcnew System::Windows::Forms::Button());
			this->lowOptionButton = (gcnew System::Windows::Forms::Button());
			this->medianOptionButton = (gcnew System::Windows::Forms::Button());
			this->highOptionButton = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button1_VBdotNET = (gcnew System::Windows::Forms::Button());
			this->button2_VisualBasic = (gcnew System::Windows::Forms::Button());
			this->subTitleLabel = (gcnew System::Windows::Forms::Label());
			this->seccondTItleLabel = (gcnew System::Windows::Forms::Label());
			this->defaultLabel = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->statusLabel = (gcnew System::Windows::Forms::Label());
			this->languageLabel = (gcnew System::Windows::Forms::Label());
			this->salaryLabel = (gcnew System::Windows::Forms::Label());
			this->dataUseLabel = (gcnew System::Windows::Forms::Label());
			this->refrshButton = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// titleLabel
			// 
			this->titleLabel->AutoSize = true;
			this->titleLabel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->titleLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->titleLabel->Location = System::Drawing::Point(181, 9);
			this->titleLabel->Name = L"titleLabel";
			this->titleLabel->Size = System::Drawing::Size(471, 48);
			this->titleLabel->TabIndex = 2;
			this->titleLabel->Text = L"Calculation Stage 3 of 4";
			// 
			// button1_ABAP
			// 
			this->button1_ABAP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1_ABAP->Location = System::Drawing::Point(56, 121);
			this->button1_ABAP->Name = L"button1_ABAP";
			this->button1_ABAP->Size = System::Drawing::Size(119, 23);
			this->button1_ABAP->TabIndex = 3;
			this->button1_ABAP->Text = L"ABAP(SAP)";
			this->button1_ABAP->UseVisualStyleBackColor = true;
			this->button1_ABAP->Click += gcnew System::EventHandler(this, &ThirdCalcScreen::button1_ABAP_Click);
			// 
			// button2_ASP
			// 
			this->button2_ASP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2_ASP->Location = System::Drawing::Point(181, 121);
			this->button2_ASP->Name = L"button2_ASP";
			this->button2_ASP->Size = System::Drawing::Size(119, 23);
			this->button2_ASP->TabIndex = 4;
			this->button2_ASP->Text = L"ASP";
			this->button2_ASP->UseVisualStyleBackColor = true;
			this->button2_ASP->Click += gcnew System::EventHandler(this, &ThirdCalcScreen::button2_ASP_Click);
			// 
			// button3_Assembler
			// 
			this->button3_Assembler->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button3_Assembler->Location = System::Drawing::Point(306, 121);
			this->button3_Assembler->Name = L"button3_Assembler";
			this->button3_Assembler->Size = System::Drawing::Size(119, 23);
			this->button3_Assembler->TabIndex = 5;
			this->button3_Assembler->Text = L"Assembler";
			this->button3_Assembler->UseVisualStyleBackColor = true;
			this->button3_Assembler->Click += gcnew System::EventHandler(this, &ThirdCalcScreen::button3_Assembler_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(431, 121);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(119, 23);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Brio+";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &ThirdCalcScreen::button4_Click);
			// 
			// button5_C
			// 
			this->button5_C->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5_C->Location = System::Drawing::Point(557, 121);
			this->button5_C->Name = L"button5_C";
			this->button5_C->Size = System::Drawing::Size(119, 23);
			this->button5_C->TabIndex = 7;
			this->button5_C->Text = L"C";
			this->button5_C->UseVisualStyleBackColor = true;
			this->button5_C->Click += gcnew System::EventHandler(this, &ThirdCalcScreen::button5_C_Click);
			// 
			// Button6_Cplusplus
			// 
			this->Button6_Cplusplus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Button6_Cplusplus->Location = System::Drawing::Point(682, 121);
			this->Button6_Cplusplus->Name = L"Button6_Cplusplus";
			this->Button6_Cplusplus->Size = System::Drawing::Size(119, 23);
			this->Button6_Cplusplus->TabIndex = 8;
			this->Button6_Cplusplus->Text = L"C++";
			this->Button6_Cplusplus->UseVisualStyleBackColor = true;
			this->Button6_Cplusplus->Click += gcnew System::EventHandler(this, &ThirdCalcScreen::Button6_Cplusplus_Click);
			// 
			// button7_Csharp
			// 
			this->button7_Csharp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7_Csharp->Location = System::Drawing::Point(56, 150);
			this->button7_Csharp->Name = L"button7_Csharp";
			this->button7_Csharp->Size = System::Drawing::Size(119, 23);
			this->button7_Csharp->TabIndex = 9;
			this->button7_Csharp->Text = L"C#";
			this->button7_Csharp->UseVisualStyleBackColor = true;
			this->button7_Csharp->Click += gcnew System::EventHandler(this, &ThirdCalcScreen::button7_Csharp_Click);
			// 
			// button8_COBOL
			// 
			this->button8_COBOL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8_COBOL->Location = System::Drawing::Point(181, 150);
			this->button8_COBOL->Name = L"button8_COBOL";
			this->button8_COBOL->Size = System::Drawing::Size(119, 23);
			this->button8_COBOL->TabIndex = 10;
			this->button8_COBOL->Text = L"COBOL";
			this->button8_COBOL->UseVisualStyleBackColor = true;
			this->button8_COBOL->Click += gcnew System::EventHandler(this, &ThirdCalcScreen::button8_COBOL_Click);
			// 
			// button9_CoolGenIEF
			// 
			this->button9_CoolGenIEF->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button9_CoolGenIEF->Location = System::Drawing::Point(306, 150);
			this->button9_CoolGenIEF->Name = L"button9_CoolGenIEF";
			this->button9_CoolGenIEF->Size = System::Drawing::Size(119, 23);
			this->button9_CoolGenIEF->TabIndex = 11;
			this->button9_CoolGenIEF->Text = L"Cool:Gen/IEF";
			this->button9_CoolGenIEF->UseVisualStyleBackColor = true;
			this->button9_CoolGenIEF->Click += gcnew System::EventHandler(this, &ThirdCalcScreen::button9_CoolGenIEF_Click);
			// 
			// button10_Datastage
			// 
			this->button10_Datastage->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button10_Datastage->Location = System::Drawing::Point(431, 150);
			this->button10_Datastage->Name = L"button10_Datastage";
			this->button10_Datastage->Size = System::Drawing::Size(119, 23);
			this->button10_Datastage->TabIndex = 12;
			this->button10_Datastage->Text = L"Datastage";
			this->button10_Datastage->UseVisualStyleBackColor = true;
			this->button10_Datastage->Click += gcnew System::EventHandler(this, &ThirdCalcScreen::button10_Datastage_Click);
			// 
			// button11_Excel
			// 
			this->button11_Excel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11_Excel->Location = System::Drawing::Point(557, 150);
			this->button11_Excel->Name = L"button11_Excel";
			this->button11_Excel->Size = System::Drawing::Size(119, 23);
			this->button11_Excel->TabIndex = 13;
			this->button11_Excel->Text = L"Excel";
			this->button11_Excel->UseVisualStyleBackColor = true;
			this->button11_Excel->Click += gcnew System::EventHandler(this, &ThirdCalcScreen::button11_Excel_Click);
			// 
			// button12_Focus
			// 
			this->button12_Focus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12_Focus->Location = System::Drawing::Point(682, 150);
			this->button12_Focus->Name = L"button12_Focus";
			this->button12_Focus->Size = System::Drawing::Size(119, 23);
			this->button12_Focus->TabIndex = 14;
			this->button12_Focus->Text = L"Focus";
			this->button12_Focus->UseVisualStyleBackColor = true;
			this->button12_Focus->Click += gcnew System::EventHandler(this, &ThirdCalcScreen::button12_Focus_Click);
			// 
			// button13_FoxPro
			// 
			this->button13_FoxPro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13_FoxPro->Location = System::Drawing::Point(56, 179);
			this->button13_FoxPro->Name = L"button13_FoxPro";
			this->button13_FoxPro->Size = System::Drawing::Size(119, 23);
			this->button13_FoxPro->TabIndex = 15;
			this->button13_FoxPro->Text = L"FoxPro";
			this->button13_FoxPro->UseVisualStyleBackColor = true;
			this->button13_FoxPro->Click += gcnew System::EventHandler(this, &ThirdCalcScreen::button13_FoxPro_Click);
			// 
			// button14_HTML
			// 
			this->button14_HTML->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14_HTML->Location = System::Drawing::Point(181, 179);
			this->button14_HTML->Name = L"button14_HTML";
			this->button14_HTML->Size = System::Drawing::Size(119, 23);
			this->button14_HTML->TabIndex = 16;
			this->button14_HTML->Text = L"HTML";
			this->button14_HTML->UseVisualStyleBackColor = true;
			this->button14_HTML->Click += gcnew System::EventHandler(this, &ThirdCalcScreen::button14_HTML_Click);
			// 
			// button15_J2EE
			// 
			this->button15_J2EE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15_J2EE->Location = System::Drawing::Point(306, 179);
			this->button15_J2EE->Name = L"button15_J2EE";
			this->button15_J2EE->Size = System::Drawing::Size(119, 23);
			this->button15_J2EE->TabIndex = 17;
			this->button15_J2EE->Text = L"J2EE";
			this->button15_J2EE->UseVisualStyleBackColor = true;
			this->button15_J2EE->Click += gcnew System::EventHandler(this, &ThirdCalcScreen::button15_J2EE_Click);
			// 
			// button16_Java
			// 
			this->button16_Java->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16_Java->Location = System::Drawing::Point(431, 179);
			this->button16_Java->Name = L"button16_Java";
			this->button16_Java->Size = System::Drawing::Size(119, 23);
			this->button16_Java->TabIndex = 18;
			this->button16_Java->Text = L"Java";
			this->button16_Java->UseVisualStyleBackColor = true;
			this->button16_Java->Click += gcnew System::EventHandler(this, &ThirdCalcScreen::button16_Java_Click);
			// 
			// button17_JavaScript
			// 
			this->button17_JavaScript->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button17_JavaScript->Location = System::Drawing::Point(557, 179);
			this->button17_JavaScript->Name = L"button17_JavaScript";
			this->button17_JavaScript->Size = System::Drawing::Size(119, 23);
			this->button17_JavaScript->TabIndex = 19;
			this->button17_JavaScript->Text = L"JavaScript";
			this->button17_JavaScript->UseVisualStyleBackColor = true;
			this->button17_JavaScript->Click += gcnew System::EventHandler(this, &ThirdCalcScreen::button17_JavaScript_Click);
			// 
			// button18_JCL
			// 
			this->button18_JCL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18_JCL->Location = System::Drawing::Point(682, 179);
			this->button18_JCL->Name = L"button18_JCL";
			this->button18_JCL->Size = System::Drawing::Size(119, 23);
			this->button18_JCL->TabIndex = 20;
			this->button18_JCL->Text = L"JCL";
			this->button18_JCL->UseVisualStyleBackColor = true;
			this->button18_JCL->Click += gcnew System::EventHandler(this, &ThirdCalcScreen::button18_JCL_Click);
			// 
			// button19_LINC2
			// 
			this->button19_LINC2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19_LINC2->Location = System::Drawing::Point(56, 208);
			this->button19_LINC2->Name = L"button19_LINC2";
			this->button19_LINC2->Size = System::Drawing::Size(119, 23);
			this->button19_LINC2->TabIndex = 21;
			this->button19_LINC2->Text = L"LINC II";
			this->button19_LINC2->UseVisualStyleBackColor = true;
			this->button19_LINC2->Click += gcnew System::EventHandler(this, &ThirdCalcScreen::button19_LINC2_Click);
			// 
			// button20_LotusNotes
			// 
			this->button20_LotusNotes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button20_LotusNotes->Location = System::Drawing::Point(181, 208);
			this->button20_LotusNotes->Name = L"button20_LotusNotes";
			this->button20_LotusNotes->Size = System::Drawing::Size(119, 23);
			this->button20_LotusNotes->TabIndex = 22;
			this->button20_LotusNotes->Text = L"Lotus Notes";
			this->button20_LotusNotes->UseVisualStyleBackColor = true;
			this->button20_LotusNotes->Click += gcnew System::EventHandler(this, &ThirdCalcScreen::button20_LotusNotes_Click);
			// 
			// button21_Natural
			// 
			this->button21_Natural->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21_Natural->Location = System::Drawing::Point(306, 208);
			this->button21_Natural->Name = L"button21_Natural";
			this->button21_Natural->Size = System::Drawing::Size(119, 23);
			this->button21_Natural->TabIndex = 23;
			this->button21_Natural->Text = L"Natural";
			this->button21_Natural->UseVisualStyleBackColor = true;
			this->button21_Natural->Click += gcnew System::EventHandler(this, &ThirdCalcScreen::button21_Natural_Click);
			// 
			// button22_dotNET
			// 
			this->button22_dotNET->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22_dotNET->Location = System::Drawing::Point(431, 208);
			this->button22_dotNET->Name = L"button22_dotNET";
			this->button22_dotNET->Size = System::Drawing::Size(119, 23);
			this->button22_dotNET->TabIndex = 24;
			this->button22_dotNET->Text = L".NET";
			this->button22_dotNET->UseVisualStyleBackColor = true;
			this->button22_dotNET->Click += gcnew System::EventHandler(this, &ThirdCalcScreen::button22_dotNET_Click);
			// 
			// button23_Oracle
			// 
			this->button23_Oracle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button23_Oracle->Location = System::Drawing::Point(557, 208);
			this->button23_Oracle->Name = L"button23_Oracle";
			this->button23_Oracle->Size = System::Drawing::Size(119, 23);
			this->button23_Oracle->TabIndex = 25;
			this->button23_Oracle->Text = L"Oracle";
			this->button23_Oracle->UseVisualStyleBackColor = true;
			this->button23_Oracle->Click += gcnew System::EventHandler(this, &ThirdCalcScreen::button23_Oracle_Click);
			// 
			// button24_PACBASE
			// 
			this->button24_PACBASE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button24_PACBASE->Location = System::Drawing::Point(682, 208);
			this->button24_PACBASE->Name = L"button24_PACBASE";
			this->button24_PACBASE->Size = System::Drawing::Size(119, 23);
			this->button24_PACBASE->TabIndex = 26;
			this->button24_PACBASE->Text = L"PACBASE";
			this->button24_PACBASE->UseVisualStyleBackColor = true;
			this->button24_PACBASE->Click += gcnew System::EventHandler(this, &ThirdCalcScreen::button24_PACBASE_Click);
			// 
			// button25_Perl
			// 
			this->button25_Perl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button25_Perl->Location = System::Drawing::Point(56, 237);
			this->button25_Perl->Name = L"button25_Perl";
			this->button25_Perl->Size = System::Drawing::Size(119, 23);
			this->button25_Perl->TabIndex = 27;
			this->button25_Perl->Text = L"Perl";
			this->button25_Perl->UseVisualStyleBackColor = true;
			this->button25_Perl->Click += gcnew System::EventHandler(this, &ThirdCalcScreen::button25_Perl_Click);
			// 
			// button26_PLdash1
			// 
			this->button26_PLdash1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button26_PLdash1->Location = System::Drawing::Point(181, 237);
			this->button26_PLdash1->Name = L"button26_PLdash1";
			this->button26_PLdash1->Size = System::Drawing::Size(119, 23);
			this->button26_PLdash1->TabIndex = 28;
			this->button26_PLdash1->Text = L"PL/1";
			this->button26_PLdash1->UseVisualStyleBackColor = true;
			this->button26_PLdash1->Click += gcnew System::EventHandler(this, &ThirdCalcScreen::button26_PLdash1_Click);
			// 
			// button27_PLdashSQL
			// 
			this->button27_PLdashSQL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button27_PLdashSQL->Location = System::Drawing::Point(306, 237);
			this->button27_PLdashSQL->Name = L"button27_PLdashSQL";
			this->button27_PLdashSQL->Size = System::Drawing::Size(119, 23);
			this->button27_PLdashSQL->TabIndex = 29;
			this->button27_PLdashSQL->Text = L"PL/SQL";
			this->button27_PLdashSQL->UseVisualStyleBackColor = true;
			this->button27_PLdashSQL->Click += gcnew System::EventHandler(this, &ThirdCalcScreen::button27_PLdashSQL_Click);
			// 
			// button28
			// 
			this->button28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button28->Location = System::Drawing::Point(431, 237);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(119, 23);
			this->button28->TabIndex = 30;
			this->button28->Text = L"Powerbuilder";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &ThirdCalcScreen::button28_Click);
			// 
			// button29_REXX
			// 
			this->button29_REXX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button29_REXX->Location = System::Drawing::Point(557, 237);
			this->button29_REXX->Name = L"button29_REXX";
			this->button29_REXX->Size = System::Drawing::Size(119, 23);
			this->button29_REXX->TabIndex = 31;
			this->button29_REXX->Text = L"REXX";
			this->button29_REXX->UseVisualStyleBackColor = true;
			this->button29_REXX->Click += gcnew System::EventHandler(this, &ThirdCalcScreen::button29_REXX_Click);
			// 
			// button30_Sabretalk
			// 
			this->button30_Sabretalk->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button30_Sabretalk->Location = System::Drawing::Point(682, 237);
			this->button30_Sabretalk->Name = L"button30_Sabretalk";
			this->button30_Sabretalk->Size = System::Drawing::Size(119, 23);
			this->button30_Sabretalk->TabIndex = 32;
			this->button30_Sabretalk->Text = L"Sabretalk";
			this->button30_Sabretalk->UseVisualStyleBackColor = true;
			this->button30_Sabretalk->Click += gcnew System::EventHandler(this, &ThirdCalcScreen::button30_Sabretalk_Click);
			// 
			// button31_SAS
			// 
			this->button31_SAS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button31_SAS->Location = System::Drawing::Point(56, 266);
			this->button31_SAS->Name = L"button31_SAS";
			this->button31_SAS->Size = System::Drawing::Size(119, 23);
			this->button31_SAS->TabIndex = 33;
			this->button31_SAS->Text = L"SAS";
			this->button31_SAS->UseVisualStyleBackColor = true;
			this->button31_SAS->Click += gcnew System::EventHandler(this, &ThirdCalcScreen::button31_SAS_Click);
			// 
			// button32_Siebel
			// 
			this->button32_Siebel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button32_Siebel->Location = System::Drawing::Point(181, 266);
			this->button32_Siebel->Name = L"button32_Siebel";
			this->button32_Siebel->Size = System::Drawing::Size(119, 23);
			this->button32_Siebel->TabIndex = 34;
			this->button32_Siebel->Text = L"Siebel";
			this->button32_Siebel->UseVisualStyleBackColor = true;
			this->button32_Siebel->Click += gcnew System::EventHandler(this, &ThirdCalcScreen::button32_Siebel_Click);
			// 
			// button33_SLOGAN
			// 
			this->button33_SLOGAN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button33_SLOGAN->Location = System::Drawing::Point(306, 266);
			this->button33_SLOGAN->Name = L"button33_SLOGAN";
			this->button33_SLOGAN->Size = System::Drawing::Size(119, 23);
			this->button33_SLOGAN->TabIndex = 35;
			this->button33_SLOGAN->Text = L"SLOGAN";
			this->button33_SLOGAN->UseVisualStyleBackColor = true;
			this->button33_SLOGAN->Click += gcnew System::EventHandler(this, &ThirdCalcScreen::button33_SLOGAN_Click);
			// 
			// button34_SQL
			// 
			this->button34_SQL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button34_SQL->Location = System::Drawing::Point(431, 266);
			this->button34_SQL->Name = L"button34_SQL";
			this->button34_SQL->Size = System::Drawing::Size(119, 23);
			this->button34_SQL->TabIndex = 36;
			this->button34_SQL->Text = L"SQL";
			this->button34_SQL->UseVisualStyleBackColor = true;
			this->button34_SQL->Click += gcnew System::EventHandler(this, &ThirdCalcScreen::button34_SQL_Click);
			// 
			// avgOptionButton
			// 
			this->avgOptionButton->Location = System::Drawing::Point(56, 446);
			this->avgOptionButton->Name = L"avgOptionButton";
			this->avgOptionButton->Size = System::Drawing::Size(75, 31);
			this->avgOptionButton->TabIndex = 37;
			this->avgOptionButton->Text = L"Average";
			this->avgOptionButton->UseVisualStyleBackColor = true;
			this->avgOptionButton->Click += gcnew System::EventHandler(this, &ThirdCalcScreen::avgOptionButton_Click);
			// 
			// lowOptionButton
			// 
			this->lowOptionButton->Location = System::Drawing::Point(137, 446);
			this->lowOptionButton->Name = L"lowOptionButton";
			this->lowOptionButton->Size = System::Drawing::Size(75, 31);
			this->lowOptionButton->TabIndex = 38;
			this->lowOptionButton->Text = L"Low";
			this->lowOptionButton->UseVisualStyleBackColor = true;
			this->lowOptionButton->Click += gcnew System::EventHandler(this, &ThirdCalcScreen::lowOptionButton_Click);
			// 
			// medianOptionButton
			// 
			this->medianOptionButton->Location = System::Drawing::Point(218, 446);
			this->medianOptionButton->Name = L"medianOptionButton";
			this->medianOptionButton->Size = System::Drawing::Size(75, 31);
			this->medianOptionButton->TabIndex = 39;
			this->medianOptionButton->Text = L"Median";
			this->medianOptionButton->UseVisualStyleBackColor = true;
			this->medianOptionButton->Click += gcnew System::EventHandler(this, &ThirdCalcScreen::medianOptionButton_Click);
			// 
			// highOptionButton
			// 
			this->highOptionButton->Location = System::Drawing::Point(299, 446);
			this->highOptionButton->Name = L"highOptionButton";
			this->highOptionButton->Size = System::Drawing::Size(75, 31);
			this->highOptionButton->TabIndex = 40;
			this->highOptionButton->Text = L"High";
			this->highOptionButton->UseVisualStyleBackColor = true;
			this->highOptionButton->Click += gcnew System::EventHandler(this, &ThirdCalcScreen::highOptionButton_Click);
			// 
			// button39
			// 
			this->button39->Enabled = false;
			this->button39->Location = System::Drawing::Point(586, 379);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(146, 68);
			this->button39->TabIndex = 41;
			this->button39->Text = L"Go to next\r\nCalculation Screen";
			this->button39->UseVisualStyleBackColor = true;
			this->button39->Visible = false;
			this->button39->Click += gcnew System::EventHandler(this, &ThirdCalcScreen::button39_Click);
			// 
			// button1_VBdotNET
			// 
			this->button1_VBdotNET->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1_VBdotNET->Location = System::Drawing::Point(557, 266);
			this->button1_VBdotNET->Name = L"button1_VBdotNET";
			this->button1_VBdotNET->Size = System::Drawing::Size(119, 23);
			this->button1_VBdotNET->TabIndex = 42;
			this->button1_VBdotNET->Text = L"VB.NET";
			this->button1_VBdotNET->UseVisualStyleBackColor = true;
			this->button1_VBdotNET->Click += gcnew System::EventHandler(this, &ThirdCalcScreen::button1_VBdotNET_Click);
			// 
			// button2_VisualBasic
			// 
			this->button2_VisualBasic->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button2_VisualBasic->Location = System::Drawing::Point(682, 266);
			this->button2_VisualBasic->Name = L"button2_VisualBasic";
			this->button2_VisualBasic->Size = System::Drawing::Size(119, 23);
			this->button2_VisualBasic->TabIndex = 43;
			this->button2_VisualBasic->Text = L"Visual Basic";
			this->button2_VisualBasic->UseVisualStyleBackColor = true;
			this->button2_VisualBasic->Click += gcnew System::EventHandler(this, &ThirdCalcScreen::button2_VisualBasic_Click);
			// 
			// subTitleLabel
			// 
			this->subTitleLabel->AutoSize = true;
			this->subTitleLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->subTitleLabel->Location = System::Drawing::Point(141, 76);
			this->subTitleLabel->Name = L"subTitleLabel";
			this->subTitleLabel->Size = System::Drawing::Size(574, 25);
			this->subTitleLabel->TabIndex = 44;
			this->subTitleLabel->Text = L"Please select which language will be used to program the project:";
			this->subTitleLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// seccondTItleLabel
			// 
			this->seccondTItleLabel->AutoSize = true;
			this->seccondTItleLabel->Location = System::Drawing::Point(53, 409);
			this->seccondTItleLabel->Name = L"seccondTItleLabel";
			this->seccondTItleLabel->Size = System::Drawing::Size(269, 34);
			this->seccondTItleLabel->TabIndex = 45;
			this->seccondTItleLabel->Text = L"(ADVANCED) Indicate how much data, on\r\naverage, will be used by the program:";
			// 
			// defaultLabel
			// 
			this->defaultLabel->AutoSize = true;
			this->defaultLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->defaultLabel->Location = System::Drawing::Point(62, 480);
			this->defaultLabel->Name = L"defaultLabel";
			this->defaultLabel->Size = System::Drawing::Size(54, 15);
			this->defaultLabel->TabIndex = 46;
			this->defaultLabel->Text = L"(Default)";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(53, 325);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(438, 17);
			this->label1->TabIndex = 47;
			this->label1->Text = L"Please input the average yearly salary of a develpment team meber:";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(56, 346);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1410065407, 2, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(156, 22);
			this->numericUpDown1->TabIndex = 48;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &ThirdCalcScreen::numericUpDown1_ValueChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(53, 371);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(215, 15);
			this->label2->TabIndex = 49;
			this->label2->Text = L"(Yearly Salary should be in US dollars)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(33, 348);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(17, 17);
			this->label3->TabIndex = 50;
			this->label3->Text = L"$";
			// 
			// statusLabel
			// 
			this->statusLabel->AutoSize = true;
			this->statusLabel->Location = System::Drawing::Point(554, 325);
			this->statusLabel->Name = L"statusLabel";
			this->statusLabel->Size = System::Drawing::Size(165, 51);
			this->statusLabel->TabIndex = 51;
			this->statusLabel->Text = L"Language:\r\nAvg. Developer Salary: $\r\nProgram Data Usage:";
			this->statusLabel->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// languageLabel
			// 
			this->languageLabel->AutoSize = true;
			this->languageLabel->Location = System::Drawing::Point(716, 325);
			this->languageLabel->Name = L"languageLabel";
			this->languageLabel->Size = System::Drawing::Size(51, 17);
			this->languageLabel->TabIndex = 52;
			this->languageLabel->Text = L"NONE!";
			// 
			// salaryLabel
			// 
			this->salaryLabel->AutoSize = true;
			this->salaryLabel->Location = System::Drawing::Point(716, 342);
			this->salaryLabel->Name = L"salaryLabel";
			this->salaryLabel->Size = System::Drawing::Size(16, 17);
			this->salaryLabel->TabIndex = 53;
			this->salaryLabel->Text = L"0";
			// 
			// dataUseLabel
			// 
			this->dataUseLabel->AutoSize = true;
			this->dataUseLabel->Location = System::Drawing::Point(719, 358);
			this->dataUseLabel->Name = L"dataUseLabel";
			this->dataUseLabel->Size = System::Drawing::Size(61, 17);
			this->dataUseLabel->TabIndex = 54;
			this->dataUseLabel->Text = L"Average";
			// 
			// refrshButton
			// 
			this->refrshButton->Location = System::Drawing::Point(557, 319);
			this->refrshButton->Name = L"refrshButton";
			this->refrshButton->Size = System::Drawing::Size(75, 23);
			this->refrshButton->TabIndex = 55;
			this->refrshButton->Text = L"Refresh";
			this->refrshButton->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(219, 346);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 56;
			this->button1->Text = L"Confirm";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// ThirdCalcScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(870, 515);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->refrshButton);
			this->Controls->Add(this->dataUseLabel);
			this->Controls->Add(this->salaryLabel);
			this->Controls->Add(this->languageLabel);
			this->Controls->Add(this->statusLabel);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->defaultLabel);
			this->Controls->Add(this->seccondTItleLabel);
			this->Controls->Add(this->subTitleLabel);
			this->Controls->Add(this->button2_VisualBasic);
			this->Controls->Add(this->button1_VBdotNET);
			this->Controls->Add(this->button39);
			this->Controls->Add(this->highOptionButton);
			this->Controls->Add(this->medianOptionButton);
			this->Controls->Add(this->lowOptionButton);
			this->Controls->Add(this->avgOptionButton);
			this->Controls->Add(this->button34_SQL);
			this->Controls->Add(this->button33_SLOGAN);
			this->Controls->Add(this->button32_Siebel);
			this->Controls->Add(this->button31_SAS);
			this->Controls->Add(this->button30_Sabretalk);
			this->Controls->Add(this->button29_REXX);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button27_PLdashSQL);
			this->Controls->Add(this->button26_PLdash1);
			this->Controls->Add(this->button25_Perl);
			this->Controls->Add(this->button24_PACBASE);
			this->Controls->Add(this->button23_Oracle);
			this->Controls->Add(this->button22_dotNET);
			this->Controls->Add(this->button21_Natural);
			this->Controls->Add(this->button20_LotusNotes);
			this->Controls->Add(this->button19_LINC2);
			this->Controls->Add(this->button18_JCL);
			this->Controls->Add(this->button17_JavaScript);
			this->Controls->Add(this->button16_Java);
			this->Controls->Add(this->button15_J2EE);
			this->Controls->Add(this->button14_HTML);
			this->Controls->Add(this->button13_FoxPro);
			this->Controls->Add(this->button12_Focus);
			this->Controls->Add(this->button11_Excel);
			this->Controls->Add(this->button10_Datastage);
			this->Controls->Add(this->button9_CoolGenIEF);
			this->Controls->Add(this->button8_COBOL);
			this->Controls->Add(this->button7_Csharp);
			this->Controls->Add(this->Button6_Cplusplus);
			this->Controls->Add(this->button5_C);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3_Assembler);
			this->Controls->Add(this->button2_ASP);
			this->Controls->Add(this->button1_ABAP);
			this->Controls->Add(this->titleLabel);
			this->Name = L"ThirdCalcScreen";
			this->Text = L"ThirdCalcScreen";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &ThirdCalcScreen::ThirdCalcScreen_FormClosed);
			this->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &ThirdCalcScreen::ThirdCalcScreen_MouseClick);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//closes the program when the screen is closed
	private: System::Void ThirdCalcScreen_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
		Application::Exit();

	}

			 //user changes the average developer salary
private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	devSalary = (double)numericUpDown1->Value;
	salaryLabel->Text = devSalary.ToString();

	//if developer salary is not zero, and a language has been selected, reveal and activate the calculation button
	if ((devSalary != 0) && (langChoice != "DEFAULT")) {
		button39->Enabled = true;
		button39->Visible = true;

	}

}

		 //user chooses to have an average amount of data use in the program
private: System::Void avgOptionButton_Click(System::Object^  sender, System::EventArgs^  e) {
	dataAmt = 1;
	dataUseLabel->Text = "Average";

}

		 //user chooses to have a low amount of data use in the program
private: System::Void lowOptionButton_Click(System::Object^  sender, System::EventArgs^  e) {
	dataAmt = 2;
	dataUseLabel->Text = "Low";

}

		 //user chooses to have a median amount of data use in the program
private: System::Void medianOptionButton_Click(System::Object^  sender, System::EventArgs^  e) {
	dataAmt = 3;
	dataUseLabel->Text = "Median";

}

		 //user chooses to have a high amount of data use in the program
private: System::Void highOptionButton_Click(System::Object^  sender, System::EventArgs^  e) {
	dataAmt = 4;
	dataUseLabel->Text = "High";

}

		 //user clicks their mouse, and the dev salary label updates
		 //user clicks their mouse, and the calculation button checks if it is appropriate to become active
private: System::Void ThirdCalcScreen_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	salaryLabel->Text = devSalary.ToString();

	//if developer salary is not zero, and a language has been selected, reveal and activate the calculation button
	if ((devSalary != 0) && (langChoice != "DEFAULT")) {
		button39->Enabled = true;
		button39->Visible = true;

	}

}

		 //BEGIN language selection table choices
private: System::Void button1_ABAP_Click(System::Object^  sender, System::EventArgs^  e) {
	langChoice = "ABAP(SAP)";
	languageLabel->Text = "ABAP(SAP)";
}
private: System::Void button2_ASP_Click(System::Object^  sender, System::EventArgs^  e) {
	langChoice = "ASP";
	languageLabel->Text = "ASP";
}
private: System::Void button3_Assembler_Click(System::Object^  sender, System::EventArgs^  e) {
	langChoice = "Assembler";
	languageLabel->Text = "Assembler";
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	langChoice = "Brio+";
	languageLabel->Text = "Brio+";
}
private: System::Void button5_C_Click(System::Object^  sender, System::EventArgs^  e) {
	langChoice = "C";
	languageLabel->Text = "C";
}
private: System::Void Button6_Cplusplus_Click(System::Object^  sender, System::EventArgs^  e) {
	langChoice = "C++";
	languageLabel->Text = "C++";
}
private: System::Void button7_Csharp_Click(System::Object^  sender, System::EventArgs^  e) {
	langChoice = "C#";
	languageLabel->Text = "C#";
}
private: System::Void button8_COBOL_Click(System::Object^  sender, System::EventArgs^  e) {
	langChoice = "COBOL";
	languageLabel->Text = "COBOL";
}
private: System::Void button9_CoolGenIEF_Click(System::Object^  sender, System::EventArgs^  e) {
	langChoice = "Cool:Gen/IEF";
	languageLabel->Text = "Cool:Gen/IEF";
}
private: System::Void button10_Datastage_Click(System::Object^  sender, System::EventArgs^  e) {
	langChoice = "Datastage";
	languageLabel->Text = "Datastage";
}
private: System::Void button11_Excel_Click(System::Object^  sender, System::EventArgs^  e) {
	langChoice = "Excel";
	languageLabel->Text = "Excel";
}
private: System::Void button12_Focus_Click(System::Object^  sender, System::EventArgs^  e) {
	langChoice = "Focus";
	languageLabel->Text = "Focus";
}
private: System::Void button13_FoxPro_Click(System::Object^  sender, System::EventArgs^  e) {
	langChoice = "FoxPro";
	languageLabel->Text = "FoxPro";
}
private: System::Void button14_HTML_Click(System::Object^  sender, System::EventArgs^  e) {
	langChoice = "HTML";
	languageLabel->Text = "HTML";
}
private: System::Void button15_J2EE_Click(System::Object^  sender, System::EventArgs^  e) {
	langChoice = "J2EE";
	languageLabel->Text = "J2EE";
}
private: System::Void button16_Java_Click(System::Object^  sender, System::EventArgs^  e) {
	langChoice = "Java";
	languageLabel->Text = "Java";
}
private: System::Void button17_JavaScript_Click(System::Object^  sender, System::EventArgs^  e) {
	langChoice = "JavaScript";
	languageLabel->Text = "JavaScript";
}
private: System::Void button18_JCL_Click(System::Object^  sender, System::EventArgs^  e) {
	langChoice = "JCL";
	languageLabel->Text = "JCL";
}
private: System::Void button19_LINC2_Click(System::Object^  sender, System::EventArgs^  e) {
	langChoice = "LINC II";
	languageLabel->Text = "LINC II";
}
private: System::Void button20_LotusNotes_Click(System::Object^  sender, System::EventArgs^  e) {
	langChoice = "Lotus Notes";
	languageLabel->Text = "Lotus Notes";
}
private: System::Void button21_Natural_Click(System::Object^  sender, System::EventArgs^  e) {
	langChoice = "Natural";
	languageLabel->Text = "Natural";
}
private: System::Void button22_dotNET_Click(System::Object^  sender, System::EventArgs^  e) {
	langChoice = ".NET";
	languageLabel->Text = ".NET";
}
private: System::Void button23_Oracle_Click(System::Object^  sender, System::EventArgs^  e) {
	langChoice = "Oracle";
	languageLabel->Text = "Oracle";
}
private: System::Void button24_PACBASE_Click(System::Object^  sender, System::EventArgs^  e) {
	langChoice = "PACBASE";
	languageLabel->Text = "PACBASE";
}
private: System::Void button25_Perl_Click(System::Object^  sender, System::EventArgs^  e) {
	langChoice = "Perl";
	languageLabel->Text = "Perl";
}
private: System::Void button26_PLdash1_Click(System::Object^  sender, System::EventArgs^  e) {
	langChoice = "PL/1";
	languageLabel->Text = "PL/1";
}
private: System::Void button27_PLdashSQL_Click(System::Object^  sender, System::EventArgs^  e) {
	langChoice = "PL/SQL";
	languageLabel->Text = "PL/SQL";
}
private: System::Void button28_Click(System::Object^  sender, System::EventArgs^  e) {
	langChoice = "Powerbuilder";
	languageLabel->Text = "Powerbuilder";
}
private: System::Void button29_REXX_Click(System::Object^  sender, System::EventArgs^  e) {
	langChoice = "REXX";
	languageLabel->Text = "REXX";
}
private: System::Void button30_Sabretalk_Click(System::Object^  sender, System::EventArgs^  e) {
	langChoice = "Sabretalk";
	languageLabel->Text = "Sabretalk";
}
private: System::Void button31_SAS_Click(System::Object^  sender, System::EventArgs^  e) {
	langChoice = "SAS";
	languageLabel->Text = "SAS";
}
private: System::Void button32_Siebel_Click(System::Object^  sender, System::EventArgs^  e) {
	langChoice = "Siebel";
	languageLabel->Text = "Siebel";
}
private: System::Void button33_SLOGAN_Click(System::Object^  sender, System::EventArgs^  e) {
	langChoice = "SLOGAN";
	languageLabel->Text = "SLOGAN";
}
private: System::Void button34_SQL_Click(System::Object^  sender, System::EventArgs^  e) {
	langChoice = "SQL";
	languageLabel->Text = "SQL";
}
private: System::Void button1_VBdotNET_Click(System::Object^  sender, System::EventArgs^  e) {
	langChoice = "VB.NET";
	languageLabel->Text = "VB.NET";
}
private: System::Void button2_VisualBasic_Click(System::Object^  sender, System::EventArgs^  e) {
	langChoice = "Visual Basic";
	languageLabel->Text = "Visual Basic";
}
		 //END language selection table choices

		 //user chooses to calculate the cost estimate and move to the next calculation screen
private: System::Void button39_Click(System::Object^  sender, System::EventArgs^  e) {
	//calculate estimates
	//convert dataAmt number into usable string
	string dataAMTString;
	if (dataAmt == 1) { dataAMTString = "Avg"; }
	if (dataAmt == 2) { dataAMTString = "Low"; }
	if (dataAmt == 3) { dataAMTString = "Median"; }
	if (dataAmt == 4) { dataAMTString = "High"; }

	//convert the language to something more usable (changing system::String^ langChoice to std::string)
	String^ tempLangChoice = this->langChoice;
	string langChoiceConverted = msclr::interop::marshal_as<string>(tempLangChoice);

	//Calculate Lines of Code
	double linesOfCode; //SEND THIS VALUE TO RESULTS!!!

	linesOfCode = LocCalculation(dataAMTString, langChoiceConverted, totFP);

	//go to the next calculation screen
	//numericUpDown1->Value = (System::Decimal)linesOfCode; //Temporary, for testing
	
	this->Hide();
	FinalCalcScreen^ form5 = gcnew FinalCalcScreen(totFP, linesOfCode, devSalary);
	form5->ShowDialog();

}

};
}
