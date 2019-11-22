#pragma once

namespace FPCCostEstimationCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ThirdCalcScreen
	/// </summary>
	public ref class ThirdCalcScreen : public System::Windows::Forms::Form
	{
	public:
		double totFP = 0;
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






	private: System::Windows::Forms::Button^  button35;
	private: System::Windows::Forms::Button^  button36;
	private: System::Windows::Forms::Button^  button37;
	private: System::Windows::Forms::Button^  button38;
	private: System::Windows::Forms::Button^  button39;
private: System::Windows::Forms::Button^  button1_VBdotNET;
private: System::Windows::Forms::Button^  button2_VisualBasic;
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
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button1_VBdotNET = (gcnew System::Windows::Forms::Button());
			this->button2_VisualBasic = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// titleLabel
			// 
			this->titleLabel->AutoSize = true;
			this->titleLabel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->titleLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->titleLabel->Location = System::Drawing::Point(205, 9);
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
			// 
			// button35
			// 
			this->button35->Location = System::Drawing::Point(56, 348);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(75, 23);
			this->button35->TabIndex = 37;
			this->button35->Text = L"button35";
			this->button35->UseVisualStyleBackColor = true;
			// 
			// button36
			// 
			this->button36->Location = System::Drawing::Point(56, 377);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(75, 23);
			this->button36->TabIndex = 38;
			this->button36->Text = L"button36";
			this->button36->UseVisualStyleBackColor = true;
			// 
			// button37
			// 
			this->button37->Location = System::Drawing::Point(56, 406);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(75, 23);
			this->button37->TabIndex = 39;
			this->button37->Text = L"button37";
			this->button37->UseVisualStyleBackColor = true;
			// 
			// button38
			// 
			this->button38->Location = System::Drawing::Point(56, 435);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(75, 23);
			this->button38->TabIndex = 40;
			this->button38->Text = L"button38";
			this->button38->UseVisualStyleBackColor = true;
			// 
			// button39
			// 
			this->button39->Location = System::Drawing::Point(645, 377);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(156, 81);
			this->button39->TabIndex = 41;
			this->button39->Text = L"button39";
			this->button39->UseVisualStyleBackColor = true;
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
			// 
			// ThirdCalcScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(870, 481);
			this->Controls->Add(this->button2_VisualBasic);
			this->Controls->Add(this->button1_VBdotNET);
			this->Controls->Add(this->button39);
			this->Controls->Add(this->button38);
			this->Controls->Add(this->button37);
			this->Controls->Add(this->button36);
			this->Controls->Add(this->button35);
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
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//closes the program when the screen is closed
	private: System::Void ThirdCalcScreen_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
		Application::Exit();

	}
};
}
