#include <string.h>
#include "global_variables.h"
#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace projectUI {

	/// <summary>
	/// Summary for StudentCourses
	/// </summary>
	public ref class StudentCourses : public System::Windows::Forms::UserControl
	{
	public:
		String ^usrnm;
	public: 

	public:
		StudentCourses(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		StudentCourses(String ^text)
		{
			InitializeComponent();
			usrnm=text;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StudentCourses()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected: 
	private: System::Windows::Forms::Panel^  panel2;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(StudentCourses::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Location = System::Drawing::Point(4, 4);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(21, 21);
			this->panel1->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->Location = System::Drawing::Point(4, 32);
			this->panel2->Margin = System::Windows::Forms::Padding(4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(21, 22);
			this->panel2->TabIndex = 1;
			// 
			// StudentCourses
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"StudentCourses";
			this->Size = System::Drawing::Size(797, 431);
			this->Load += gcnew System::EventHandler(this, &StudentCourses::StudentCourses_Load);
			this->ResumeLayout(false);

		}
#pragma endregion


	private: System::Void StudentCourses_Load(System::Object^  sender, System::EventArgs^  e) {

				 year_under_query = present_year;
				 semester_under_query = present_sem;

				 generate_prev_btn();
				 generateCourseButtons();
			 }


			 void generateCourseButtons(){

				 System::Windows::Forms::Label ^ label1 = gcnew System::Windows::Forms::Label();
				 label1->AutoSize = true;
				 label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 label1->ForeColor = System::Drawing::Color::OrangeRed;
				 label1->Location = System::Drawing::Point(190, 21);
				 label1->Name = L"label1";
				 label1->Size = System::Drawing::Size(65, 32);
				 label1->TabIndex = 0;
				 label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

				 this->Controls->Add(label1);	

				 course_btn_index = 1;

				 OleDb::OleDbConnection ^con;	 
				 try
				 {				
					 String^ connString="Provider=Microsoft.ACE.OLEDB.12.0;Data Source=AcadManager.accdb";

					 con=gcnew OleDb::OleDbConnection(connString);
					 con->Open();

					 String ^ semesterName;
					 if (semester_under_query == 0)
						 semesterName = "Spring";
					 else if (semester_under_query == 1)
						 semesterName = "Fall";

					 String ^ session = Convert::ToString(year_under_query)+"-"+Convert::ToString(Convert::ToInt32(year_under_query)-1999);
					 String ^ aString = "Select * from StudentCourses where [Username] ='"+usrnm+"' AND [Session] = '"+session+"' AND [Semester] = '"+semesterName+"'";

					 label1->Text = session+",  "+semesterName+" Semester";

					 OleDb::OleDbCommand ^ cmd = gcnew OleDb::OleDbCommand(aString, con);
					 OleDb::OleDbDataReader ^ readerData = cmd->ExecuteReader();

					 while(readerData->Read() == true){
						 String ^ course_grade = "";
						 String ^ course_id = readerData->GetString(1);	
						 if(!readerData->IsDBNull(4))
							 course_grade = readerData->GetString(4);	

						 course_btn_creator(course_btn_index, course_id, course_grade, con);

						 course_btn_index++;

					 }
					 readerData->Close();

					 con->Close();
				 }
				 catch(Exception ^ ex)
				 {
					 con->Close();
					 MessageBox::Show(ex->Message);
				 }


			 }


			 void generate_prev_btn(){

				 System::Windows::Forms::Button ^ prev_btn = gcnew System::Windows::Forms::Button();
				 System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(StudentCourses::typeid));

				 // 
				 // prev_btn
				 // 
				 prev_btn->BackColor = System::Drawing::SystemColors::Control;
				 prev_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel1.BackgroundImage")));
				 prev_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
				 prev_btn->FlatAppearance->BorderSize = 0;
				 prev_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				 prev_btn->Location = System::Drawing::Point(78,53);
				 prev_btn->Name = L"prev_btn";
				 prev_btn->Size = System::Drawing::Size(40, 40);
				 prev_btn->TabIndex = 0;
				 prev_btn->UseVisualStyleBackColor = false;
				 prev_btn->Click += gcnew System::EventHandler(this, &StudentCourses::prev_btn_Click);

				 this->Controls->Add(prev_btn);



			 }
			 void generate_next_btn(){
				 System::Windows::Forms::Button ^ next_btn = gcnew System::Windows::Forms::Button();
				 System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(StudentCourses::typeid));

				 // 
				 // next_btn
				 // 
				 next_btn->BackColor = System::Drawing::SystemColors::Control;
				 next_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel2.BackgroundImage")));
				 next_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
				 next_btn->FlatAppearance->BorderSize = 0;
				 next_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				 next_btn->Location = System::Drawing::Point(557,53);
				 next_btn->Name = L"next_btn";
				 next_btn->Size = System::Drawing::Size(40, 40);
				 next_btn->TabIndex = 0;
				 next_btn->UseVisualStyleBackColor = false;
				 next_btn->Click += gcnew System::EventHandler(this, &StudentCourses::next_btn_Click);

				 this->Controls->Add(next_btn);

				 //btn_course->Click += gcnew System::EventHandler(this, &User_Control_View_Election::btn_course_Click);

			 }


			 void course_btn_creator(int course_btn_index, String ^ course_id, String ^ course_grade, OleDb::OleDbConnection ^con)
			 {
				 System::Windows::Forms::Button ^ btn_course = gcnew System::Windows::Forms::Button();
				 //////////////////////////////////////////////////////////////////////////////////////
				 String ^ courseName;

				 String ^ bString = "Select * from CourseList where [CourseID] ='"+course_id+"'";
				 OleDb::OleDbCommand ^ cmd1 = gcnew OleDb::OleDbCommand(bString, con);
				 OleDb::OleDbDataReader ^ reader = cmd1->ExecuteReader();

				 while(reader->Read() == true){
					 courseName = reader->GetString(1);	
				 }
				 reader->Close();

				 //////////////////////////////////////////////////////////////////////////////////////

				 btn_course->Name = course_id;
				 btn_course->Text = "   "+course_grade+"  |           "+courseName+"  :  "+course_id;

				 btn_course->FlatAppearance->BorderColor = System::Drawing::Color::Teal;
				 btn_course->FlatAppearance->BorderSize = 2;
				 btn_course->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
				 btn_course->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				 btn_course->ForeColor = System::Drawing::Color::Black;
				 btn_course->Size = System::Drawing::Size(350, 33);
				 btn_course->UseVisualStyleBackColor = true;



				 x = 150;
				 y = 50 + 31*(course_btn_index-1);
				 btn_course->Location = System::Drawing::Point(x, y);

				 this->Controls->Add(btn_course);

				 btn_course->Click += gcnew System::EventHandler(this, &StudentCourses::btn_course_Click);

			 }

	private: System::Void btn_course_Click(System::Object ^  sender, System::EventArgs^  e) {
				 System::Windows::Forms::Button ^ temp_btn = gcnew System::Windows::Forms::Button();
				 temp_btn = dynamic_cast<System::Windows::Forms::Button ^>(sender);
				 String ^ name = temp_btn->Name;

				 generate_drop_btn();
				 generate_adjust_btn();

			 }

			 void generate_drop_btn(){
				 System::Windows::Forms::Button ^ drop_btn = gcnew System::Windows::Forms::Button();
				 drop_btn->Name = "drop_btn";
				 drop_btn->Text = "DROP";
				 drop_btn->BackColor = System::Drawing::Color::Tomato;
				 drop_btn->FlatAppearance->BorderSize = 0;
				 drop_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				 drop_btn->ForeColor = System::Drawing::Color::White;
				 drop_btn->Size = System::Drawing::Size(155, 40);
				 drop_btn->UseVisualStyleBackColor = true;

				 x = 150;
				 y = 70 + 21*(course_btn_index-1);
				 drop_btn->Location = System::Drawing::Point(x, y);

				 this->Controls->Add(drop_btn);

				 drop_btn->Click += gcnew System::EventHandler(this, &StudentCourses::drop_btn_Click);
			 }
			 void generate_adjust_btn(){
				 System::Windows::Forms::Button ^ adjust_btn = gcnew System::Windows::Forms::Button();
				 adjust_btn->Name = "adjust_btn";
				 adjust_btn->Text = "ADJUST";
				 adjust_btn->BackColor = System::Drawing::Color::Tomato;
				 adjust_btn->FlatAppearance->BorderSize = 0;
				 adjust_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				 adjust_btn->ForeColor = System::Drawing::Color::White;
				 adjust_btn->Size = System::Drawing::Size(155, 40);
				 adjust_btn->UseVisualStyleBackColor = true;

				 x = 340;
				 y = 70 + 21*(course_btn_index-1);
				 adjust_btn->Location = System::Drawing::Point(x, y);

				 this->Controls->Add(adjust_btn);

				 adjust_btn->Click += gcnew System::EventHandler(this, &StudentCourses::adjust_btn_Click);
			 }
	private: System::Void drop_btn_Click(System::Object^  sender, System::EventArgs^  e) {
				 System::Windows::Forms::Label^  questionLbl = gcnew System::Windows::Forms::Label();

				 questionLbl->AutoSize = true;
				 questionLbl->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 questionLbl->ForeColor = System::Drawing::Color::OrangeRed;
				 questionLbl->Location = System::Drawing::Point(150, y);
				 questionLbl->Name = L"questionLbl";
				 questionLbl->Size = System::Drawing::Size(225, 17);
				 questionLbl->TabIndex = 2;
				 questionLbl->Text = L"Why do you want to drop this Course\?";

				 this->Controls->Add(questionLbl);	
			 }

	private: System::Void adjust_btn_Click(System::Object^  sender, System::EventArgs^  e) {


			 }
			 void destroyer(){
				 this->Controls->Clear();
			 }


	private: System::Void prev_btn_Click(System::Object^  sender, System::EventArgs^  e) {

				 destroyer();
				 generate_next_btn();
				 if (semester_under_query == 0)
				 {
					 year_under_query--;
					 semester_under_query = 1;
				 }
				 else if (semester_under_query == 1)
					 semester_under_query = 0;					

				 generateCourseButtons();

				 if(year_under_query >= 2016)
					 generate_prev_btn();

			 }

	private: System::Void next_btn_Click(System::Object^  sender, System::EventArgs^  e) {
				 destroyer();
				 generate_prev_btn();
				 if (semester_under_query == 1)
				 {
					 year_under_query++;
					 semester_under_query = 0;
				 }
				 else if (semester_under_query == 0)
					 semester_under_query = 1;					

				 generateCourseButtons();

				 if(year_under_query <= 2018)
					 generate_next_btn();
			 }
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void dropLbl_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	};
}
