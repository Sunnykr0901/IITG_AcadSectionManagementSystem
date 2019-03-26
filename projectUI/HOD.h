#pragma once

namespace projectUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for HOD
	/// </summary>
	public ref class HOD : public System::Windows::Forms::Form
	{
	bool skip_textbox_changed ;
	public:
		HOD(void)
		{
			InitializeComponent();
			skip_textbox_changed = false ;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~HOD()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btn_ntf;
	protected: 
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::CheckBox^  other_receivers;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::CheckBox^  Dept;
	private: System::Windows::Forms::Label^  receivers;
	private: System::Windows::Forms::Button^  btn_send;
	private: System::Windows::Forms::Button^  btn_add_users;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Panel^  panel2;




	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::TextBox^  tb_link;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::ComboBox^  cb_course_id;

	private: System::Windows::Forms::TextBox^  tb_credit;
	private: System::Windows::Forms::TextBox^  tb_course_name;
	private: System::Windows::Forms::TextBox^  tb_course_id;
	private: System::Windows::Forms::Button^  btn_add;
	private: System::Windows::Forms::Button^  btn_edit;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label1;



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
			this->btn_ntf = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->receivers = (gcnew System::Windows::Forms::Label());
			this->btn_send = (gcnew System::Windows::Forms::Button());
			this->btn_add_users = (gcnew System::Windows::Forms::Button());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->other_receivers = (gcnew System::Windows::Forms::CheckBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->checkedListBox2 = (gcnew System::Windows::Forms::CheckedListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->Dept = (gcnew System::Windows::Forms::CheckBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->tb_link = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->cb_course_id = (gcnew System::Windows::Forms::ComboBox());
			this->tb_credit = (gcnew System::Windows::Forms::TextBox());
			this->tb_course_name = (gcnew System::Windows::Forms::TextBox());
			this->tb_course_id = (gcnew System::Windows::Forms::TextBox());
			this->btn_add = (gcnew System::Windows::Forms::Button());
			this->btn_edit = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// btn_ntf
			// 
			this->btn_ntf->Location = System::Drawing::Point(478, 12);
			this->btn_ntf->Name = L"btn_ntf";
			this->btn_ntf->Size = System::Drawing::Size(75, 23);
			this->btn_ntf->TabIndex = 0;
			this->btn_ntf->Text = L"Notifications";
			this->btn_ntf->UseVisualStyleBackColor = true;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->receivers);
			this->panel1->Controls->Add(this->btn_send);
			this->panel1->Controls->Add(this->btn_add_users);
			this->panel1->Controls->Add(this->richTextBox2);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->richTextBox1);
			this->panel1->Controls->Add(this->other_receivers);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->checkedListBox2);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->comboBox1);
			this->panel1->Controls->Add(this->Dept);
			this->panel1->Location = System::Drawing::Point(12, 27);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(454, 473);
			this->panel1->TabIndex = 1;
			// 
			// receivers
			// 
			this->receivers->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->receivers->Location = System::Drawing::Point(38, 279);
			this->receivers->Name = L"receivers";
			this->receivers->Size = System::Drawing::Size(361, 39);
			this->receivers->TabIndex = 13;
			this->receivers->Text = L"Receivers : ";
			// 
			// btn_send
			// 
			this->btn_send->Location = System::Drawing::Point(318, 441);
			this->btn_send->Name = L"btn_send";
			this->btn_send->Size = System::Drawing::Size(81, 23);
			this->btn_send->TabIndex = 12;
			this->btn_send->Text = L"Send >";
			this->btn_send->UseVisualStyleBackColor = true;
			// 
			// btn_add_users
			// 
			this->btn_add_users->Location = System::Drawing::Point(318, 246);
			this->btn_add_users->Name = L"btn_add_users";
			this->btn_add_users->Size = System::Drawing::Size(81, 23);
			this->btn_add_users->TabIndex = 11;
			this->btn_add_users->Text = L"Add Users";
			this->btn_add_users->UseVisualStyleBackColor = true;
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(41, 352);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(358, 83);
			this->richTextBox2->TabIndex = 10;
			this->richTextBox2->Text = L"";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(38, 336);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Message :";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(187, 186);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(212, 54);
			this->richTextBox1->TabIndex = 8;
			this->richTextBox1->Text = L"Enter username separated by <space>";
			// 
			// other_receivers
			// 
			this->other_receivers->AutoSize = true;
			this->other_receivers->Location = System::Drawing::Point(41, 186);
			this->other_receivers->Name = L"other_receivers";
			this->other_receivers->Size = System::Drawing::Size(103, 17);
			this->other_receivers->TabIndex = 5;
			this->other_receivers->Text = L"Other Receivers";
			this->other_receivers->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(41, 109);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(38, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Year : ";
			// 
			// checkedListBox2
			// 
			this->checkedListBox2->FormattingEnabled = true;
			this->checkedListBox2->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"1st Year", L"2nd Year", L"3rd Year", L"4th Year"});
			this->checkedListBox2->Location = System::Drawing::Point(187, 109);
			this->checkedListBox2->Name = L"checkedListBox2";
			this->checkedListBox2->Size = System::Drawing::Size(121, 64);
			this->checkedListBox2->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(38, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Programme : ";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"BTech", L"MTech", L"PhD"});
			this->comboBox1->Location = System::Drawing::Point(187, 55);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 1;
			// 
			// Dept
			// 
			this->Dept->AutoSize = true;
			this->Dept->Location = System::Drawing::Point(41, 15);
			this->Dept->Name = L"Dept";
			this->Dept->Size = System::Drawing::Size(81, 17);
			this->Dept->TabIndex = 0;
			this->Dept->Text = L"Department";
			this->Dept->UseVisualStyleBackColor = true;
			// 
			// panel2
			// 
			this->panel2->AutoScroll = true;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Location = System::Drawing::Point(477, 55);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(347, 300);
			this->panel2->TabIndex = 2;
			// 
			// panel3
			// 
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Margin = System::Windows::Forms::Padding(0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(345, 60);
			this->panel3->TabIndex = 0;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->tb_link);
			this->panel4->Controls->Add(this->label8);
			this->panel4->Controls->Add(this->cb_course_id);
			this->panel4->Controls->Add(this->tb_credit);
			this->panel4->Controls->Add(this->tb_course_name);
			this->panel4->Controls->Add(this->tb_course_id);
			this->panel4->Controls->Add(this->btn_add);
			this->panel4->Controls->Add(this->btn_edit);
			this->panel4->Controls->Add(this->label7);
			this->panel4->Controls->Add(this->label6);
			this->panel4->Controls->Add(this->label5);
			this->panel4->Location = System::Drawing::Point(859, 56);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(369, 458);
			this->panel4->TabIndex = 3;
			// 
			// tb_link
			// 
			this->tb_link->Location = System::Drawing::Point(182, 197);
			this->tb_link->Name = L"tb_link";
			this->tb_link->Size = System::Drawing::Size(148, 20);
			this->tb_link->TabIndex = 10;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(25, 197);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(63, 13);
			this->label8->TabIndex = 9;
			this->label8->Text = L"Course Link";
			// 
			// cb_course_id
			// 
			this->cb_course_id->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->cb_course_id->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->cb_course_id->FormattingEnabled = true;
			this->cb_course_id->Items->AddRange(gcnew cli::array< System::Object^  >(6) {L"CS201", L"CS202", L"CS203", L"CS204", L"CS222", 
				L"CS242"});
			this->cb_course_id->Location = System::Drawing::Point(182, 73);
			this->cb_course_id->Name = L"cb_course_id";
			this->cb_course_id->Size = System::Drawing::Size(148, 21);
			this->cb_course_id->TabIndex = 8;
			// 
			// tb_credit
			// 
			this->tb_credit->Location = System::Drawing::Point(182, 154);
			this->tb_credit->Name = L"tb_credit";
			this->tb_credit->Size = System::Drawing::Size(148, 20);
			this->tb_credit->TabIndex = 7;
			// 
			// tb_course_name
			// 
			this->tb_course_name->Location = System::Drawing::Point(182, 112);
			this->tb_course_name->Name = L"tb_course_name";
			this->tb_course_name->Size = System::Drawing::Size(148, 20);
			this->tb_course_name->TabIndex = 6;
			this->tb_course_name->TextChanged += gcnew System::EventHandler(this, &HOD::tb_course_name_TextChanged);
			// 
			// tb_course_id
			// 
			this->tb_course_id->Location = System::Drawing::Point(182, 73);
			this->tb_course_id->Name = L"tb_course_id";
			this->tb_course_id->Size = System::Drawing::Size(148, 20);
			this->tb_course_id->TabIndex = 5;
			this->tb_course_id->Visible = false;
			// 
			// btn_add
			// 
			this->btn_add->Location = System::Drawing::Point(220, 14);
			this->btn_add->Name = L"btn_add";
			this->btn_add->Size = System::Drawing::Size(110, 23);
			this->btn_add->TabIndex = 4;
			this->btn_add->Text = L"Add";
			this->btn_add->UseVisualStyleBackColor = true;
			// 
			// btn_edit
			// 
			this->btn_edit->Location = System::Drawing::Point(39, 14);
			this->btn_edit->Name = L"btn_edit";
			this->btn_edit->Size = System::Drawing::Size(97, 23);
			this->btn_edit->TabIndex = 3;
			this->btn_edit->Text = L"Edit";
			this->btn_edit->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(25, 115);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(71, 13);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Course Name";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(25, 157);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(39, 13);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Credits";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(25, 73);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(54, 13);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Course ID";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(856, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(117, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Next Semester Courses";
			// 
			// HOD
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1243, 526);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->btn_ntf);
			this->Name = L"HOD";
			this->Text = L"HOD";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void tb_course_name_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(skip_textbox_changed){
				 skip_textbox_changed = false ;
				 return ;
			 }
			 if(cb_course_id->SelectedIndex == -1){
				 skip_textbox_changed = true ;
				 tb_course_name->Text = "" ;
				 MessageBox::Show("Select Course ID first!") ;

				 return ;
			 }



		 }
};
}
