#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace projectUI {

	/// <summary>
	/// Summary for professor_addnotif_3
	/// </summary>
	public ref class professor_addnotif_3 : public System::Windows::Forms::UserControl
	{
	public:
		professor_addnotif_3(void)
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
		~professor_addnotif_3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lbl_request;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  btn_submit;
	protected: 

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
			this->lbl_request = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->btn_submit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lbl_request
			// 
			this->lbl_request->AutoSize = true;
			this->lbl_request->Location = System::Drawing::Point(52, 43);
			this->lbl_request->Name = L"lbl_request";
			this->lbl_request->Size = System::Drawing::Size(65, 17);
			this->lbl_request->TabIndex = 0;
			this->lbl_request->Text = L"Request:";
			this->lbl_request->Click += gcnew System::EventHandler(this, &professor_addnotif_3::label1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(153, 40);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(223, 24);
			this->comboBox1->TabIndex = 1;
			// 
			// btn_submit
			// 
			this->btn_submit->Location = System::Drawing::Point(153, 530);
			this->btn_submit->Name = L"btn_submit";
			this->btn_submit->Size = System::Drawing::Size(121, 34);
			this->btn_submit->TabIndex = 2;
			this->btn_submit->Text = L"SUBMIT";
			this->btn_submit->UseVisualStyleBackColor = true;
			// 
			// professor_addnotif_3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->btn_submit);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->lbl_request);
			this->Name = L"professor_addnotif_3";
			this->Size = System::Drawing::Size(751, 614);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	};
}
