#pragma once
#include <ctime>
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace projectUI {

	/// <summary>
	/// Summary for professor_current_students
	/// </summary>
	public ref class professor_current_students : public System::Windows::Forms::UserControl
	{
	public:
		professor_current_students(void)
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
		~professor_current_students()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(54, 55);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(119, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Current Students:";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(84, 163);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(581, 286);
			this->dataGridView1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(150, 102);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(147, 34);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Select Current Course\r\nor Phd :";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(329, 112);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 3;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &professor_current_students::comboBox1_SelectedIndexChanged);
			// 
			// professor_current_students
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Name = L"professor_current_students";
			this->Size = System::Drawing::Size(753, 614);
			this->Load += gcnew System::EventHandler(this, &professor_current_students::professor_current_students_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void professor_current_students_Load(System::Object^  sender, System::EventArgs^  e) {
				 time_t now = time(0);
				 tm *ltm = new tm;
				 localtime_s(ltm,&now);
				 OleDb::OleDbConnection ^con;
				 try
				 {
					 String^ connString="Provider=Microsoft.ACE.OLEDB.12.0;Data Source=AcadManager.accdb";

					 con=gcnew OleDb::OleDbConnection(connString);
					 con->Open();
					 String^ com="select distinct [CourseID] from CourseList;";
					 OleDb::OleDbCommand ^cmd=gcnew OleDb::OleDbCommand(com,con);
					 OleDb::OleDbDataReader ^readerData=cmd->ExecuteReader();
					 while (readerData->Read())
					 {
						 comboBox1->Items->Add(readerData->GetString(0));
					 }
					 con->Close();
					 comboBox1->Items->Add("Phd");

				 }
				 catch(Exception ^ ex)
				 {
					 MessageBox::Show(ex->Message);
					 con->Close();
				 }
				 
			 }
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				 time_t now = time(0);
				 tm *ltm = new tm;
				 localtime_s(ltm,&now);
				 if(comboBox1->Text=="Phd")
				 {
					 OleDb::OleDbConnection ^con;
					 try
					 {

						 String^ connString="Provider=Microsoft.ACE.OLEDB.12.0;Data Source=AcadManager.accdb";

						 con=gcnew OleDb::OleDbConnection(connString);
						 con->Open();
						 //Query to get all the students enrolled in the selected course
						 String^ com="Select Username,RollNumber,FirstName,LastName,FieldOfSpecialisation from Phd where [Professor] = 'ckarfa' and [Status] = 'Active' "+";";

						 OleDb::OleDbCommand ^cmd=gcnew OleDb::OleDbCommand(com,con);

						 //Populating the datagridview
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
				 else if(comboBox1->Text!="" && comboBox1->Text!="Phd")
				 {
					 String^ course = comboBox1->Text;
					 OleDb::OleDbConnection ^con;
					 try
					 {

						 String^ connString="Provider=Microsoft.ACE.OLEDB.12.0;Data Source=AcadManager.accdb";

						 con=gcnew OleDb::OleDbConnection(connString);
						 con->Open();
						 //Query to get all the students enrolled in the selected course
						 String^ com="Select * from StudentCourses where [CourseID] = '" + course + "' and [Session] like '20%" +(ltm->tm_year-100)+"%'"+";";

						 OleDb::OleDbCommand ^cmd=gcnew OleDb::OleDbCommand(com,con);

						 //Populating the datagridview
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
				 else
				 {
					 MessageBox::Show("Select a Course !");
				 }
			 }
};
}
