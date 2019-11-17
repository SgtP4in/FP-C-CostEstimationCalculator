#pragma once
#include "ThirdCalcScreen.h"

namespace FPCCostEstimationCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SeccondCalcScreen
	/// </summary>
	public ref class SeccondCalcScreen : public System::Windows::Forms::Form
	{
	public:
		double fp;

	public:
		SeccondCalcScreen(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		SeccondCalcScreen(double currFP)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			fp = currFP;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SeccondCalcScreen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  titleLabel;
	private: System::Windows::Forms::Label^  subTitleLabel;
	private: System::Windows::Forms::Label^  questionsLabel;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown3;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown4;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown5;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown6;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown7;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown8;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown9;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown10;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown11;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown12;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown13;
	private: System::Windows::Forms::Button^  button1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(SeccondCalcScreen::typeid));
			this->titleLabel = (gcnew System::Windows::Forms::Label());
			this->subTitleLabel = (gcnew System::Windows::Forms::Label());
			this->questionsLabel = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown7 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown8 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown9 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown10 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown11 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown12 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown13 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown13))->BeginInit();
			this->SuspendLayout();
			// 
			// titleLabel
			// 
			this->titleLabel->AutoSize = true;
			this->titleLabel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->titleLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->titleLabel->Location = System::Drawing::Point(297, 9);
			this->titleLabel->Name = L"titleLabel";
			this->titleLabel->Size = System::Drawing::Size(471, 48);
			this->titleLabel->TabIndex = 1;
			this->titleLabel->Text = L"Calculation Stage 2 of 4";
			// 
			// subTitleLabel
			// 
			this->subTitleLabel->AutoSize = true;
			this->subTitleLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->subTitleLabel->Location = System::Drawing::Point(292, 67);
			this->subTitleLabel->Name = L"subTitleLabel";
			this->subTitleLabel->Size = System::Drawing::Size(495, 50);
			this->subTitleLabel->TabIndex = 2;
			this->subTitleLabel->Text = L"Please answer the questionare below \r\n(with a rating of 0-5 relative to importanc"
				L"e to the project):";
			this->subTitleLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// questionsLabel
			// 
			this->questionsLabel->AutoSize = true;
			this->questionsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->questionsLabel->Location = System::Drawing::Point(69, 126);
			this->questionsLabel->Name = L"questionsLabel";
			this->questionsLabel->Size = System::Drawing::Size(975, 406);
			this->questionsLabel->TabIndex = 3;
			this->questionsLabel->Text = resources->GetString(L"questionsLabel.Text");
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(12, 134);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(51, 22);
			this->numericUpDown1->TabIndex = 4;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(12, 162);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(51, 22);
			this->numericUpDown2->TabIndex = 5;
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(12, 190);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(51, 22);
			this->numericUpDown3->TabIndex = 6;
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(12, 218);
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(51, 22);
			this->numericUpDown4->TabIndex = 7;
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Location = System::Drawing::Point(12, 246);
			this->numericUpDown5->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(51, 22);
			this->numericUpDown5->TabIndex = 8;
			// 
			// numericUpDown6
			// 
			this->numericUpDown6->Location = System::Drawing::Point(12, 274);
			this->numericUpDown6->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->numericUpDown6->Name = L"numericUpDown6";
			this->numericUpDown6->Size = System::Drawing::Size(51, 22);
			this->numericUpDown6->TabIndex = 9;
			// 
			// numericUpDown7
			// 
			this->numericUpDown7->Location = System::Drawing::Point(12, 302);
			this->numericUpDown7->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->numericUpDown7->Name = L"numericUpDown7";
			this->numericUpDown7->Size = System::Drawing::Size(51, 22);
			this->numericUpDown7->TabIndex = 10;
			// 
			// numericUpDown8
			// 
			this->numericUpDown8->Location = System::Drawing::Point(12, 362);
			this->numericUpDown8->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->numericUpDown8->Name = L"numericUpDown8";
			this->numericUpDown8->Size = System::Drawing::Size(51, 22);
			this->numericUpDown8->TabIndex = 11;
			// 
			// numericUpDown9
			// 
			this->numericUpDown9->Location = System::Drawing::Point(12, 390);
			this->numericUpDown9->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->numericUpDown9->Name = L"numericUpDown9";
			this->numericUpDown9->Size = System::Drawing::Size(51, 22);
			this->numericUpDown9->TabIndex = 12;
			// 
			// numericUpDown10
			// 
			this->numericUpDown10->Location = System::Drawing::Point(12, 418);
			this->numericUpDown10->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->numericUpDown10->Name = L"numericUpDown10";
			this->numericUpDown10->Size = System::Drawing::Size(51, 22);
			this->numericUpDown10->TabIndex = 13;
			// 
			// numericUpDown11
			// 
			this->numericUpDown11->Location = System::Drawing::Point(12, 446);
			this->numericUpDown11->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->numericUpDown11->Name = L"numericUpDown11";
			this->numericUpDown11->Size = System::Drawing::Size(51, 22);
			this->numericUpDown11->TabIndex = 14;
			// 
			// numericUpDown12
			// 
			this->numericUpDown12->Location = System::Drawing::Point(12, 474);
			this->numericUpDown12->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->numericUpDown12->Name = L"numericUpDown12";
			this->numericUpDown12->Size = System::Drawing::Size(51, 22);
			this->numericUpDown12->TabIndex = 15;
			// 
			// numericUpDown13
			// 
			this->numericUpDown13->Location = System::Drawing::Point(12, 510);
			this->numericUpDown13->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->numericUpDown13->Name = L"numericUpDown13";
			this->numericUpDown13->Size = System::Drawing::Size(51, 22);
			this->numericUpDown13->TabIndex = 16;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(898, 456);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(146, 76);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Continue to next\r\ncalculation stage";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SeccondCalcScreen::button1_Click);
			// 
			// SeccondCalcScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1059, 560);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->numericUpDown13);
			this->Controls->Add(this->numericUpDown12);
			this->Controls->Add(this->numericUpDown11);
			this->Controls->Add(this->numericUpDown10);
			this->Controls->Add(this->numericUpDown9);
			this->Controls->Add(this->numericUpDown8);
			this->Controls->Add(this->numericUpDown7);
			this->Controls->Add(this->numericUpDown6);
			this->Controls->Add(this->numericUpDown5);
			this->Controls->Add(this->numericUpDown4);
			this->Controls->Add(this->numericUpDown3);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->questionsLabel);
			this->Controls->Add(this->subTitleLabel);
			this->Controls->Add(this->titleLabel);
			this->Name = L"SeccondCalcScreen";
			this->Text = L"SeccondCalcScreen";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &SeccondCalcScreen::SeccondCalcScreen_FormClosed);
			this->Load += gcnew System::EventHandler(this, &SeccondCalcScreen::SeccondCalcScreen_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown13))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void SeccondCalcScreen_Load(System::Object^  sender, System::EventArgs^  e) {
		

	}

			 //shuts down the program when the form is closed
	private: System::Void SeccondCalcScreen_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
		Application::Exit();

	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		double qstTot = 0;
		//adds up questionare responces
		qstTot = double(numericUpDown1->Value) + double(numericUpDown2->Value) + double(numericUpDown3->Value) 
			+ double(numericUpDown4->Value) + double(numericUpDown5->Value) + double(numericUpDown6->Value) 
			+ double(numericUpDown7->Value) + double(numericUpDown8->Value) + double(numericUpDown9->Value) 
			+ double(numericUpDown10->Value) + double(numericUpDown11->Value) + double(numericUpDown12->Value) 
			+ double(numericUpDown13->Value);

		//calculates total function points using questionare points and points from stage 1
		double finalFP = 0;
		//TODO

		//takes the user to the next calculation stage
		this->Hide();
		ThirdCalcScreen^ form4 = gcnew ThirdCalcScreen(finalFP);
		form4->ShowDialog();

	}
};
}
