#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace projectUI {

	/// <summary>
	/// Summary for UserControlSearch
	/// </summary>
	public ref class UserControlSearch : public System::Windows::Forms::UserControl
	{
	public:
		UserControlSearch(void)
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
		~UserControlSearch()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  comboBox1;
	protected: 
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::Panel^  searchResultsPanel;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  helpBtn;

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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->searchResultsPanel = (gcnew System::Windows::Forms::Panel());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->helpBtn = (gcnew System::Windows::Forms::Button());
			this->searchResultsPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(500, 12);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(75, 21);
			this->comboBox1->TabIndex = 12;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(417, 13);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(79, 17);
			this->radioButton3->TabIndex = 11;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Admin Staff";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// searchResultsPanel
			// 
			this->searchResultsPanel->BackColor = System::Drawing::SystemColors::Control;
			this->searchResultsPanel->Controls->Add(this->comboBox1);
			this->searchResultsPanel->Controls->Add(this->radioButton3);
			this->searchResultsPanel->Controls->Add(this->radioButton2);
			this->searchResultsPanel->Controls->Add(this->radioButton1);
			this->searchResultsPanel->Controls->Add(this->textBox1);
			this->searchResultsPanel->Controls->Add(this->helpBtn);
			this->searchResultsPanel->Location = System::Drawing::Point(0, 0);
			this->searchResultsPanel->Margin = System::Windows::Forms::Padding(0);
			this->searchResultsPanel->Name = L"searchResultsPanel";
			this->searchResultsPanel->Size = System::Drawing::Size(965, 440);
			this->searchResultsPanel->TabIndex = 20;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(361, 13);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(59, 17);
			this->radioButton2->TabIndex = 10;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Faculty";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(302, 13);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(62, 17);
			this->radioButton1->TabIndex = 9;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Student";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(302, 36);
			this->textBox1->Margin = System::Windows::Forms::Padding(0);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(253, 19);
			this->textBox1->TabIndex = 6;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// helpBtn
			// 
			this->helpBtn->BackColor = System::Drawing::Color::Teal;
			this->helpBtn->FlatAppearance->BorderSize = 0;
			this->helpBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Teal;
			this->helpBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Teal;
			this->helpBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->helpBtn->Font = (gcnew System::Drawing::Font(L"Chiller", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->helpBtn->ForeColor = System::Drawing::Color::Gold;
			this->helpBtn->Location = System::Drawing::Point(558, 36);
			this->helpBtn->Margin = System::Windows::Forms::Padding(0);
			this->helpBtn->Name = L"helpBtn";
			this->helpBtn->Size = System::Drawing::Size(19, 19);
			this->helpBtn->TabIndex = 8;
			this->helpBtn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->helpBtn->UseVisualStyleBackColor = false;
			// 
			// UserControlSearch
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->searchResultsPanel);
			this->Name = L"UserControlSearch";
			this->Size = System::Drawing::Size(965, 440);
			this->searchResultsPanel->ResumeLayout(false);
			this->searchResultsPanel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
