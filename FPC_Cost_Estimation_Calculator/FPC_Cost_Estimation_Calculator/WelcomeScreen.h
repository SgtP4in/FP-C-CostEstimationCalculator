#pragma once
#include "FirstCalcScreen.h"

namespace FPCCostEstimationCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for WelcomeScreen
	/// </summary>
	public ref class WelcomeScreen : public System::Windows::Forms::Form
	{
	public:
		WelcomeScreen(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~WelcomeScreen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  titleLabel;
	private: System::Windows::Forms::Label^  welcomeLabel;
	private: System::Windows::Forms::Button^  startCalculationButton;
	private: System::Windows::Forms::Label^  descriptionLabel;
	private: System::Windows::Forms::Label^  devCreditsLabel;
	private: System::Windows::Forms::Label^  sourceCreditsLabel;
	private: System::Windows::Forms::Label^  supportContactLabel;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(WelcomeScreen::typeid));
			this->titleLabel = (gcnew System::Windows::Forms::Label());
			this->welcomeLabel = (gcnew System::Windows::Forms::Label());
			this->startCalculationButton = (gcnew System::Windows::Forms::Button());
			this->descriptionLabel = (gcnew System::Windows::Forms::Label());
			this->devCreditsLabel = (gcnew System::Windows::Forms::Label());
			this->sourceCreditsLabel = (gcnew System::Windows::Forms::Label());
			this->supportContactLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// titleLabel
			// 
			this->titleLabel->AutoSize = true;
			this->titleLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->titleLabel->Location = System::Drawing::Point(12, 9);
			this->titleLabel->Name = L"titleLabel";
			this->titleLabel->Size = System::Drawing::Size(610, 25);
			this->titleLabel->TabIndex = 0;
			this->titleLabel->Text = L"Function Point/COCOMO 1 Project Cost Estimation Calculator";
			// 
			// welcomeLabel
			// 
			this->welcomeLabel->AutoSize = true;
			this->welcomeLabel->Location = System::Drawing::Point(13, 38);
			this->welcomeLabel->Name = L"welcomeLabel";
			this->welcomeLabel->Size = System::Drawing::Size(516, 17);
			this->welcomeLabel->TabIndex = 1;
			this->welcomeLabel->Text = L"Welcome! This tool will assist you in estimating the costs of your software Proje"
				L"ct!";
			this->welcomeLabel->Click += gcnew System::EventHandler(this, &WelcomeScreen::label1_Click);
			// 
			// startCalculationButton
			// 
			this->startCalculationButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->startCalculationButton->Location = System::Drawing::Point(1195, 352);
			this->startCalculationButton->Name = L"startCalculationButton";
			this->startCalculationButton->Size = System::Drawing::Size(135, 69);
			this->startCalculationButton->TabIndex = 3;
			this->startCalculationButton->Text = L"Start Calculation";
			this->startCalculationButton->UseVisualStyleBackColor = true;
			this->startCalculationButton->Click += gcnew System::EventHandler(this, &WelcomeScreen::startCalculationButton_Click);
			// 
			// descriptionLabel
			// 
			this->descriptionLabel->AutoSize = true;
			this->descriptionLabel->Location = System::Drawing::Point(14, 55);
			this->descriptionLabel->Name = L"descriptionLabel";
			this->descriptionLabel->Size = System::Drawing::Size(1316, 425);
			this->descriptionLabel->TabIndex = 4;
			this->descriptionLabel->Text = resources->GetString(L"descriptionLabel.Text");
			// 
			// devCreditsLabel
			// 
			this->devCreditsLabel->AutoSize = true;
			this->devCreditsLabel->BackColor = System::Drawing::SystemColors::Control;
			this->devCreditsLabel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->devCreditsLabel->Location = System::Drawing::Point(712, 334);
			this->devCreditsLabel->Name = L"devCreditsLabel";
			this->devCreditsLabel->Size = System::Drawing::Size(140, 87);
			this->devCreditsLabel->TabIndex = 5;
			this->devCreditsLabel->Text = L"Developer Credits:\r\n-Andrew R. Davis\r\n-Bradley Steltz\r\n-Al-Qasim Al-Qabtan\r\n-Syed"
				L" Miah";
			// 
			// sourceCreditsLabel
			// 
			this->sourceCreditsLabel->AutoSize = true;
			this->sourceCreditsLabel->BackColor = System::Drawing::SystemColors::Control;
			this->sourceCreditsLabel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->sourceCreditsLabel->Location = System::Drawing::Point(712, 430);
			this->sourceCreditsLabel->Name = L"sourceCreditsLabel";
			this->sourceCreditsLabel->Size = System::Drawing::Size(440, 104);
			this->sourceCreditsLabel->TabIndex = 6;
			this->sourceCreditsLabel->Text = resources->GetString(L"sourceCreditsLabel.Text");
			// 
			// supportContactLabel
			// 
			this->supportContactLabel->AutoSize = true;
			this->supportContactLabel->BackColor = System::Drawing::SystemColors::Control;
			this->supportContactLabel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->supportContactLabel->Location = System::Drawing::Point(858, 334);
			this->supportContactLabel->Name = L"supportContactLabel";
			this->supportContactLabel->Size = System::Drawing::Size(148, 36);
			this->supportContactLabel->TabIndex = 7;
			this->supportContactLabel->Text = L"Support Contact:\r\nandrewrd@umich.edu";
			// 
			// WelcomeScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1372, 576);
			this->Controls->Add(this->startCalculationButton);
			this->Controls->Add(this->supportContactLabel);
			this->Controls->Add(this->sourceCreditsLabel);
			this->Controls->Add(this->devCreditsLabel);
			this->Controls->Add(this->descriptionLabel);
			this->Controls->Add(this->welcomeLabel);
			this->Controls->Add(this->titleLabel);
			this->Name = L"WelcomeScreen";
			this->Text = L"WelcomeScreen";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &WelcomeScreen::WelcomeScreen_FormClosing);
			this->Load += gcnew System::EventHandler(this, &WelcomeScreen::WelcomeScreen_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}

	//shuts down the application when the red X button is pressed
	private: System::Void startCalculationButton_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		FirstCalcScreen^ form2 = gcnew FirstCalcScreen();
		form2->ShowDialog();

	}

	//transfers the user to the next calculation screen
	private: System::Void WelcomeScreen_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
		Application::Exit();
	}
private: System::Void WelcomeScreen_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
