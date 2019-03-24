#pragma once
#using <System.dll>
#using <System.data.dll>

#include "StudentProfile.h"
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

	public:
		StudentForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		StudentForm(String ^text)
		{
			InitializeComponent();
			usrnm=text;
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
	private: System::Windows::Forms::Button^  button1;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->logoutBtn = (gcnew System::Windows::Forms::Button());
			this->searchBtn = (gcnew System::Windows::Forms::Button());
			this->MyCoursesBtn = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->TTBtn = (gcnew System::Windows::Forms::Button());
			this->noticificationBtn = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
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
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Teal;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(11, 0);
			this->button1->Margin = System::Windows::Forms::Padding(0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 47);
			this->button1->TabIndex = 11;
			this->button1->Text = L"PROFILE";
			this->button1->UseVisualStyleBackColor = false;
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
			this->logoutBtn->Location = System::Drawing::Point(896, 1);
			this->logoutBtn->Margin = System::Windows::Forms::Padding(0);
			this->logoutBtn->Name = L"logoutBtn";
			this->logoutBtn->Size = System::Drawing::Size(80, 46);
			this->logoutBtn->TabIndex = 10;
			this->logoutBtn->Text = L"LOGOUT";
			this->logoutBtn->UseVisualStyleBackColor = false;
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
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Teal;
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->logoutBtn);
			this->panel2->Controls->Add(this->searchBtn);
			this->panel2->Controls->Add(this->MyCoursesBtn);
			this->panel2->Controls->Add(this->TTBtn);
			this->panel2->Controls->Add(this->noticificationBtn);
			this->panel2->Location = System::Drawing::Point(0, 131);
			this->panel2->Margin = System::Windows::Forms::Padding(0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(986, 47);
			this->panel2->TabIndex = 24;
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
			this->panel1->Location = System::Drawing::Point(9, 180);
			this->panel1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(968, 431);
			this->panel1->TabIndex = 27;
			// 
			// StudentForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(986, 614);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->pictureBox2);
			this->Name = L"StudentForm";
			this->Text = L"StudentForm";
			this->Load += gcnew System::EventHandler(this, &StudentForm::StudentForm_Load);
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void StudentForm_Load(System::Object^  sender, System::EventArgs^  e) {
			 panel1->Controls->Clear();
			 StudentProfile ^sp = gcnew StudentProfile(usrnm);
			 panel1->Controls->Add(sp);
		 }
};
}
