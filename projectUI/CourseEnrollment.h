#pragma once

namespace projectUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CourseEnrollment
	/// </summary>
	public ref class CourseEnrollment : public System::Windows::Forms::Form
	{
	public:
		CourseEnrollment(void)
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
		~CourseEnrollment()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel_main;
	private: System::Windows::Forms::Label^  label_credit;
	private: System::Windows::Forms::Label^  label_course_no;
	private: System::Windows::Forms::Label^  label_course_name;
	private: System::Windows::Forms::Panel^  panel_user_details;
	private: System::Windows::Forms::Label^  label_dept;

	private: System::Windows::Forms::Label^  label_prog;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label_roll;

	private: System::Windows::Forms::Label^  label_name;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btn_enroll;
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
			this->panel_main = (gcnew System::Windows::Forms::Panel());
			this->label_credit = (gcnew System::Windows::Forms::Label());
			this->label_course_no = (gcnew System::Windows::Forms::Label());
			this->label_course_name = (gcnew System::Windows::Forms::Label());
			this->panel_user_details = (gcnew System::Windows::Forms::Panel());
			this->label_dept = (gcnew System::Windows::Forms::Label());
			this->label_prog = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label_roll = (gcnew System::Windows::Forms::Label());
			this->label_name = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_enroll = (gcnew System::Windows::Forms::Button());
			this->panel_main->SuspendLayout();
			this->panel_user_details->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel_main
			// 
			this->panel_main->Controls->Add(this->label_credit);
			this->panel_main->Controls->Add(this->label_course_no);
			this->panel_main->Controls->Add(this->label_course_name);
			this->panel_main->Location = System::Drawing::Point(82, 131);
			this->panel_main->Name = L"panel_main";
			this->panel_main->Size = System::Drawing::Size(657, 308);
			this->panel_main->TabIndex = 0;
			// 
			// label_credit
			// 
			this->label_credit->AutoSize = true;
			this->label_credit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_credit->Location = System::Drawing::Point(509, 26);
			this->label_credit->Name = L"label_credit";
			this->label_credit->Size = System::Drawing::Size(70, 16);
			this->label_credit->TabIndex = 2;
			this->label_credit->Text = L"CREDIT";
			// 
			// label_course_no
			// 
			this->label_course_no->AutoSize = true;
			this->label_course_no->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_course_no->Location = System::Drawing::Point(81, 26);
			this->label_course_no->Name = L"label_course_no";
			this->label_course_no->Size = System::Drawing::Size(107, 16);
			this->label_course_no->TabIndex = 1;
			this->label_course_no->Text = L"COURSE NO";
			// 
			// label_course_name
			// 
			this->label_course_name->AutoSize = true;
			this->label_course_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label_course_name->Location = System::Drawing::Point(273, 26);
			this->label_course_name->Name = L"label_course_name";
			this->label_course_name->Size = System::Drawing::Size(130, 16);
			this->label_course_name->TabIndex = 0;
			this->label_course_name->Text = L"COURSE NAME";
			// 
			// panel_user_details
			// 
			this->panel_user_details->Controls->Add(this->label_dept);
			this->panel_user_details->Controls->Add(this->label_prog);
			this->panel_user_details->Controls->Add(this->label6);
			this->panel_user_details->Controls->Add(this->label5);
			this->panel_user_details->Controls->Add(this->label_roll);
			this->panel_user_details->Controls->Add(this->label_name);
			this->panel_user_details->Controls->Add(this->label2);
			this->panel_user_details->Controls->Add(this->label1);
			this->panel_user_details->Location = System::Drawing::Point(82, 12);
			this->panel_user_details->Name = L"panel_user_details";
			this->panel_user_details->Size = System::Drawing::Size(657, 100);
			this->panel_user_details->TabIndex = 1;
			// 
			// label_dept
			// 
			this->label_dept->AutoSize = true;
			this->label_dept->Location = System::Drawing::Point(540, 64);
			this->label_dept->Name = L"label_dept";
			this->label_dept->Size = System::Drawing::Size(22, 13);
			this->label_dept->TabIndex = 7;
			this->label_dept->Text = L"-----";
			// 
			// label_prog
			// 
			this->label_prog->AutoSize = true;
			this->label_prog->Location = System::Drawing::Point(540, 20);
			this->label_prog->Name = L"label_prog";
			this->label_prog->Size = System::Drawing::Size(22, 13);
			this->label_prog->TabIndex = 6;
			this->label_prog->Text = L"-----";
			//this->label_prog->Click += gcnew System::EventHandler(this, &CourseEnrollment::label_prog_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(399, 64);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(62, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Department";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(399, 20);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(60, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Programme";
			// 
			// label_roll
			// 
			this->label_roll->AutoSize = true;
			this->label_roll->Location = System::Drawing::Point(206, 64);
			this->label_roll->Name = L"label_roll";
			this->label_roll->Size = System::Drawing::Size(22, 13);
			this->label_roll->TabIndex = 3;
			this->label_roll->Text = L"-----";
			// 
			// label_name
			// 
			this->label_name->AutoSize = true;
			this->label_name->Location = System::Drawing::Point(206, 20);
			this->label_name->Name = L"label_name";
			this->label_name->Size = System::Drawing::Size(22, 13);
			this->label_name->TabIndex = 2;
			this->label_name->Text = L"-----";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(72, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(54, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"ROLL NO";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(72, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(38, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"NAME";
			// 
			// btn_enroll
			// 
			this->btn_enroll->Location = System::Drawing::Point(625, 456);
			this->btn_enroll->Name = L"btn_enroll";
			this->btn_enroll->Size = System::Drawing::Size(114, 38);
			this->btn_enroll->TabIndex = 2;
			this->btn_enroll->Text = L"ENROLL";
			this->btn_enroll->UseVisualStyleBackColor = true;
			// 
			// CourseEnrollment
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(830, 520);
			this->Controls->Add(this->btn_enroll);
			this->Controls->Add(this->panel_user_details);
			this->Controls->Add(this->panel_main);
			this->Name = L"CourseEnrollment";
			this->Text = L"CourseEnrollment";
			this->Load += gcnew System::EventHandler(this, &CourseEnrollment::CourseEnrollment_Load);
			this->panel_main->ResumeLayout(false);
			this->panel_main->PerformLayout();
			this->panel_user_details->ResumeLayout(false);
			this->panel_user_details->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void CourseEnrollment_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
};
}
