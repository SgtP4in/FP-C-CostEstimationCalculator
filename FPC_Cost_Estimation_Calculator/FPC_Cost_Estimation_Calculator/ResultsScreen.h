#pragma once
#include <fstream>
#include <string>
#include <msclr\marshal_cppstd.h>
#include <filesystem>

namespace FPCCostEstimationCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ResultsScreen
	/// </summary>
	public ref class ResultsScreen : public System::Windows::Forms::Form
	{
	public:
		double totFP = 0;
		double totLOC = 0;
		String^ cocModeUsed = " "; 
		double totEffort = 0; 
		double totDuration = 0;
		double totCost = 0; 
		double totStaff = 0;
	public:
		ResultsScreen(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		ResultsScreen(double FPIn, double LOCIn, String^ cocModeIn, double effortIn, double durationIn, double costIn, double staffIn)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			totFP = FPIn;
			totLOC = LOCIn;
			cocModeUsed = cocModeIn;
			totEffort = effortIn;
			totDuration = durationIn;
			totCost = costIn;
			totStaff = staffIn;

			//delete the language table
			std::remove("laungaugeTable.txt");
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ResultsScreen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  titleLabel;
	private: System::Windows::Forms::Label^  subTitleLabel;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  saveButton;
	private: System::Windows::Forms::Button^  restartButton;
	private: System::Windows::Forms::Label^  cocomoLabel;
	private: System::Windows::Forms::Label^  locLabel;
	private: System::Windows::Forms::Label^  effortLabel;
	private: System::Windows::Forms::Label^  durationLabel;
	private: System::Windows::Forms::Label^  staffLabel;
	private: System::Windows::Forms::Label^  costLabel;
	private: System::Windows::Forms::Label^  fpLabel;
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
			this->subTitleLabel = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->saveButton = (gcnew System::Windows::Forms::Button());
			this->restartButton = (gcnew System::Windows::Forms::Button());
			this->cocomoLabel = (gcnew System::Windows::Forms::Label());
			this->locLabel = (gcnew System::Windows::Forms::Label());
			this->effortLabel = (gcnew System::Windows::Forms::Label());
			this->durationLabel = (gcnew System::Windows::Forms::Label());
			this->staffLabel = (gcnew System::Windows::Forms::Label());
			this->costLabel = (gcnew System::Windows::Forms::Label());
			this->fpLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// titleLabel
			// 
			this->titleLabel->AutoSize = true;
			this->titleLabel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->titleLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->titleLabel->Location = System::Drawing::Point(132, 11);
			this->titleLabel->Name = L"titleLabel";
			this->titleLabel->Size = System::Drawing::Size(384, 48);
			this->titleLabel->TabIndex = 4;
			this->titleLabel->Text = L"Calculation Results";
			// 
			// subTitleLabel
			// 
			this->subTitleLabel->AutoSize = true;
			this->subTitleLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->subTitleLabel->Location = System::Drawing::Point(193, 59);
			this->subTitleLabel->Name = L"subTitleLabel";
			this->subTitleLabel->Size = System::Drawing::Size(265, 25);
			this->subTitleLabel->TabIndex = 46;
			this->subTitleLabel->Text = L"Generated Project Estimates:";
			this->subTitleLabel->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(73, 84);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(223, 136);
			this->label1->TabIndex = 47;
			this->label1->Text = L"Basic COCOMO I mode used:\r\nTotal Function Points:\r\n\r\nLines of Code:\r\nEffort (in p"
				L"erson months):\r\nDuration (in months):\r\nReccomended Development Staff:\r\nStaffing "
				L"Cost:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// saveButton
			// 
			this->saveButton->Location = System::Drawing::Point(103, 224);
			this->saveButton->Margin = System::Windows::Forms::Padding(4);
			this->saveButton->Name = L"saveButton";
			this->saveButton->Size = System::Drawing::Size(199, 78);
			this->saveButton->TabIndex = 48;
			this->saveButton->Text = L"Save a copy of the results to a text file";
			this->saveButton->UseVisualStyleBackColor = true;
			this->saveButton->Click += gcnew System::EventHandler(this, &ResultsScreen::saveButton_Click);
			// 
			// restartButton
			// 
			this->restartButton->Location = System::Drawing::Point(369, 225);
			this->restartButton->Margin = System::Windows::Forms::Padding(4);
			this->restartButton->Name = L"restartButton";
			this->restartButton->Size = System::Drawing::Size(199, 78);
			this->restartButton->TabIndex = 49;
			this->restartButton->Text = L"Return to the welcome page and begin a new project estimate";
			this->restartButton->UseVisualStyleBackColor = true;
			this->restartButton->Click += gcnew System::EventHandler(this, &ResultsScreen::restartButton_Click);
			// 
			// cocomoLabel
			// 
			this->cocomoLabel->AutoSize = true;
			this->cocomoLabel->Location = System::Drawing::Point(309, 84);
			this->cocomoLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->cocomoLabel->Name = L"cocomoLabel";
			this->cocomoLabel->Size = System::Drawing::Size(46, 17);
			this->cocomoLabel->TabIndex = 50;
			this->cocomoLabel->Text = L"label2";
			// 
			// locLabel
			// 
			this->locLabel->AutoSize = true;
			this->locLabel->Location = System::Drawing::Point(309, 133);
			this->locLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->locLabel->Name = L"locLabel";
			this->locLabel->Size = System::Drawing::Size(46, 17);
			this->locLabel->TabIndex = 51;
			this->locLabel->Text = L"label2";
			// 
			// effortLabel
			// 
			this->effortLabel->AutoSize = true;
			this->effortLabel->Location = System::Drawing::Point(309, 149);
			this->effortLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->effortLabel->Name = L"effortLabel";
			this->effortLabel->Size = System::Drawing::Size(46, 17);
			this->effortLabel->TabIndex = 52;
			this->effortLabel->Text = L"label2";
			// 
			// durationLabel
			// 
			this->durationLabel->AutoSize = true;
			this->durationLabel->Location = System::Drawing::Point(309, 165);
			this->durationLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->durationLabel->Name = L"durationLabel";
			this->durationLabel->Size = System::Drawing::Size(46, 17);
			this->durationLabel->TabIndex = 53;
			this->durationLabel->Text = L"label2";
			// 
			// staffLabel
			// 
			this->staffLabel->AutoSize = true;
			this->staffLabel->Location = System::Drawing::Point(309, 181);
			this->staffLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->staffLabel->Name = L"staffLabel";
			this->staffLabel->Size = System::Drawing::Size(46, 17);
			this->staffLabel->TabIndex = 54;
			this->staffLabel->Text = L"label2";
			// 
			// costLabel
			// 
			this->costLabel->AutoSize = true;
			this->costLabel->Location = System::Drawing::Point(309, 197);
			this->costLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->costLabel->Name = L"costLabel";
			this->costLabel->Size = System::Drawing::Size(46, 17);
			this->costLabel->TabIndex = 55;
			this->costLabel->Text = L"label2";
			// 
			// fpLabel
			// 
			this->fpLabel->AutoSize = true;
			this->fpLabel->Location = System::Drawing::Point(309, 100);
			this->fpLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->fpLabel->Name = L"fpLabel";
			this->fpLabel->Size = System::Drawing::Size(46, 17);
			this->fpLabel->TabIndex = 56;
			this->fpLabel->Text = L"label2";
			// 
			// ResultsScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(688, 316);
			this->Controls->Add(this->fpLabel);
			this->Controls->Add(this->costLabel);
			this->Controls->Add(this->staffLabel);
			this->Controls->Add(this->durationLabel);
			this->Controls->Add(this->effortLabel);
			this->Controls->Add(this->locLabel);
			this->Controls->Add(this->cocomoLabel);
			this->Controls->Add(this->restartButton);
			this->Controls->Add(this->saveButton);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->subTitleLabel);
			this->Controls->Add(this->titleLabel);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"ResultsScreen";
			this->Text = L"ResultsScreen";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &ResultsScreen::ResultsScreen_FormClosed);
			this->Load += gcnew System::EventHandler(this, &ResultsScreen::ResultsScreen_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
		//set the labels on form load to the calculation results
	private: System::Void ResultsScreen_Load(System::Object^  sender, System::EventArgs^  e) {
		cocomoLabel->Text = cocModeUsed;
		fpLabel->Text = totFP.ToString();

		locLabel->Text = totLOC.ToString();
		effortLabel->Text = totEffort.ToString();
		durationLabel->Text = totDuration.ToString();
		staffLabel->Text = totStaff.ToString();
		costLabel->Text = totCost.ToString();

	}

			 //shuts down the application when the form is closed
private: System::Void ResultsScreen_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
	Application::Exit();

}

		 //user chooses to restart the program
private: System::Void restartButton_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Restart();

}

		 //user saves a copy of their results to a text file
private: System::Void saveButton_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ cocModeUsedT = this->cocModeUsed;
	String^ totFPT = this->totFP.ToString();
	String^ totLOCT = this->totLOC.ToString();
	String^ totEffortT = this->totEffort.ToString();
	String^ totDurationT = this->totDuration.ToString();
	String^ totStaffT = this->totStaff.ToString();
	String^ totCostT = this->totCost.ToString();
	
	std::ofstream outFile;
	outFile.open("Saved_Results.txt");
	outFile << "Basic COCOMO I Used: " + msclr::interop::marshal_as<std::string>(cocModeUsedT) + "\n" +
		"Total Function Points: " + msclr::interop::marshal_as<std::string>(totFPT) + "\n" +
		"Lines of Code: " + msclr::interop::marshal_as<std::string>(totLOCT) + "\n" +
		"Effort (in person months): " + msclr::interop::marshal_as<std::string>(totEffortT) + "\n" +
		"Duration (in months): " + msclr::interop::marshal_as<std::string>(totDurationT) + "\n" +
		"Reccomended Development Staff: " + msclr::interop::marshal_as<std::string>(totStaffT) + "\n" +
		"Staff Cost: " + msclr::interop::marshal_as<std::string>(totCostT);

	outFile.close();

	saveButton->Enabled = false;
	saveButton->Location.X = 10;
	saveButton->Width = saveButton->Width + 50;

	std::experimental::filesystem::path cpath = std::experimental::filesystem::current_path();
	String^ currPath = gcnew String(cpath.string().c_str());
	saveButton->Text = "Results Saved to \n" + currPath + "\n" + " As \"Saved_Results.txt\"";

}

};
}
