#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace projectUI {

	/// <summary>
	/// Summary for StudentProfile
	/// </summary>
	public ref class StudentProfile : public System::Windows::Forms::UserControl
	{
	public:
		StudentProfile(void)
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
		~StudentProfile()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  ExtraInfoBtn;
	protected: 

	protected: 
	private: System::Windows::Forms::Label^  LblHostel;
	private: System::Windows::Forms::Label^  LblGender;
	private: System::Windows::Forms::Label^  LblNationality;
	private: System::Windows::Forms::Label^  LblIITGEmail;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

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
			this->ExtraInfoBtn = (gcnew System::Windows::Forms::Button());
			this->LblHostel = (gcnew System::Windows::Forms::Label());
			this->LblGender = (gcnew System::Windows::Forms::Label());
			this->LblNationality = (gcnew System::Windows::Forms::Label());
			this->LblIITGEmail = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// ExtraInfoBtn
			// 
			this->ExtraInfoBtn->BackColor = System::Drawing::Color::Teal;
			this->ExtraInfoBtn->FlatAppearance->BorderSize = 0;
			this->ExtraInfoBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ExtraInfoBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ExtraInfoBtn->ForeColor = System::Drawing::Color::White;
			this->ExtraInfoBtn->Location = System::Drawing::Point(240, 362);
			this->ExtraInfoBtn->Margin = System::Windows::Forms::Padding(0);
			this->ExtraInfoBtn->Name = L"ExtraInfoBtn";
			this->ExtraInfoBtn->Size = System::Drawing::Size(194, 47);
			this->ExtraInfoBtn->TabIndex = 13;
			this->ExtraInfoBtn->Text = L"Additional Information";
			this->ExtraInfoBtn->UseVisualStyleBackColor = false;
			// 
			// LblHostel
			// 
			this->LblHostel->AutoSize = true;
			this->LblHostel->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->LblHostel->Location = System::Drawing::Point(297, 291);
			this->LblHostel->Name = L"LblHostel";
			this->LblHostel->Size = System::Drawing::Size(111, 25);
			this->LblHostel->TabIndex = 11;
			this->LblHostel->Text = L"My hostel";
			this->LblHostel->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// LblGender
			// 
			this->LblGender->AutoSize = true;
			this->LblGender->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->LblGender->Location = System::Drawing::Point(297, 253);
			this->LblGender->Name = L"LblGender";
			this->LblGender->Size = System::Drawing::Size(144, 25);
			this->LblGender->TabIndex = 10;
			this->LblGender->Text = L"Male/Female";
			this->LblGender->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// LblNationality
			// 
			this->LblNationality->AutoSize = true;
			this->LblNationality->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->LblNationality->Location = System::Drawing::Point(297, 215);
			this->LblNationality->Name = L"LblNationality";
			this->LblNationality->Size = System::Drawing::Size(159, 25);
			this->LblNationality->TabIndex = 9;
			this->LblNationality->Text = L"Indian hu bhai";
			this->LblNationality->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// LblIITGEmail
			// 
			this->LblIITGEmail->AutoSize = true;
			this->LblIITGEmail->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->LblIITGEmail->Location = System::Drawing::Point(297, 177);
			this->LblIITGEmail->Name = L"LblIITGEmail";
			this->LblIITGEmail->Size = System::Drawing::Size(221, 25);
			this->LblIITGEmail->TabIndex = 8;
			this->LblIITGEmail->Text = L"username@iitg.ac.in";
			this->LblIITGEmail->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Control;
			this->panel1->Controls->Add(this->ExtraInfoBtn);
			this->panel1->Controls->Add(this->LblHostel);
			this->panel1->Controls->Add(this->LblGender);
			this->panel1->Controls->Add(this->LblNationality);
			this->panel1->Controls->Add(this->LblIITGEmail);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(156, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(674, 443);
			this->panel1->TabIndex = 13;
			
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(130, 291);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(91, 25);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Hostel :";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(130, 253);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(100, 25);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Gender :";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(130, 215);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(137, 25);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Nationality :";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(130, 177);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(128, 25);
			this->label4->TabIndex = 4;
			this->label4->Text = L"IITG Email :";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(297, 89);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(202, 25);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Programme, Dept.";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(297, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 25);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Roll No.";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(297, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(137, 28);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Full Name";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(172, 27);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 100);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// StudentProfile
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->Controls->Add(this->panel1);
			this->Name = L"StudentProfile";
			this->Size = System::Drawing::Size(986, 443);
			this->Load += gcnew System::EventHandler(this, &StudentProfile::StudentProfile_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	
private: System::Void StudentProfile_Load(System::Object^  sender, System::EventArgs^  e) {
	    }
};
}
