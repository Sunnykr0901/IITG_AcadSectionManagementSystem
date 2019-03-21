#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace projectUI {

	/// <summary>
	/// Summary for professor_addnotif_2
	/// </summary>
	public ref class professor_addnotif_2 : public System::Windows::Forms::UserControl
	{
	public:
		professor_addnotif_2(void)
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
		~professor_addnotif_2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lbl_dept;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox1;
	private: System::Windows::Forms::Label^  lbl_session;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  lbl_sem;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  lbl_courses;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::Label^  lbl_prog;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::Label^  lbl_otherec;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  lbl_info;
	private: System::Windows::Forms::Label^  lbl_ntf;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  btn_post;
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
			this->lbl_dept = (gcnew System::Windows::Forms::Label());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->lbl_session = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->lbl_sem = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->lbl_courses = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->lbl_prog = (gcnew System::Windows::Forms::Label());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->lbl_otherec = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->lbl_info = (gcnew System::Windows::Forms::Label());
			this->lbl_ntf = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->btn_post = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lbl_dept
			// 
			this->lbl_dept->AutoSize = true;
			this->lbl_dept->Location = System::Drawing::Point(48, 24);
			this->lbl_dept->Name = L"lbl_dept";
			this->lbl_dept->Size = System::Drawing::Size(86, 17);
			this->lbl_dept->TabIndex = 0;
			this->lbl_dept->Text = L"Department:";
			this->lbl_dept->Click += gcnew System::EventHandler(this, &professor_addnotif_2::label1_Click);
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Location = System::Drawing::Point(255, 24);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(242, 89);
			this->checkedListBox1->TabIndex = 1;
			// 
			// lbl_session
			// 
			this->lbl_session->AutoSize = true;
			this->lbl_session->Location = System::Drawing::Point(48, 134);
			this->lbl_session->Name = L"lbl_session";
			this->lbl_session->Size = System::Drawing::Size(62, 17);
			this->lbl_session->TabIndex = 2;
			this->lbl_session->Text = L"Session:";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(255, 131);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(242, 24);
			this->comboBox1->TabIndex = 3;
			// 
			// lbl_sem
			// 
			this->lbl_sem->AutoSize = true;
			this->lbl_sem->Location = System::Drawing::Point(48, 178);
			this->lbl_sem->Name = L"lbl_sem";
			this->lbl_sem->Size = System::Drawing::Size(72, 17);
			this->lbl_sem->TabIndex = 4;
			this->lbl_sem->Text = L"Semester:";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(255, 175);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(242, 24);
			this->comboBox2->TabIndex = 5;
			// 
			// lbl_courses
			// 
			this->lbl_courses->AutoSize = true;
			this->lbl_courses->Location = System::Drawing::Point(48, 223);
			this->lbl_courses->Name = L"lbl_courses";
			this->lbl_courses->Size = System::Drawing::Size(64, 17);
			this->lbl_courses->TabIndex = 6;
			this->lbl_courses->Text = L"Courses:";
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(255, 220);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(242, 24);
			this->comboBox3->TabIndex = 7;
			// 
			// lbl_prog
			// 
			this->lbl_prog->AutoSize = true;
			this->lbl_prog->Location = System::Drawing::Point(48, 271);
			this->lbl_prog->Name = L"lbl_prog";
			this->lbl_prog->Size = System::Drawing::Size(85, 17);
			this->lbl_prog->TabIndex = 8;
			this->lbl_prog->Text = L"Programme:";
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(255, 268);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(242, 24);
			this->comboBox4->TabIndex = 9;
			// 
			// lbl_otherec
			// 
			this->lbl_otherec->AutoSize = true;
			this->lbl_otherec->Location = System::Drawing::Point(48, 321);
			this->lbl_otherec->Name = L"lbl_otherec";
			this->lbl_otherec->Size = System::Drawing::Size(154, 17);
			this->lbl_otherec->TabIndex = 10;
			this->lbl_otherec->Text = L"Other receivers(if any):";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(255, 318);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(242, 22);
			this->textBox1->TabIndex = 11;
			// 
			// lbl_info
			// 
			this->lbl_info->AutoSize = true;
			this->lbl_info->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl_info->Location = System::Drawing::Point(252, 344);
			this->lbl_info->Name = L"lbl_info";
			this->lbl_info->Size = System::Drawing::Size(129, 13);
			this->lbl_info->TabIndex = 12;
			this->lbl_info->Text = L"*seperated by semi-colons";
			// 
			// lbl_ntf
			// 
			this->lbl_ntf->AutoSize = true;
			this->lbl_ntf->Location = System::Drawing::Point(43, 396);
			this->lbl_ntf->Name = L"lbl_ntf";
			this->lbl_ntf->Size = System::Drawing::Size(69, 17);
			this->lbl_ntf->TabIndex = 13;
			this->lbl_ntf->Text = L"Message:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(255, 393);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(329, 109);
			this->textBox2->TabIndex = 14;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &professor_addnotif_2::textBox2_TextChanged);
			// 
			// btn_post
			// 
			this->btn_post->Location = System::Drawing::Point(255, 539);
			this->btn_post->Name = L"btn_post";
			this->btn_post->Size = System::Drawing::Size(111, 38);
			this->btn_post->TabIndex = 15;
			this->btn_post->Text = L"POST";
			this->btn_post->UseVisualStyleBackColor = true;
			// 
			// professor_addnotif_2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->btn_post);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->lbl_ntf);
			this->Controls->Add(this->lbl_info);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->lbl_otherec);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->lbl_prog);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->lbl_courses);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->lbl_sem);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->lbl_session);
			this->Controls->Add(this->checkedListBox1);
			this->Controls->Add(this->lbl_dept);
			this->Name = L"professor_addnotif_2";
			this->Size = System::Drawing::Size(753, 614);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
};
}
