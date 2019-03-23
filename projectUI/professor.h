#pragma once
#using <System.dll>
#using <System.data.dll>

#include "professor_sendGrades.h"
#include "professor_currentCourses.h"
namespace projectUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;
	/// <summary>
	/// Summary for professor
	/// </summary>
	public ref class professor : public System::Windows::Forms::Form
	{
	public:
		professor(void)
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
		~professor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	private: System::Windows::Forms::Button^  btn_vn;

	protected: 

	private: System::Windows::Forms::Button^  btn_cs;
	private: System::Windows::Forms::Button^  btn_an;


	private: System::Windows::Forms::Button^  btn_cc;

	private: System::Windows::Forms::Button^  btn_tt;

	private: System::Windows::Forms::Button^  btn_scp;

	private: System::Windows::Forms::Button^  btn_sg;

	private: System::Windows::Forms::Button^  btn_up;
	private: System::Windows::Forms::Button^  btn_tam;
	private: System::Windows::Forms::Button^  btn_caa;




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
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->btn_caa = (gcnew System::Windows::Forms::Button());
			this->btn_vn = (gcnew System::Windows::Forms::Button());
			this->btn_cs = (gcnew System::Windows::Forms::Button());
			this->btn_an = (gcnew System::Windows::Forms::Button());
			this->btn_cc = (gcnew System::Windows::Forms::Button());
			this->btn_tt = (gcnew System::Windows::Forms::Button());
			this->btn_scp = (gcnew System::Windows::Forms::Button());
			this->btn_sg = (gcnew System::Windows::Forms::Button());
			this->btn_up = (gcnew System::Windows::Forms::Button());
			this->btn_tam = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->SuspendLayout();
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Margin = System::Windows::Forms::Padding(2);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->AutoScroll = true;
			this->splitContainer1->Panel1->Controls->Add(this->btn_caa);
			this->splitContainer1->Panel1->Controls->Add(this->btn_vn);
			this->splitContainer1->Panel1->Controls->Add(this->btn_cs);
			this->splitContainer1->Panel1->Controls->Add(this->btn_an);
			this->splitContainer1->Panel1->Controls->Add(this->btn_cc);
			this->splitContainer1->Panel1->Controls->Add(this->btn_tt);
			this->splitContainer1->Panel1->Controls->Add(this->btn_scp);
			this->splitContainer1->Panel1->Controls->Add(this->btn_sg);
			this->splitContainer1->Panel1->Controls->Add(this->btn_up);
			this->splitContainer1->Panel1->Controls->Add(this->btn_tam);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &professor::splitContainer1_Panel2_Paint);
			this->splitContainer1->Size = System::Drawing::Size(764, 501);
			this->splitContainer1->SplitterDistance = 195;
			this->splitContainer1->SplitterWidth = 3;
			this->splitContainer1->TabIndex = 0;
			// 
			// btn_caa
			// 
			this->btn_caa->Location = System::Drawing::Point(19, 712);
			this->btn_caa->Margin = System::Windows::Forms::Padding(2, 2, 2, 24);
			this->btn_caa->Name = L"btn_caa";
			this->btn_caa->Size = System::Drawing::Size(140, 53);
			this->btn_caa->TabIndex = 9;
			this->btn_caa->Text = L"Course Adjustment Approval";
			this->btn_caa->UseVisualStyleBackColor = true;
			// 
			// btn_vn
			// 
			this->btn_vn->Location = System::Drawing::Point(19, 572);
			this->btn_vn->Margin = System::Windows::Forms::Padding(2);
			this->btn_vn->Name = L"btn_vn";
			this->btn_vn->Size = System::Drawing::Size(140, 53);
			this->btn_vn->TabIndex = 7;
			this->btn_vn->Text = L"View Notification";
			this->btn_vn->UseVisualStyleBackColor = true;
			// 
			// btn_cs
			// 
			this->btn_cs->Location = System::Drawing::Point(19, 505);
			this->btn_cs->Margin = System::Windows::Forms::Padding(2);
			this->btn_cs->Name = L"btn_cs";
			this->btn_cs->Size = System::Drawing::Size(140, 53);
			this->btn_cs->TabIndex = 6;
			this->btn_cs->Text = L"Current Students";
			this->btn_cs->UseVisualStyleBackColor = true;
			// 
			// btn_an
			// 
			this->btn_an->Location = System::Drawing::Point(19, 642);
			this->btn_an->Margin = System::Windows::Forms::Padding(2, 2, 2, 24);
			this->btn_an->Name = L"btn_an";
			this->btn_an->Size = System::Drawing::Size(140, 53);
			this->btn_an->TabIndex = 8;
			this->btn_an->Text = L"Add Notification";
			this->btn_an->UseVisualStyleBackColor = true;
			// 
			// btn_cc
			// 
			this->btn_cc->Location = System::Drawing::Point(19, 432);
			this->btn_cc->Margin = System::Windows::Forms::Padding(2);
			this->btn_cc->Name = L"btn_cc";
			this->btn_cc->Size = System::Drawing::Size(140, 53);
			this->btn_cc->TabIndex = 5;
			this->btn_cc->Text = L"Current Courses";
			this->btn_cc->UseVisualStyleBackColor = true;
			this->btn_cc->Click += gcnew System::EventHandler(this, &professor::btn_cc_Click);
			// 
			// btn_tt
			// 
			this->btn_tt->Location = System::Drawing::Point(19, 363);
			this->btn_tt->Margin = System::Windows::Forms::Padding(2);
			this->btn_tt->Name = L"btn_tt";
			this->btn_tt->Size = System::Drawing::Size(140, 53);
			this->btn_tt->TabIndex = 4;
			this->btn_tt->Text = L"Time Table";
			this->btn_tt->UseVisualStyleBackColor = true;
			// 
			// btn_scp
			// 
			this->btn_scp->Location = System::Drawing::Point(19, 219);
			this->btn_scp->Margin = System::Windows::Forms::Padding(2);
			this->btn_scp->Name = L"btn_scp";
			this->btn_scp->Size = System::Drawing::Size(140, 53);
			this->btn_scp->TabIndex = 2;
			this->btn_scp->Text = L"Send Course Preference";
			this->btn_scp->UseVisualStyleBackColor = true;
			// 
			// btn_sg
			// 
			this->btn_sg->Location = System::Drawing::Point(19, 144);
			this->btn_sg->Margin = System::Windows::Forms::Padding(2);
			this->btn_sg->Name = L"btn_sg";
			this->btn_sg->Size = System::Drawing::Size(140, 53);
			this->btn_sg->TabIndex = 1;
			this->btn_sg->Text = L"Send Grades";
			this->btn_sg->UseVisualStyleBackColor = true;
			this->btn_sg->Click += gcnew System::EventHandler(this, &professor::btn_sg_Click);
			// 
			// btn_up
			// 
			this->btn_up->Location = System::Drawing::Point(19, 73);
			this->btn_up->Margin = System::Windows::Forms::Padding(2);
			this->btn_up->Name = L"btn_up";
			this->btn_up->Size = System::Drawing::Size(140, 53);
			this->btn_up->TabIndex = 0;
			this->btn_up->Text = L"Update Profile";
			this->btn_up->UseVisualStyleBackColor = true;
			// 
			// btn_tam
			// 
			this->btn_tam->Location = System::Drawing::Point(19, 291);
			this->btn_tam->Margin = System::Windows::Forms::Padding(2);
			this->btn_tam->Name = L"btn_tam";
			this->btn_tam->Size = System::Drawing::Size(140, 53);
			this->btn_tam->TabIndex = 3;
			this->btn_tam->Text = L"TA Management";
			this->btn_tam->UseVisualStyleBackColor = true;
			// 
			// professor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(764, 501);
			this->Controls->Add(this->splitContainer1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"professor";
			this->Text = L"professor";
			this->Load += gcnew System::EventHandler(this, &professor::professor_Load);
			this->splitContainer1->Panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btn_sg_Click(System::Object^  sender, System::EventArgs^  e) {
				 splitContainer1->Panel2->Controls->Clear();
				 splitContainer1->Panel2->Controls->Add(gcnew professor_sendGrades);
			 }
private: System::Void btn_cc_Click(System::Object^  sender, System::EventArgs^  e) {
			 splitContainer1->Panel2->Controls->Clear();
			 splitContainer1->Panel2->Controls->Add(gcnew professor_currentCourses);
		 }
private: System::Void splitContainer1_Panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void professor_Load(System::Object^  sender, System::EventArgs^  e) {
	    }
};
}
