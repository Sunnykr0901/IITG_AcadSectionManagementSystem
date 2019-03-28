#pragma once
#using <System.dll>
#using <System.data.dll>

#include "Homepage.h"
#include "StudentProfile.h"
#include "StudentCourses.h"
#include "Search.h"
//#include "professor_currentCourses.h"
namespace projectUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for StudentForm
	/// </summary>
	public ref class StudentForm : public System::Windows::Forms::Form
	{
	public:
		String ^usrnm;
	private: System::Windows::Forms::Button^  helpBtn;
	public: 
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton3;
		    Form ^ previous;
	public:
		StudentForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		StudentForm(String ^text, Form ^a)
		{
			InitializeComponent();
			usrnm=text;
			previous = a;
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StudentForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  profileBtn;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  logoutBtn;
	private: System::Windows::Forms::Button^  searchBtn;
	private: System::Windows::Forms::Button^  MyCoursesBtn;

	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Button^  TTBtn;

	private: System::Windows::Forms::Button^  noticificationBtn;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Panel^  panel1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(StudentForm::typeid));
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->profileBtn = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->logoutBtn = (gcnew System::Windows::Forms::Button());
			this->searchBtn = (gcnew System::Windows::Forms::Button());
			this->MyCoursesBtn = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->helpBtn = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->TTBtn = (gcnew System::Windows::Forms::Button());
			this->noticificationBtn = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Teal;
			this->label5->Location = System::Drawing::Point(119, 76);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(174, 25);
			this->label5->TabIndex = 26;
			this->label5->Text = L"StudentS Portal";
			// 
			// profileBtn
			// 
			this->profileBtn->BackColor = System::Drawing::Color::Teal;
			this->profileBtn->FlatAppearance->BorderSize = 0;
			this->profileBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->profileBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->profileBtn->ForeColor = System::Drawing::Color::White;
			this->profileBtn->Location = System::Drawing::Point(11, 0);
			this->profileBtn->Margin = System::Windows::Forms::Padding(0);
			this->profileBtn->Name = L"profileBtn";
			this->profileBtn->Size = System::Drawing::Size(80, 47);
			this->profileBtn->TabIndex = 11;
			this->profileBtn->Text = L"PROFILE";
			this->profileBtn->UseVisualStyleBackColor = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Teal;
			this->label6->Location = System::Drawing::Point(117, 35);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(399, 41);
			this->label6->TabIndex = 25;
			this->label6->Text = L"Academic System IITG";
			// 
			// logoutBtn
			// 
			this->logoutBtn->BackColor = System::Drawing::Color::Tomato;
			this->logoutBtn->FlatAppearance->BorderSize = 0;
			this->logoutBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->logoutBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->logoutBtn->ForeColor = System::Drawing::Color::White;
			this->logoutBtn->Location = System::Drawing::Point(876, -1);
			this->logoutBtn->Margin = System::Windows::Forms::Padding(0);
			this->logoutBtn->Name = L"logoutBtn";
			this->logoutBtn->Size = System::Drawing::Size(80, 48);
			this->logoutBtn->TabIndex = 10;
			this->logoutBtn->Text = L"LOGOUT";
			this->logoutBtn->UseVisualStyleBackColor = false;
			this->logoutBtn->Click += gcnew System::EventHandler(this, &StudentForm::logoutBtn_Click);
			// 
			// searchBtn
			// 
			this->searchBtn->BackColor = System::Drawing::Color::Teal;
			this->searchBtn->FlatAppearance->BorderSize = 0;
			this->searchBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->searchBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->searchBtn->ForeColor = System::Drawing::Color::White;
			this->searchBtn->Location = System::Drawing::Point(493, 0);
			this->searchBtn->Margin = System::Windows::Forms::Padding(0);
			this->searchBtn->Name = L"searchBtn";
			this->searchBtn->Size = System::Drawing::Size(80, 48);
			this->searchBtn->TabIndex = 9;
			this->searchBtn->Text = L"SEARCH";
			this->searchBtn->UseVisualStyleBackColor = false;
			this->searchBtn->Click += gcnew System::EventHandler(this, &StudentForm::searchBtn_Click);
			// 
			// MyCoursesBtn
			// 
			this->MyCoursesBtn->BackColor = System::Drawing::Color::Teal;
			this->MyCoursesBtn->FlatAppearance->BorderSize = 0;
			this->MyCoursesBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->MyCoursesBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->MyCoursesBtn->ForeColor = System::Drawing::Color::White;
			this->MyCoursesBtn->Location = System::Drawing::Point(105, 1);
			this->MyCoursesBtn->Margin = System::Windows::Forms::Padding(0);
			this->MyCoursesBtn->Name = L"MyCoursesBtn";
			this->MyCoursesBtn->Size = System::Drawing::Size(132, 47);
			this->MyCoursesBtn->TabIndex = 5;
			this->MyCoursesBtn->Text = L"MY COURSES";
			this->MyCoursesBtn->UseVisualStyleBackColor = false;
			this->MyCoursesBtn->Click += gcnew System::EventHandler(this, &StudentForm::MyCoursesBtn_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Teal;
			this->panel2->Controls->Add(this->comboBox1);
			this->panel2->Controls->Add(this->helpBtn);
			this->panel2->Controls->Add(this->profileBtn);
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Controls->Add(this->logoutBtn);
			this->panel2->Controls->Add(this->searchBtn);
			this->panel2->Controls->Add(this->MyCoursesBtn);
			this->panel2->Controls->Add(this->TTBtn);
			this->panel2->Controls->Add(this->noticificationBtn);
			this->panel2->Location = System::Drawing::Point(0, 131);
			this->panel2->Margin = System::Windows::Forms::Padding(0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(969, 47);
			this->panel2->TabIndex = 24;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(12) {L"----(Select)----", L"CSE", L"MNC", L"ECE", L"EEE", 
				L"BT", L"CST", L"CE", L"EP", L"ME", L"CL", L"DoD"});
			this->comboBox1->Location = System::Drawing::Point(576, 16);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(75, 21);
			this->comboBox1->TabIndex = 30;
			this->comboBox1->Visible = false;
			// 
			// helpBtn
			// 
			this->helpBtn->BackColor = System::Drawing::Color::SpringGreen;
			this->helpBtn->FlatAppearance->BorderSize = 0;
			this->helpBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Teal;
			this->helpBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Teal;
			this->helpBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->helpBtn->Font = (gcnew System::Drawing::Font(L"Chiller", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->helpBtn->ForeColor = System::Drawing::Color::Gold;
			this->helpBtn->Location = System::Drawing::Point(842, 9);
			this->helpBtn->Margin = System::Windows::Forms::Padding(0);
			this->helpBtn->Name = L"helpBtn";
			this->helpBtn->Size = System::Drawing::Size(19, 19);
			this->helpBtn->TabIndex = 29;
			this->helpBtn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->helpBtn->UseVisualStyleBackColor = false;
			this->helpBtn->Visible = false;
			this->helpBtn->Click += gcnew System::EventHandler(this, &StudentForm::helpBtn_Click);
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(687, 9);
			this->textBox1->Margin = System::Windows::Forms::Padding(0);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(155, 19);
			this->textBox1->TabIndex = 28;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->Visible = false;
			// 
			// TTBtn
			// 
			this->TTBtn->BackColor = System::Drawing::Color::Teal;
			this->TTBtn->FlatAppearance->BorderSize = 0;
			this->TTBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->TTBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->TTBtn->ForeColor = System::Drawing::Color::White;
			this->TTBtn->Location = System::Drawing::Point(237, 1);
			this->TTBtn->Margin = System::Windows::Forms::Padding(0);
			this->TTBtn->Name = L"TTBtn";
			this->TTBtn->Size = System::Drawing::Size(104, 47);
			this->TTBtn->TabIndex = 1;
			this->TTBtn->Text = L"TIME TABLE";
			this->TTBtn->UseVisualStyleBackColor = false;
			// 
			// noticificationBtn
			// 
			this->noticificationBtn->BackColor = System::Drawing::Color::Teal;
			this->noticificationBtn->FlatAppearance->BorderSize = 0;
			this->noticificationBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->noticificationBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->noticificationBtn->ForeColor = System::Drawing::Color::White;
			this->noticificationBtn->Location = System::Drawing::Point(344, -1);
			this->noticificationBtn->Margin = System::Windows::Forms::Padding(0);
			this->noticificationBtn->Name = L"noticificationBtn";
			this->noticificationBtn->Size = System::Drawing::Size(149, 49);
			this->noticificationBtn->TabIndex = 0;
			this->noticificationBtn->Text = L"NOTICIFICATIONS";
			this->noticificationBtn->UseVisualStyleBackColor = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox2->Location = System::Drawing::Point(11, 17);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(100, 100);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 23;
			this->pictureBox2->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Control;
			this->panel1->Location = System::Drawing::Point(0, 179);
			this->panel1->Margin = System::Windows::Forms::Padding(0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(956, 481);
			this->panel1->TabIndex = 27;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Teal;
			this->panel3->Controls->Add(this->radioButton2);
			this->panel3->Controls->Add(this->radioButton1);
			this->panel3->Controls->Add(this->radioButton3);
			this->panel3->Location = System::Drawing::Point(576, 178);
			this->panel3->Margin = System::Windows::Forms::Padding(0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(96, 83);
			this->panel3->TabIndex = 31;
			this->panel3->Visible = false;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->ForeColor = System::Drawing::Color::White;
			this->radioButton2->Location = System::Drawing::Point(8, 33);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(59, 17);
			this->radioButton2->TabIndex = 16;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Faculty";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->ForeColor = System::Drawing::Color::White;
			this->radioButton1->Location = System::Drawing::Point(8, 10);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(62, 17);
			this->radioButton1->TabIndex = 15;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Student";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->ForeColor = System::Drawing::Color::White;
			this->radioButton3->Location = System::Drawing::Point(8, 57);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(79, 17);
			this->radioButton3->TabIndex = 17;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Admin Staff";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// StudentForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(965, 661);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->panel1);
			this->Name = L"StudentForm";
			this->Text = L"StudentForm";
			this->Load += gcnew System::EventHandler(this, &StudentForm::StudentForm_Load);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void StudentForm_Load(System::Object^  sender, System::EventArgs^  e) {
		    panel1->Controls->Clear();
		    Panel ^profile=panel1;
		    StudentProfile ^sp = gcnew StudentProfile(usrnm,profile);
		    panel1->Controls->Add(sp);
	    }

private: System::Void helpBtn_Click(System::Object^  sender, System::EventArgs^  e) {

		    //checking if department selected for search
		    if(comboBox1->SelectedIndex == 0){
			    MessageBox::Show("Please Select Department from Dropdown Menu!");
		    }
		    else{
			    String ^table = "Student";
			    if (radioButton2->Checked) table="Professor";
			    if (radioButton3->Checked) table="Staff";

			    panel1->Controls->Clear();
			    UserControlSearch ^s = gcnew UserControlSearch(textBox1->Text,comboBox1->Text,table);
			    textBox1->Visible=false;
			    helpBtn->Visible=false;
			    panel3->Visible=false;
			    comboBox1->Visible=false;
			    panel1->Controls->Add(s);
		    }


	    };

private: System::Void logoutBtn_Click(System::Object^  sender, System::EventArgs^  e) {
		    previous->Show();
		    StudentForm::Close();
	    }
private: System::Void MyCoursesBtn_Click(System::Object^  sender, System::EventArgs^  e) {
		    panel1->Controls->Clear();
		    StudentCourses ^sc = gcnew StudentCourses(usrnm);
		    panel1->Controls->Add(sc);
	    }
private: System::Void searchBtn_Click(System::Object^  sender, System::EventArgs^  e) {
		    textBox1->Visible=true;
		    helpBtn->Visible=true;
		    comboBox1->Visible=true;
		    panel3->Visible=true;
		    this->comboBox1->SelectedIndex = 0;
		    this->radioButton1->Checked=true;
	    }
};
}
