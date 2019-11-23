#pragma once
#include <string>
#include <sstream>
#include <stdlib.h>
#include <math.h>
#include <msclr\marshal_cppstd.h>

namespace FPCCostEstimationCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for FinalCalcScreen
	/// </summary>
	public ref class FinalCalcScreen : public System::Windows::Forms::Form
	{
	public:
		double totFP = 0;
		double totLOC = 0;
		double yearlyPay = 0;
		String^ cocMode = "organic";
	public:
		FinalCalcScreen(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		FinalCalcScreen(double FPIn, double LOCIn, double payIn)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			totFP = FPIn;
			totLOC = LOCIn;
			yearlyPay = payIn;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FinalCalcScreen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  titleLabel;
	private: System::Windows::Forms::Label^  subTitleLabel;
	private: System::Windows::Forms::Button^  simpleButton;
	private: System::Windows::Forms::Button^  embeddedButton;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  modeLabel;
	private: System::Windows::Forms::Button^  calcButton;
	protected:

	private:

		//Final Calculations Code
		double finalCalculations(double fp, double loc, std::string cocomoMode, double yearlySalary)
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
			this->subTitleLabel = (gcnew System::Windows::Forms::Label());
			this->simpleButton = (gcnew System::Windows::Forms::Button());
			this->embeddedButton = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->modeLabel = (gcnew System::Windows::Forms::Label());
			this->calcButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// titleLabel
			// 
			this->titleLabel->AutoSize = true;
			this->titleLabel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->titleLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->titleLabel->Location = System::Drawing::Point(88, 9);
			this->titleLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->titleLabel->Name = L"titleLabel";
			this->titleLabel->Size = System::Drawing::Size(384, 39);
			this->titleLabel->TabIndex = 3;
			this->titleLabel->Text = L"Calculation Stage 4 of 4";
			// 
			// subTitleLabel
			// 
			this->subTitleLabel->AutoSize = true;
			this->subTitleLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->subTitleLabel->Location = System::Drawing::Point(97, 59);
			this->subTitleLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->subTitleLabel->Name = L"subTitleLabel";
			this->subTitleLabel->Size = System::Drawing::Size(356, 20);
			this->subTitleLabel->TabIndex = 45;
			this->subTitleLabel->Text = L"Please select which mode to run COCOMO I with:";
			this->subTitleLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// simpleButton
			// 
			this->simpleButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->simpleButton->Location = System::Drawing::Point(80, 82);
			this->simpleButton->Name = L"simpleButton";
			this->simpleButton->Size = System::Drawing::Size(128, 86);
			this->simpleButton->TabIndex = 46;
			this->simpleButton->Text = L"ORGANIC";
			this->simpleButton->UseVisualStyleBackColor = true;
			this->simpleButton->Click += gcnew System::EventHandler(this, &FinalCalcScreen::simpleButton_Click);
			// 
			// embeddedButton
			// 
			this->embeddedButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->embeddedButton->Location = System::Drawing::Point(348, 82);
			this->embeddedButton->Name = L"embeddedButton";
			this->embeddedButton->Size = System::Drawing::Size(128, 86);
			this->embeddedButton->TabIndex = 47;
			this->embeddedButton->Text = L"EMBEDDED";
			this->embeddedButton->UseVisualStyleBackColor = true;
			this->embeddedButton->Click += gcnew System::EventHandler(this, &FinalCalcScreen::embeddedButton_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(214, 82);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(128, 86);
			this->button2->TabIndex = 48;
			this->button2->Text = L"SEMI-\r\nDETACHED";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &FinalCalcScreen::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(117, 171);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 13);
			this->label1->TabIndex = 49;
			this->label1->Text = L"(Default)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(345, 220);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 13);
			this->label2->TabIndex = 50;
			this->label2->Text = L"Current Mode:";
			// 
			// modeLabel
			// 
			this->modeLabel->AutoSize = true;
			this->modeLabel->Location = System::Drawing::Point(426, 219);
			this->modeLabel->Name = L"modeLabel";
			this->modeLabel->Size = System::Drawing::Size(42, 13);
			this->modeLabel->TabIndex = 51;
			this->modeLabel->Text = L"organic";
			// 
			// calcButton
			// 
			this->calcButton->Location = System::Drawing::Point(348, 237);
			this->calcButton->Name = L"calcButton";
			this->calcButton->Size = System::Drawing::Size(116, 43);
			this->calcButton->TabIndex = 52;
			this->calcButton->Text = L"Finish Calculations";
			this->calcButton->UseVisualStyleBackColor = true;
			this->calcButton->Click += gcnew System::EventHandler(this, &FinalCalcScreen::calcButton_Click);
			// 
			// FinalCalcScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(556, 377);
			this->Controls->Add(this->calcButton);
			this->Controls->Add(this->modeLabel);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->embeddedButton);
			this->Controls->Add(this->simpleButton);
			this->Controls->Add(this->subTitleLabel);
			this->Controls->Add(this->titleLabel);
			this->Name = L"FinalCalcScreen";
			this->Text = L"FinalCalcScreen";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &FinalCalcScreen::FinalCalcScreen_FormClosed);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//user closes the form
	private: System::Void FinalCalcScreen_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
		Application::Exit();

	}

			 //user chooses to run COCOMO in simple mode
private: System::Void simpleButton_Click(System::Object^  sender, System::EventArgs^  e) {
	cocMode = "organic";
	modeLabel->Text = "organic";
}

		 //user chooses to run COCOMO in embedded mode
private: System::Void embeddedButton_Click(System::Object^  sender, System::EventArgs^  e) {
	cocMode = "embedded";
	modeLabel->Text = "embedded";

}

		 //user chooses to run COCOMO in semi-detached mode
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	cocMode = "semi-detached";
	modeLabel->Text = "semi-detached";
}

		 //user chooses to finish the calculations and go to the results screen
private: System::Void calcButton_Click(System::Object^  sender, System::EventArgs^  e) {
	//convert the system string to a more usable standard string
	String^ tempModeChoice = this->cocMode;
	std::string modeChoiceConverted = msclr::interop::marshal_as<std::string>(tempModeChoice);

	//complete calculations
	double effort = 0.0;
	double numberOfMonths = 0.0;
	double cost = 0.0;
	double staffing = 0.0;

	effort, numberOfMonths, cost, staffing = finalCalculations(totFP, totLOC, modeChoiceConverted, yearlyPay);

	//go to resluts screen (SEND: total function points, COCOMO mode, Lines of Code, effort, number of months, cost, and staffing)
	//TODO
}

};
}
