#pragma once
#using <System.dll>
#using <System.data.dll>
#include "StudentForm.h"

namespace projectUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Homepage
	/// </summary>
	public ref class Homepage : public System::Windows::Forms::Form
	{
	public:
		Homepage(void)
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
		~Homepage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  formsPanel;
	protected: 
	private: System::Windows::Forms::Button^  PFormsBtn;
	private: System::Windows::Forms::Button^  MFormsBtn;
	private: System::Windows::Forms::Button^  GenFormsBtn;
	private: System::Windows::Forms::Button^  BMFormsBtn;

	private: System::Windows::Forms::Button^  searchBtn;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  formsBtn;
	private: System::Windows::Forms::Button^  AcadCalBtn;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Button^  noticeBrdBtn;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Button^  forgotBtn;
	private: System::Windows::Forms::Button^  loginBtn;
	private: System::Windows::Forms::TextBox^  txtPassword;

	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  txtUsername;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Homepage::typeid));
			this->formsPanel = (gcnew System::Windows::Forms::Panel());
			this->PFormsBtn = (gcnew System::Windows::Forms::Button());
			this->MFormsBtn = (gcnew System::Windows::Forms::Button());
			this->GenFormsBtn = (gcnew System::Windows::Forms::Button());
			this->BMFormsBtn = (gcnew System::Windows::Forms::Button());
			this->searchBtn = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->formsBtn = (gcnew System::Windows::Forms::Button());
			this->AcadCalBtn = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->noticeBrdBtn = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->forgotBtn = (gcnew System::Windows::Forms::Button());
			this->loginBtn = (gcnew System::Windows::Forms::Button());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->formsPanel->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// formsPanel
			// 
			this->formsPanel->BackColor = System::Drawing::Color::Teal;
			this->formsPanel->Controls->Add(this->PFormsBtn);
			this->formsPanel->Controls->Add(this->MFormsBtn);
			this->formsPanel->Controls->Add(this->GenFormsBtn);
			this->formsPanel->Controls->Add(this->BMFormsBtn);
			this->formsPanel->Location = System::Drawing::Point(742, 176);
			this->formsPanel->Margin = System::Windows::Forms::Padding(0);
			this->formsPanel->Name = L"formsPanel";
			this->formsPanel->Size = System::Drawing::Size(133, 118);
			this->formsPanel->TabIndex = 21;
			// 
			// PFormsBtn
			// 
			this->PFormsBtn->BackColor = System::Drawing::Color::Teal;
			this->PFormsBtn->FlatAppearance->BorderSize = 0;
			this->PFormsBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->PFormsBtn->ForeColor = System::Drawing::Color::White;
			this->PFormsBtn->Location = System::Drawing::Point(1, 84);
			this->PFormsBtn->Margin = System::Windows::Forms::Padding(1);
			this->PFormsBtn->Name = L"PFormsBtn";
			this->PFormsBtn->Size = System::Drawing::Size(130, 27);
			this->PFormsBtn->TabIndex = 3;
			this->PFormsBtn->Text = L"   PhD   ";
			this->PFormsBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->PFormsBtn->UseVisualStyleBackColor = false;
			// 
			// MFormsBtn
			// 
			this->MFormsBtn->BackColor = System::Drawing::Color::Teal;
			this->MFormsBtn->FlatAppearance->BorderSize = 0;
			this->MFormsBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->MFormsBtn->ForeColor = System::Drawing::Color::White;
			this->MFormsBtn->Location = System::Drawing::Point(1, 57);
			this->MFormsBtn->Margin = System::Windows::Forms::Padding(1);
			this->MFormsBtn->Name = L"MFormsBtn";
			this->MFormsBtn->Size = System::Drawing::Size(130, 27);
			this->MFormsBtn->TabIndex = 2;
			this->MFormsBtn->Text = L"   MTech/MDes   ";
			this->MFormsBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->MFormsBtn->UseVisualStyleBackColor = false;
			// 
			// GenFormsBtn
			// 
			this->GenFormsBtn->BackColor = System::Drawing::Color::Teal;
			this->GenFormsBtn->FlatAppearance->BorderSize = 0;
			this->GenFormsBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->GenFormsBtn->ForeColor = System::Drawing::Color::White;
			this->GenFormsBtn->Location = System::Drawing::Point(1, 30);
			this->GenFormsBtn->Margin = System::Windows::Forms::Padding(1);
			this->GenFormsBtn->Name = L"GenFormsBtn";
			this->GenFormsBtn->Size = System::Drawing::Size(130, 27);
			this->GenFormsBtn->TabIndex = 1;
			this->GenFormsBtn->Text = L"   General   ";
			this->GenFormsBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->GenFormsBtn->UseVisualStyleBackColor = false;
			// 
			// BMFormsBtn
			// 
			this->BMFormsBtn->BackColor = System::Drawing::Color::Teal;
			this->BMFormsBtn->FlatAppearance->BorderSize = 0;
			this->BMFormsBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BMFormsBtn->ForeColor = System::Drawing::Color::White;
			this->BMFormsBtn->Location = System::Drawing::Point(1, 2);
			this->BMFormsBtn->Margin = System::Windows::Forms::Padding(1);
			this->BMFormsBtn->Name = L"BMFormsBtn";
			this->BMFormsBtn->Size = System::Drawing::Size(130, 28);
			this->BMFormsBtn->TabIndex = 0;
			this->BMFormsBtn->Text = L"   BTech/BDes/MSc   ";
			this->BMFormsBtn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->BMFormsBtn->UseVisualStyleBackColor = false;
			// 
			// searchBtn
			// 
			this->searchBtn->BackColor = System::Drawing::Color::Teal;
			this->searchBtn->FlatAppearance->BorderSize = 0;
			this->searchBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->searchBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->searchBtn->ForeColor = System::Drawing::Color::White;
			this->searchBtn->Location = System::Drawing::Point(396, 0);
			this->searchBtn->Margin = System::Windows::Forms::Padding(0);
			this->searchBtn->Name = L"searchBtn";
			this->searchBtn->Size = System::Drawing::Size(80, 47);
			this->searchBtn->TabIndex = 9;
			this->searchBtn->Text = L"SEARCH";
			this->searchBtn->UseVisualStyleBackColor = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Teal;
			this->label4->Location = System::Drawing::Point(122, 85);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(193, 25);
			this->label4->TabIndex = 20;
			this->label4->Text = L"All at one place.";
			// 
			// formsBtn
			// 
			this->formsBtn->BackColor = System::Drawing::Color::Teal;
			this->formsBtn->FlatAppearance->BorderSize = 0;
			this->formsBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->formsBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->formsBtn->ForeColor = System::Drawing::Color::White;
			this->formsBtn->Location = System::Drawing::Point(802, 0);
			this->formsBtn->Margin = System::Windows::Forms::Padding(0);
			this->formsBtn->Name = L"formsBtn";
			this->formsBtn->Size = System::Drawing::Size(73, 47);
			this->formsBtn->TabIndex = 5;
			this->formsBtn->Text = L"FORMS";
			this->formsBtn->UseVisualStyleBackColor = false;
			// 
			// AcadCalBtn
			// 
			this->AcadCalBtn->BackColor = System::Drawing::Color::Teal;
			this->AcadCalBtn->FlatAppearance->BorderSize = 0;
			this->AcadCalBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AcadCalBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->AcadCalBtn->ForeColor = System::Drawing::Color::White;
			this->AcadCalBtn->Location = System::Drawing::Point(613, 0);
			this->AcadCalBtn->Margin = System::Windows::Forms::Padding(0);
			this->AcadCalBtn->Name = L"AcadCalBtn";
			this->AcadCalBtn->Size = System::Drawing::Size(189, 47);
			this->AcadCalBtn->TabIndex = 1;
			this->AcadCalBtn->Text = L"ACADEMIC CALENDAR";
			this->AcadCalBtn->UseVisualStyleBackColor = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Teal;
			this->label5->Location = System::Drawing::Point(122, 60);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(381, 25);
			this->label5->TabIndex = 19;
			this->label5->Text = L"Student | Faculty | Administration";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Teal;
			this->label6->Location = System::Drawing::Point(120, 19);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(399, 41);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Academic System IITG";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Teal;
			this->panel2->Controls->Add(this->searchBtn);
			this->panel2->Controls->Add(this->formsBtn);
			this->panel2->Controls->Add(this->AcadCalBtn);
			this->panel2->Controls->Add(this->noticeBrdBtn);
			this->panel2->Location = System::Drawing::Point(0, 129);
			this->panel2->Margin = System::Windows::Forms::Padding(0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(900, 47);
			this->panel2->TabIndex = 17;
			// 
			// noticeBrdBtn
			// 
			this->noticeBrdBtn->BackColor = System::Drawing::Color::Teal;
			this->noticeBrdBtn->FlatAppearance->BorderSize = 0;
			this->noticeBrdBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->noticeBrdBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->noticeBrdBtn->ForeColor = System::Drawing::Color::White;
			this->noticeBrdBtn->Location = System::Drawing::Point(471, 0);
			this->noticeBrdBtn->Margin = System::Windows::Forms::Padding(0);
			this->noticeBrdBtn->Name = L"noticeBrdBtn";
			this->noticeBrdBtn->Size = System::Drawing::Size(142, 47);
			this->noticeBrdBtn->TabIndex = 0;
			this->noticeBrdBtn->Text = L"NOTICE BOARD";
			this->noticeBrdBtn->UseVisualStyleBackColor = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox2->Location = System::Drawing::Point(11, 15);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(100, 100);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 16;
			this->pictureBox2->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Teal;
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Location = System::Drawing::Point(224, 328);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(411, 190);
			this->panel1->TabIndex = 22;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->Controls->Add(this->forgotBtn);
			this->panel3->Controls->Add(this->loginBtn);
			this->panel3->Controls->Add(this->txtPassword);
			this->panel3->Controls->Add(this->textBox2);
			this->panel3->Controls->Add(this->txtUsername);
			this->panel3->Location = System::Drawing::Point(3, 3);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(405, 184);
			this->panel3->TabIndex = 0;
			// 
			// forgotBtn
			// 
			this->forgotBtn->BackColor = System::Drawing::Color::White;
			this->forgotBtn->FlatAppearance->BorderColor = System::Drawing::Color::Tomato;
			this->forgotBtn->FlatAppearance->BorderSize = 2;
			this->forgotBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->forgotBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 6.7F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->forgotBtn->ForeColor = System::Drawing::Color::Tomato;
			this->forgotBtn->Location = System::Drawing::Point(204, 123);
			this->forgotBtn->Name = L"forgotBtn";
			this->forgotBtn->Size = System::Drawing::Size(114, 32);
			this->forgotBtn->TabIndex = 4;
			this->forgotBtn->Text = L"Forgot Password";
			this->forgotBtn->UseVisualStyleBackColor = false;
			// 
			// loginBtn
			// 
			this->loginBtn->BackColor = System::Drawing::Color::Teal;
			this->loginBtn->FlatAppearance->BorderSize = 0;
			this->loginBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->loginBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->loginBtn->ForeColor = System::Drawing::Color::White;
			this->loginBtn->Location = System::Drawing::Point(61, 123);
			this->loginBtn->Name = L"loginBtn";
			this->loginBtn->Size = System::Drawing::Size(137, 32);
			this->loginBtn->TabIndex = 3;
			this->loginBtn->Text = L"LOGIN";
			this->loginBtn->UseVisualStyleBackColor = false;
			this->loginBtn->Click += gcnew System::EventHandler(this, &Homepage::loginBtn_Click);
			// 
			// txtPassword
			// 
			this->txtPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtPassword->Location = System::Drawing::Point(34, 67);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->PasswordChar = '*';
			this->txtPassword->Size = System::Drawing::Size(317, 29);
			this->txtPassword->TabIndex = 2;
			this->txtPassword->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::DimGray;
			this->textBox2->Location = System::Drawing::Point(258, 32);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(93, 29);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"@iitg.ac.in";
			// 
			// txtUsername
			// 
			this->txtUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtUsername->Location = System::Drawing::Point(34, 32);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(223, 29);
			this->txtUsername->TabIndex = 0;
			// 
			// Homepage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(884, 661);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->formsPanel);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->pictureBox2);
			this->Name = L"Homepage";
			this->Text = L"Homepage";
			this->formsPanel->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void loginBtn_Click(System::Object^  sender, System::EventArgs^  e) {

				 OleDb::OleDbConnection ^con;	 
				 try{				
					 String^ connString="Provider=Microsoft.ACE.OLEDB.12.0;Data Source=AcadManager.accdb";

					 con=gcnew OleDb::OleDbConnection(connString);
					 con->Open();

					 String ^ aString = "Select [Password] from Student where [Username] ='"+txtUsername-> Text+"';";
					 MessageBox::Show(aString);

					 //if(aString->Length){
					 //	Homepage::Hide();
					 //	studentform ^student=gcnew studentform();
					 //	student->ShowDialog();
					 //}
					 OleDb::OleDbCommand ^cmd=gcnew OleDb::OleDbCommand(aString,con);
					 OleDb::OleDbDataReader ^readerData=cmd->ExecuteReader();

					 int count=0;
					 String ^password;
					 while(readerData->Read())
					 {
						 password=readerData->GetString(0);
						 MessageBox::Show(password);
						 count++;
					 }
					 if(count==1 && txtPassword->Text==password){
						 Homepage::Hide();
						 StudentForm ^student=gcnew StudentForm(txtUsername->Text);
						 student->ShowDialog();
						 con->Close();
					 }
					 con->Close();
				 }
				 catch(Exception ^ ex)
				 {
					 MessageBox::Show(ex->Message);
					 con->Close();
				 }

			 };
	};
}
