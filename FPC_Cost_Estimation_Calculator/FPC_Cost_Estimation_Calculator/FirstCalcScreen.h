#pragma once
#include "SeccondCalcScreen.h"

namespace FPCCostEstimationCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FirstCalcScreen
	/// </summary>
	public ref class FirstCalcScreen : public System::Windows::Forms::Form
	{
	public:
		//String ^word;

	public:
		FirstCalcScreen(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		/*
		FirstCalcScreen(String ^text)
		{
			InitializeComponent();

			word = text;
			//
			//TODO: Add the constructor code here
			//
		}
		*/

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FirstCalcScreen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  titleLabel;
	protected:
	private: System::Windows::Forms::Label^  subTitleLabel;
	private: System::Windows::Forms::Label^  numUserInputsLabel;
	private: System::Windows::Forms::Label^  numUserOutputsLabel;
	private: System::Windows::Forms::Label^  numUserInqLabel;
	private: System::Windows::Forms::Label^  numberOfFilesLabel;
	private: System::Windows::Forms::Label^  numberOfOutputsLabel;
	private: System::Windows::Forms::Label^  simpleLabel;
	private: System::Windows::Forms::Label^  averageLabel;
	private: System::Windows::Forms::Label^  complexLabel;
	private: System::Windows::Forms::Button^  nextScrnButton;
	private: System::Windows::Forms::Label^  errFeebackLabel;
	private: System::Windows::Forms::NumericUpDown^  simUsrInUpDown;
	private: System::Windows::Forms::NumericUpDown^  simUsrOutUpDown;
	private: System::Windows::Forms::NumericUpDown^  avgUsrInUpDown;
	private: System::Windows::Forms::NumericUpDown^  cmpUsrInUpDown;




	private: System::Windows::Forms::NumericUpDown^  avgUsrOutUpDown;
	private: System::Windows::Forms::NumericUpDown^  cmpUsrOutUpDown;


	private: System::Windows::Forms::NumericUpDown^  simUsrInqUpDown;
	private: System::Windows::Forms::NumericUpDown^  avgUsrInqUpDown;
	private: System::Windows::Forms::NumericUpDown^  cmpUsrInqUpDown;



	private: System::Windows::Forms::NumericUpDown^  simFilesUpDown;
	private: System::Windows::Forms::NumericUpDown^  avgFilesUpDown;
	private: System::Windows::Forms::NumericUpDown^  cmpFilesUpDown;



	private: System::Windows::Forms::NumericUpDown^  simOutUpDown;
	private: System::Windows::Forms::NumericUpDown^  avgOutUpDown;
	private: System::Windows::Forms::NumericUpDown^  cmpOutUpDown;
	private: System::Windows::Forms::Button^  demoButton;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

		//Function Point Calculation Functions
		double functionPointTable(double simpile, double complex, double average, String ^type)
		{
			double fp = 0.0;
			if (type == "input")
			{
				simpile = simpile * 3;
				average = average * 4;
				complex = complex * 6;
				fp = simpile + average + complex;
			}
			else if (type == "output")
			{
				simpile = simpile * 4;
				average = average * 5;
				complex = complex * 7;
				fp = simpile + average + complex;
			}
			else if (type == "queries")
			{
				simpile = simpile * 3;
				average = average * 5;
				complex = complex * 6;
				fp = simpile + average + complex;
			}
			else if (type == "files")
			{
				simpile = simpile * 7;
				average = average * 10;
				complex = complex * 15;
				fp = simpile + average + complex;
			}
			else if (type == "interface")
			{
				simpile = simpile * 5;
				average = average * 7;
				complex = complex * 10;
				fp = simpile + average + complex;
			}
			return fp;
		}
		double functionPointAddition(double simpile, double complex, double average, String ^type, double fp)
		{
			fp = functionPointTable(simpile, average, complex, type) + fp;
			return fp;
		}
		//end function point calculation functions

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->titleLabel = (gcnew System::Windows::Forms::Label());
			this->subTitleLabel = (gcnew System::Windows::Forms::Label());
			this->numUserInputsLabel = (gcnew System::Windows::Forms::Label());
			this->numUserOutputsLabel = (gcnew System::Windows::Forms::Label());
			this->numUserInqLabel = (gcnew System::Windows::Forms::Label());
			this->numberOfFilesLabel = (gcnew System::Windows::Forms::Label());
			this->numberOfOutputsLabel = (gcnew System::Windows::Forms::Label());
			this->simpleLabel = (gcnew System::Windows::Forms::Label());
			this->averageLabel = (gcnew System::Windows::Forms::Label());
			this->complexLabel = (gcnew System::Windows::Forms::Label());
			this->nextScrnButton = (gcnew System::Windows::Forms::Button());
			this->errFeebackLabel = (gcnew System::Windows::Forms::Label());
			this->simUsrInUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->simUsrOutUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->avgUsrInUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->cmpUsrInUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->avgUsrOutUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->cmpUsrOutUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->simUsrInqUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->avgUsrInqUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->cmpUsrInqUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->simFilesUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->avgFilesUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->cmpFilesUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->simOutUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->avgOutUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->cmpOutUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->demoButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->simUsrInUpDown))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->simUsrOutUpDown))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->avgUsrInUpDown))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cmpUsrInUpDown))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->avgUsrOutUpDown))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cmpUsrOutUpDown))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->simUsrInqUpDown))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->avgUsrInqUpDown))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cmpUsrInqUpDown))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->simFilesUpDown))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->avgFilesUpDown))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cmpFilesUpDown))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->simOutUpDown))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->avgOutUpDown))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cmpOutUpDown))->BeginInit();
			this->SuspendLayout();
			// 
			// titleLabel
			// 
			this->titleLabel->AutoSize = true;
			this->titleLabel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->titleLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->titleLabel->Location = System::Drawing::Point(66, 9);
			this->titleLabel->Name = L"titleLabel";
			this->titleLabel->Size = System::Drawing::Size(471, 48);
			this->titleLabel->TabIndex = 0;
			this->titleLabel->Text = L"Calculation Stage 1 of 4";
			// 
			// subTitleLabel
			// 
			this->subTitleLabel->AutoSize = true;
			this->subTitleLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->subTitleLabel->Location = System::Drawing::Point(61, 71);
			this->subTitleLabel->Name = L"subTitleLabel";
			this->subTitleLabel->Size = System::Drawing::Size(449, 25);
			this->subTitleLabel->TabIndex = 1;
			this->subTitleLabel->Text = L"Please insert your data values into the table below:";
			// 
			// numUserInputsLabel
			// 
			this->numUserInputsLabel->AutoSize = true;
			this->numUserInputsLabel->Location = System::Drawing::Point(66, 139);
			this->numUserInputsLabel->Name = L"numUserInputsLabel";
			this->numUserInputsLabel->Size = System::Drawing::Size(154, 17);
			this->numUserInputsLabel->TabIndex = 2;
			this->numUserInputsLabel->Text = L"Number of User Inputs:";
			// 
			// numUserOutputsLabel
			// 
			this->numUserOutputsLabel->AutoSize = true;
			this->numUserOutputsLabel->Location = System::Drawing::Point(54, 166);
			this->numUserOutputsLabel->Name = L"numUserOutputsLabel";
			this->numUserOutputsLabel->Size = System::Drawing::Size(166, 17);
			this->numUserOutputsLabel->TabIndex = 3;
			this->numUserOutputsLabel->Text = L"Number of User Outputs:";
			// 
			// numUserInqLabel
			// 
			this->numUserInqLabel->AutoSize = true;
			this->numUserInqLabel->Location = System::Drawing::Point(51, 194);
			this->numUserInqLabel->Name = L"numUserInqLabel";
			this->numUserInqLabel->Size = System::Drawing::Size(169, 17);
			this->numUserInqLabel->TabIndex = 4;
			this->numUserInqLabel->Text = L"Number of User Inquiries:";
			// 
			// numberOfFilesLabel
			// 
			this->numberOfFilesLabel->AutoSize = true;
			this->numberOfFilesLabel->Location = System::Drawing::Point(109, 224);
			this->numberOfFilesLabel->Name = L"numberOfFilesLabel";
			this->numberOfFilesLabel->Size = System::Drawing::Size(111, 17);
			this->numberOfFilesLabel->TabIndex = 5;
			this->numberOfFilesLabel->Text = L"Number of Files:";
			// 
			// numberOfOutputsLabel
			// 
			this->numberOfOutputsLabel->AutoSize = true;
			this->numberOfOutputsLabel->Location = System::Drawing::Point(76, 253);
			this->numberOfOutputsLabel->Name = L"numberOfOutputsLabel";
			this->numberOfOutputsLabel->Size = System::Drawing::Size(144, 17);
			this->numberOfOutputsLabel->TabIndex = 6;
			this->numberOfOutputsLabel->Text = L"Number of Interfaces:";
			// 
			// simpleLabel
			// 
			this->simpleLabel->AutoSize = true;
			this->simpleLabel->Location = System::Drawing::Point(227, 121);
			this->simpleLabel->Name = L"simpleLabel";
			this->simpleLabel->Size = System::Drawing::Size(54, 17);
			this->simpleLabel->TabIndex = 7;
			this->simpleLabel->Text = L"Simple:";
			// 
			// averageLabel
			// 
			this->averageLabel->AutoSize = true;
			this->averageLabel->Location = System::Drawing::Point(313, 120);
			this->averageLabel->Name = L"averageLabel";
			this->averageLabel->Size = System::Drawing::Size(65, 17);
			this->averageLabel->TabIndex = 8;
			this->averageLabel->Text = L"Average:";
			// 
			// complexLabel
			// 
			this->complexLabel->AutoSize = true;
			this->complexLabel->Location = System::Drawing::Point(409, 120);
			this->complexLabel->Name = L"complexLabel";
			this->complexLabel->Size = System::Drawing::Size(65, 17);
			this->complexLabel->TabIndex = 9;
			this->complexLabel->Text = L"Complex:";
			// 
			// nextScrnButton
			// 
			this->nextScrnButton->Location = System::Drawing::Point(316, 306);
			this->nextScrnButton->Name = L"nextScrnButton";
			this->nextScrnButton->Size = System::Drawing::Size(136, 56);
			this->nextScrnButton->TabIndex = 10;
			this->nextScrnButton->Text = L"Continue to next\r\ncalculation stage";
			this->nextScrnButton->UseVisualStyleBackColor = true;
			this->nextScrnButton->Click += gcnew System::EventHandler(this, &FirstCalcScreen::nextScrnButton_Click);
			// 
			// errFeebackLabel
			// 
			this->errFeebackLabel->AutoSize = true;
			this->errFeebackLabel->Location = System::Drawing::Point(316, 369);
			this->errFeebackLabel->Name = L"errFeebackLabel";
			this->errFeebackLabel->Size = System::Drawing::Size(135, 17);
			this->errFeebackLabel->TabIndex = 11;
			this->errFeebackLabel->Text = L"(no errors detected)";
			// 
			// simUsrInUpDown
			// 
			this->simUsrInUpDown->Location = System::Drawing::Point(226, 141);
			this->simUsrInUpDown->Name = L"simUsrInUpDown";
			this->simUsrInUpDown->Size = System::Drawing::Size(55, 22);
			this->simUsrInUpDown->TabIndex = 12;
			// 
			// simUsrOutUpDown
			// 
			this->simUsrOutUpDown->Location = System::Drawing::Point(226, 164);
			this->simUsrOutUpDown->Name = L"simUsrOutUpDown";
			this->simUsrOutUpDown->Size = System::Drawing::Size(55, 22);
			this->simUsrOutUpDown->TabIndex = 15;
			// 
			// avgUsrInUpDown
			// 
			this->avgUsrInUpDown->Location = System::Drawing::Point(316, 141);
			this->avgUsrInUpDown->Name = L"avgUsrInUpDown";
			this->avgUsrInUpDown->Size = System::Drawing::Size(55, 22);
			this->avgUsrInUpDown->TabIndex = 16;
			// 
			// cmpUsrInUpDown
			// 
			this->cmpUsrInUpDown->Location = System::Drawing::Point(412, 141);
			this->cmpUsrInUpDown->Name = L"cmpUsrInUpDown";
			this->cmpUsrInUpDown->Size = System::Drawing::Size(55, 22);
			this->cmpUsrInUpDown->TabIndex = 17;
			// 
			// avgUsrOutUpDown
			// 
			this->avgUsrOutUpDown->Location = System::Drawing::Point(316, 164);
			this->avgUsrOutUpDown->Name = L"avgUsrOutUpDown";
			this->avgUsrOutUpDown->Size = System::Drawing::Size(55, 22);
			this->avgUsrOutUpDown->TabIndex = 18;
			// 
			// cmpUsrOutUpDown
			// 
			this->cmpUsrOutUpDown->Location = System::Drawing::Point(412, 164);
			this->cmpUsrOutUpDown->Name = L"cmpUsrOutUpDown";
			this->cmpUsrOutUpDown->Size = System::Drawing::Size(55, 22);
			this->cmpUsrOutUpDown->TabIndex = 19;
			// 
			// simUsrInqUpDown
			// 
			this->simUsrInqUpDown->Location = System::Drawing::Point(226, 192);
			this->simUsrInqUpDown->Name = L"simUsrInqUpDown";
			this->simUsrInqUpDown->Size = System::Drawing::Size(55, 22);
			this->simUsrInqUpDown->TabIndex = 20;
			// 
			// avgUsrInqUpDown
			// 
			this->avgUsrInqUpDown->Location = System::Drawing::Point(316, 192);
			this->avgUsrInqUpDown->Name = L"avgUsrInqUpDown";
			this->avgUsrInqUpDown->Size = System::Drawing::Size(55, 22);
			this->avgUsrInqUpDown->TabIndex = 21;
			// 
			// cmpUsrInqUpDown
			// 
			this->cmpUsrInqUpDown->Location = System::Drawing::Point(412, 192);
			this->cmpUsrInqUpDown->Name = L"cmpUsrInqUpDown";
			this->cmpUsrInqUpDown->Size = System::Drawing::Size(55, 22);
			this->cmpUsrInqUpDown->TabIndex = 22;
			// 
			// simFilesUpDown
			// 
			this->simFilesUpDown->Location = System::Drawing::Point(226, 222);
			this->simFilesUpDown->Name = L"simFilesUpDown";
			this->simFilesUpDown->Size = System::Drawing::Size(55, 22);
			this->simFilesUpDown->TabIndex = 23;
			// 
			// avgFilesUpDown
			// 
			this->avgFilesUpDown->Location = System::Drawing::Point(316, 222);
			this->avgFilesUpDown->Name = L"avgFilesUpDown";
			this->avgFilesUpDown->Size = System::Drawing::Size(55, 22);
			this->avgFilesUpDown->TabIndex = 24;
			// 
			// cmpFilesUpDown
			// 
			this->cmpFilesUpDown->Location = System::Drawing::Point(412, 222);
			this->cmpFilesUpDown->Name = L"cmpFilesUpDown";
			this->cmpFilesUpDown->Size = System::Drawing::Size(55, 22);
			this->cmpFilesUpDown->TabIndex = 25;
			// 
			// simOutUpDown
			// 
			this->simOutUpDown->Location = System::Drawing::Point(226, 251);
			this->simOutUpDown->Name = L"simOutUpDown";
			this->simOutUpDown->Size = System::Drawing::Size(55, 22);
			this->simOutUpDown->TabIndex = 26;
			// 
			// avgOutUpDown
			// 
			this->avgOutUpDown->Location = System::Drawing::Point(316, 251);
			this->avgOutUpDown->Name = L"avgOutUpDown";
			this->avgOutUpDown->Size = System::Drawing::Size(55, 22);
			this->avgOutUpDown->TabIndex = 27;
			// 
			// cmpOutUpDown
			// 
			this->cmpOutUpDown->Location = System::Drawing::Point(412, 251);
			this->cmpOutUpDown->Name = L"cmpOutUpDown";
			this->cmpOutUpDown->Size = System::Drawing::Size(55, 22);
			this->cmpOutUpDown->TabIndex = 28;
			// 
			// demoButton
			// 
			this->demoButton->Location = System::Drawing::Point(54, 362);
			this->demoButton->Name = L"demoButton";
			this->demoButton->Size = System::Drawing::Size(75, 23);
			this->demoButton->TabIndex = 29;
			this->demoButton->Text = L"DEMO";
			this->demoButton->UseVisualStyleBackColor = true;
			this->demoButton->Click += gcnew System::EventHandler(this, &FirstCalcScreen::demoButton_Click);
			// 
			// FirstCalcScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(616, 421);
			this->Controls->Add(this->demoButton);
			this->Controls->Add(this->cmpOutUpDown);
			this->Controls->Add(this->avgOutUpDown);
			this->Controls->Add(this->simOutUpDown);
			this->Controls->Add(this->cmpFilesUpDown);
			this->Controls->Add(this->avgFilesUpDown);
			this->Controls->Add(this->simFilesUpDown);
			this->Controls->Add(this->cmpUsrInqUpDown);
			this->Controls->Add(this->avgUsrInqUpDown);
			this->Controls->Add(this->simUsrInqUpDown);
			this->Controls->Add(this->cmpUsrOutUpDown);
			this->Controls->Add(this->avgUsrOutUpDown);
			this->Controls->Add(this->cmpUsrInUpDown);
			this->Controls->Add(this->avgUsrInUpDown);
			this->Controls->Add(this->simUsrOutUpDown);
			this->Controls->Add(this->simUsrInUpDown);
			this->Controls->Add(this->errFeebackLabel);
			this->Controls->Add(this->nextScrnButton);
			this->Controls->Add(this->complexLabel);
			this->Controls->Add(this->averageLabel);
			this->Controls->Add(this->simpleLabel);
			this->Controls->Add(this->numberOfOutputsLabel);
			this->Controls->Add(this->numberOfFilesLabel);
			this->Controls->Add(this->numUserInqLabel);
			this->Controls->Add(this->numUserOutputsLabel);
			this->Controls->Add(this->numUserInputsLabel);
			this->Controls->Add(this->subTitleLabel);
			this->Controls->Add(this->titleLabel);
			this->Name = L"FirstCalcScreen";
			this->Text = L"FirstCalcScreen";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &FirstCalcScreen::FirstCalcScreen_FormClosed);
			this->Load += gcnew System::EventHandler(this, &FirstCalcScreen::FirstCalcScreen_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->simUsrInUpDown))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->simUsrOutUpDown))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->avgUsrInUpDown))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cmpUsrInUpDown))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->avgUsrOutUpDown))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cmpUsrOutUpDown))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->simUsrInqUpDown))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->avgUsrInqUpDown))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cmpUsrInqUpDown))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->simFilesUpDown))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->avgFilesUpDown))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cmpFilesUpDown))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->simOutUpDown))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->avgOutUpDown))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cmpOutUpDown))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//shuts down the application when the red X button is pressed
	private: System::Void FirstCalcScreen_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
		Application::Exit();
	}

	//transfers the user to the next calculation screen
	private: System::Void nextScrnButton_Click(System::Object^  sender, System::EventArgs^  e) {
		
		//Performs function point calculation using input values
		double fp = 0.0;

		fp = functionPointAddition(double(simUsrInUpDown->Value), double(avgUsrInUpDown->Value), double(cmpUsrInUpDown->Value), "input", fp);
		fp = functionPointAddition(double(simUsrOutUpDown->Value), double(avgUsrOutUpDown->Value), double(cmpUsrOutUpDown->Value), "output", fp);
		fp = functionPointAddition(double(simUsrInqUpDown->Value), double(avgUsrInqUpDown->Value), double(cmpUsrInqUpDown->Value), "queries", fp);
		fp = functionPointAddition(double(simFilesUpDown->Value), double(avgFilesUpDown->Value), double(cmpFilesUpDown->Value), "files", fp);
		fp = functionPointAddition(double(simOutUpDown->Value), double(avgOutUpDown->Value), double(cmpOutUpDown->Value), "interface", fp);


		//brings user to the next calculation stage
		this->Hide();
		SeccondCalcScreen^ form3 = gcnew SeccondCalcScreen(fp);
		form3->ShowDialog();

	}

private: System::Void FirstCalcScreen_Load(System::Object^  sender, System::EventArgs^  e) {
}

		 //inserts placeholder values for demonstration purposes
private: System::Void demoButton_Click(System::Object^  sender, System::EventArgs^  e) {
	simUsrInUpDown->Value = 5;
	avgUsrInUpDown->Value = 5;
	cmpUsrInUpDown->Value = 6;

	simUsrOutUpDown->Value = 6;
	avgUsrOutUpDown->Value = 8;
	cmpUsrOutUpDown->Value = 9;

	simUsrInqUpDown->Value = 7;
	avgUsrInqUpDown->Value = 7;
	cmpUsrInqUpDown->Value = 6;

	simFilesUpDown->Value = 8;
	avgFilesUpDown->Value = 5;
	cmpFilesUpDown->Value = 3;

	simOutUpDown->Value = 10;
	avgOutUpDown->Value = 5;
	cmpOutUpDown->Value = 2;

}
};
}
