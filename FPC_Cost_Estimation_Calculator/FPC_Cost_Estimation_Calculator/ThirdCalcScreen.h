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
			this->SuspendLayout();
			// 
			// titleLabel
			// 
			this->titleLabel->AutoSize = true;
			this->titleLabel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->titleLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->titleLabel->Location = System::Drawing::Point(71, 9);
			this->titleLabel->Name = L"titleLabel";
			this->titleLabel->Size = System::Drawing::Size(471, 48);
			this->titleLabel->TabIndex = 2;
			this->titleLabel->Text = L"Calculation Stage 3 of 4";
			// 
			// ThirdCalcScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(612, 379);
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
