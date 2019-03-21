#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace projectUI {

	/// <summary>
	/// Summary for professor_addnotif_1
	/// </summary>
	public ref class professor_addnotif_1 : public System::Windows::Forms::UserControl
	{
	public:
		professor_addnotif_1(void)
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
		~professor_addnotif_1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lbl_type;
	protected: 
	private: System::Windows::Forms::RadioButton^  rb_message;
	private: System::Windows::Forms::RadioButton^  rb_request;

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
			this->lbl_type = (gcnew System::Windows::Forms::Label());
			this->rb_message = (gcnew System::Windows::Forms::RadioButton());
			this->rb_request = (gcnew System::Windows::Forms::RadioButton());
			this->SuspendLayout();
			// 
			// lbl_type
			// 
			this->lbl_type->AutoSize = true;
			this->lbl_type->Location = System::Drawing::Point(48, 38);
			this->lbl_type->Name = L"lbl_type";
			this->lbl_type->Size = System::Drawing::Size(87, 17);
			this->lbl_type->TabIndex = 0;
			this->lbl_type->Text = L"Select Type:";
			// 
			// rb_message
			// 
			this->rb_message->AutoSize = true;
			this->rb_message->Location = System::Drawing::Point(154, 36);
			this->rb_message->Name = L"rb_message";
			this->rb_message->Size = System::Drawing::Size(86, 21);
			this->rb_message->TabIndex = 1;
			this->rb_message->TabStop = true;
			this->rb_message->Text = L"Message";
			this->rb_message->UseVisualStyleBackColor = true;
			// 
			// rb_request
			// 
			this->rb_request->AutoSize = true;
			this->rb_request->Location = System::Drawing::Point(282, 34);
			this->rb_request->Name = L"rb_request";
			this->rb_request->Size = System::Drawing::Size(82, 21);
			this->rb_request->TabIndex = 2;
			this->rb_request->TabStop = true;
			this->rb_request->Text = L"Request";
			this->rb_request->UseVisualStyleBackColor = true;
			// 
			// professor_addnotif_1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->rb_request);
			this->Controls->Add(this->rb_message);
			this->Controls->Add(this->lbl_type);
			this->Name = L"professor_addnotif_1";
			this->Size = System::Drawing::Size(753, 614);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
