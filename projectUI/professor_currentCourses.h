#pragma once
#using <System.dll>
#using <System.data.dll>
#include <string.h>
#include <ctime>
using namespace std;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::OleDb;

namespace projectUI {

	/// <summary>
	/// Summary for professor_currentCourses
	/// </summary>
	public ref class professor_currentCourses : public System::Windows::Forms::UserControl
	{
	public:
		
		professor_currentCourses(void)
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
		~professor_currentCourses()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 

	protected: 
	private: System::Windows::Forms::Label^  Heading;
	private: System::Windows::Forms::RadioButton^  btechRButton;
	private: System::Windows::Forms::RadioButton^  mtechRButton;
	private: System::Windows::Forms::RadioButton^  mscRButton;
	private: System::Windows::Forms::Label^  programChoice;
	private: System::Windows::Forms::GroupBox^  selectProgramme;
	private: System::Windows::Forms::Label^  courseName;
	private: System::Windows::Forms::Label^  courseID;
	private: System::Windows::Forms::Label^  credits;
	private: System::Windows::Forms::Label^  courseURL;
	private: System::Windows::Forms::Label^  number;
	private: System::Windows::Forms::DataGridView^  dataGridView1;

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
			this->Heading = (gcnew System::Windows::Forms::Label());
			this->btechRButton = (gcnew System::Windows::Forms::RadioButton());
			this->mtechRButton = (gcnew System::Windows::Forms::RadioButton());
			this->mscRButton = (gcnew System::Windows::Forms::RadioButton());
			this->programChoice = (gcnew System::Windows::Forms::Label());
			this->selectProgramme = (gcnew System::Windows::Forms::GroupBox());
			this->courseName = (gcnew System::Windows::Forms::Label());
			this->courseID = (gcnew System::Windows::Forms::Label());
			this->credits = (gcnew System::Windows::Forms::Label());
			this->courseURL = (gcnew System::Windows::Forms::Label());
			this->number = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->selectProgramme->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// Heading
			// 
			this->Heading->AutoSize = true;
			this->Heading->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Heading->Location = System::Drawing::Point(33, 66);
			this->Heading->Name = L"Heading";
			this->Heading->Size = System::Drawing::Size(242, 25);
			this->Heading->TabIndex = 1;
			this->Heading->Text = L"List of Current Courses:";
			// 
			// btechRButton
			// 
			this->btechRButton->AutoSize = true;
			this->btechRButton->Location = System::Drawing::Point(7, 2);
			this->btechRButton->Name = L"btechRButton";
			this->btechRButton->Size = System::Drawing::Size(74, 21);
			this->btechRButton->TabIndex = 0;
			this->btechRButton->TabStop = true;
			this->btechRButton->Text = L"B.Tech";
			this->btechRButton->UseVisualStyleBackColor = true;
			this->btechRButton->CheckedChanged += gcnew System::EventHandler(this, &professor_currentCourses::btechRButton_CheckedChanged);
			// 
			// mtechRButton
			// 
			this->mtechRButton->AutoSize = true;
			this->mtechRButton->Location = System::Drawing::Point(114, 2);
			this->mtechRButton->Name = L"mtechRButton";
			this->mtechRButton->Size = System::Drawing::Size(76, 21);
			this->mtechRButton->TabIndex = 2;
			this->mtechRButton->TabStop = true;
			this->mtechRButton->Text = L"M.Tech";
			this->mtechRButton->UseVisualStyleBackColor = true;
			this->mtechRButton->CheckedChanged += gcnew System::EventHandler(this, &professor_currentCourses::mtechRButton_CheckedChanged);
			// 
			// mscRButton
			// 
			this->mscRButton->AutoSize = true;
			this->mscRButton->Location = System::Drawing::Point(234, 2);
			this->mscRButton->Name = L"mscRButton";
			this->mscRButton->Size = System::Drawing::Size(60, 21);
			this->mscRButton->TabIndex = 3;
			this->mscRButton->TabStop = true;
			this->mscRButton->Text = L"M.Sc";
			this->mscRButton->UseVisualStyleBackColor = true;
			this->mscRButton->CheckedChanged += gcnew System::EventHandler(this, &professor_currentCourses::mscRButton_CheckedChanged);
			// 
			// programChoice
			// 
			this->programChoice->AutoSize = true;
			this->programChoice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->programChoice->Location = System::Drawing::Point(44, 143);
			this->programChoice->Name = L"programChoice";
			this->programChoice->Size = System::Drawing::Size(158, 18);
			this->programChoice->TabIndex = 4;
			this->programChoice->Text = L"Select Programme :";
			// 
			// selectProgramme
			// 
			this->selectProgramme->Controls->Add(this->mscRButton);
			this->selectProgramme->Controls->Add(this->mtechRButton);
			this->selectProgramme->Controls->Add(this->btechRButton);
			this->selectProgramme->Location = System::Drawing::Point(121, 164);
			this->selectProgramme->Name = L"selectProgramme";
			this->selectProgramme->Size = System::Drawing::Size(302, 35);
			this->selectProgramme->TabIndex = 5;
			this->selectProgramme->TabStop = false;
			this->selectProgramme->Text = L"groupBox1";
			// 
			// courseName
			// 
			this->courseName->AutoSize = true;
			this->courseName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->courseName->Location = System::Drawing::Point(61, 232);
			this->courseName->Name = L"courseName";
			this->courseName->Size = System::Drawing::Size(112, 20);
			this->courseName->TabIndex = 0;
			this->courseName->Text = L"Course Name";
			// 
			// courseID
			// 
			this->courseID->AutoSize = true;
			this->courseID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->courseID->Location = System::Drawing::Point(250, 232);
			this->courseID->Name = L"courseID";
			this->courseID->Size = System::Drawing::Size(85, 20);
			this->courseID->TabIndex = 6;
			this->courseID->Text = L"Course ID";
			// 
			// credits
			// 
			this->credits->AutoSize = true;
			this->credits->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->credits->Location = System::Drawing::Point(360, 232);
			this->credits->Name = L"credits";
			this->credits->Size = System::Drawing::Size(63, 20);
			this->credits->TabIndex = 7;
			this->credits->Text = L"Credits";
			// 
			// courseURL
			// 
			this->courseURL->AutoSize = true;
			this->courseURL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->courseURL->Location = System::Drawing::Point(481, 232);
			this->courseURL->Name = L"courseURL";
			this->courseURL->Size = System::Drawing::Size(102, 20);
			this->courseURL->TabIndex = 8;
			this->courseURL->Text = L"Course URL";
			// 
			// number
			// 
			this->number->AutoSize = true;
			this->number->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->number->Location = System::Drawing::Point(641, 225);
			this->number->Name = L"number";
			this->number->Size = System::Drawing::Size(87, 40);
			this->number->TabIndex = 9;
			this->number->Text = L"Number of\r\nStudents";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(65, 266);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(663, 198);
			this->dataGridView1->TabIndex = 10;
			// 
			// professor_currentCourses
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->number);
			this->Controls->Add(this->courseURL);
			this->Controls->Add(this->credits);
			this->Controls->Add(this->courseID);
			this->Controls->Add(this->courseName);
			this->Controls->Add(this->selectProgramme);
			this->Controls->Add(this->programChoice);
			this->Controls->Add(this->Heading);
			this->Name = L"professor_currentCourses";
			this->Size = System::Drawing::Size(753, 614);
			this->Load += gcnew System::EventHandler(this, &professor_currentCourses::professor_currentCourses_Load);
			this->selectProgramme->ResumeLayout(false);
			this->selectProgramme->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void professor_currentCourses_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	
	private: System::Void btechRButton_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (btechRButton->Checked==true)
				 {
					 OleDb::OleDbConnection ^con;
					 time_t now = time(0);
					 tm *ltm = new tm;
					 localtime_s(ltm,&now);
					 try
					 {
						  
						 String^ connString="Provider=Microsoft.ACE.OLEDB.12.0;Data Source=AcadManager.accdb";
						 
						 con=gcnew OleDb::OleDbConnection(connString);
						 con->Open();
						 String^ com="Select * from ProfCourses where [Username] = " + "'ckarfa'" + " and [Session] like '20%" +(ltm->tm_year-100)+"%'"+";";
						 MessageBox::Show(com);
						 String^ com2="Select * from CourseList where ";
						 

						 OleDb::OleDbCommand ^cmd=gcnew OleDb::OleDbCommand(com,con);
						 OleDb::OleDbDataReader ^readerData=cmd->ExecuteReader();
						 
						 while (readerData->Read())
						 {
							 com2=com2+"[CourseID] = '"+readerData->GetString(1)+"' or ";
						 }
						 com2=com2->Substring(0,com2->Length -3)+";";

						 MessageBox::Show(com2);
						 cmd=gcnew OleDb::OleDbCommand(com2,con);
						 OleDb::OleDbDataAdapter^ adapter=gcnew OleDb::OleDbDataAdapter();
						 adapter->SelectCommand=cmd;
						 DataTable^ data =gcnew DataTable();
						 adapter->Fill(data);
						 BindingSource^ bSource=gcnew BindingSource();
						 bSource->DataSource=data;
						 dataGridView1->DataSource=bSource;
						 adapter->Update(data);
						 con->Close();
					 }
					 catch(Exception ^ ex)
					 {
						 MessageBox::Show(ex->Message);
						 con->Close();
					 }
					 
				 }
			 }
	private: System::Void mtechRButton_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
	private: System::Void mscRButton_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};

}
