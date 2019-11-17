#pragma once

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
	protected:
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;

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
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
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
			this->titleLabel->TabIndex = 1;
			this->titleLabel->Text = L"Calculation Stage 2 of 4";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(243, 158);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1215752192, 23, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 22);
			this->numericUpDown1->TabIndex = 2;
			// 
			// SeccondCalcScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(610, 474);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->titleLabel);
			this->Name = L"SeccondCalcScreen";
			this->Text = L"SeccondCalcScreen";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &SeccondCalcScreen::SeccondCalcScreen_FormClosed);
			this->Load += gcnew System::EventHandler(this, &SeccondCalcScreen::SeccondCalcScreen_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void SeccondCalcScreen_Load(System::Object^  sender, System::EventArgs^  e) {
		//placeholder
		numericUpDown1->Value = System::Decimal(fp);

	}

			 //shuts down the program when the form is closed
	private: System::Void SeccondCalcScreen_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
		Application::Exit();

	}
	};
}
