#pragma once

#using <System.dll>
#using <System.data.dll>
#include <msclr\marshal_cppstd.h>


namespace Admin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel_main;
	protected: 

	protected: 

	private: System::Windows::Forms::Button^  btn_search;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::RadioButton^  rb_username;
	private: System::Windows::Forms::RadioButton^  rb_name;
	private: System::Windows::Forms::RadioButton^  rb_roll;
	private: System::Windows::Forms::RadioButton^  rb_dept_id;

	private: System::Windows::Forms::Panel^  panel_category;
	private: System::Windows::Forms::RadioButton^  rb_staff;
	private: System::Windows::Forms::RadioButton^  rb_student;
	private: System::Windows::Forms::RadioButton^  rb_prof;

	private: System::Windows::Forms::TextBox^  tb_search;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::RadioButton^  radioButton1;







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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->btn_search = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->rb_username = (gcnew System::Windows::Forms::RadioButton());
			this->rb_name = (gcnew System::Windows::Forms::RadioButton());
			this->rb_roll = (gcnew System::Windows::Forms::RadioButton());
			this->rb_dept_id = (gcnew System::Windows::Forms::RadioButton());
			this->panel_category = (gcnew System::Windows::Forms::Panel());
			this->rb_staff = (gcnew System::Windows::Forms::RadioButton());
			this->rb_student = (gcnew System::Windows::Forms::RadioButton());
			this->rb_prof = (gcnew System::Windows::Forms::RadioButton());
			this->tb_search = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->panel_main->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel_category->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel_main
			// 
			this->panel_main->Controls->Add(this->dataGridView1);
			this->panel_main->Controls->Add(this->btn_search);
			this->panel_main->Controls->Add(this->panel2);
			this->panel_main->Controls->Add(this->panel_category);
			this->panel_main->Controls->Add(this->tb_search);
			this->panel_main->Controls->Add(this->label2);
			this->panel_main->Controls->Add(this->label1);
			this->panel_main->Location = System::Drawing::Point(41, 12);
			this->panel_main->Name = L"panel_main";
			this->panel_main->Size = System::Drawing::Size(722, 465);
			this->panel_main->TabIndex = 0;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(73, 261);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(567, 176);
			this->dataGridView1->TabIndex = 27;
			// 
			// btn_search
			// 
			this->btn_search->Location = System::Drawing::Point(545, 190);
			this->btn_search->Name = L"btn_search";
			this->btn_search->Size = System::Drawing::Size(95, 33);
			this->btn_search->TabIndex = 9;
			this->btn_search->Text = L"Search";
			this->btn_search->UseVisualStyleBackColor = true;
			this->btn_search->Click += gcnew System::EventHandler(this, &Form1::btn_search_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Silver;
			this->panel2->Controls->Add(this->rb_username);
			this->panel2->Controls->Add(this->rb_name);
			this->panel2->Controls->Add(this->rb_roll);
			this->panel2->Controls->Add(this->rb_dept_id);
			this->panel2->Location = System::Drawing::Point(185, 126);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(455, 46);
			this->panel2->TabIndex = 2;
			// 
			// rb_username
			// 
			this->rb_username->AutoSize = true;
			this->rb_username->Location = System::Drawing::Point(121, 14);
			this->rb_username->Name = L"rb_username";
			this->rb_username->Size = System::Drawing::Size(73, 17);
			this->rb_username->TabIndex = 6;
			this->rb_username->Text = L"Username";
			this->rb_username->UseVisualStyleBackColor = true;
			// 
			// rb_name
			// 
			this->rb_name->AutoSize = true;
			this->rb_name->Checked = true;
			this->rb_name->Location = System::Drawing::Point(17, 14);
			this->rb_name->Name = L"rb_name";
			this->rb_name->Size = System::Drawing::Size(53, 17);
			this->rb_name->TabIndex = 5;
			this->rb_name->TabStop = true;
			this->rb_name->Text = L"Name";
			this->rb_name->UseVisualStyleBackColor = true;
			// 
			// rb_roll
			// 
			this->rb_roll->AutoSize = true;
			this->rb_roll->Location = System::Drawing::Point(245, 14);
			this->rb_roll->Name = L"rb_roll";
			this->rb_roll->Size = System::Drawing::Size(63, 17);
			this->rb_roll->TabIndex = 7;
			this->rb_roll->Text = L"Roll No.";
			this->rb_roll->UseVisualStyleBackColor = true;
			// 
			// rb_dept_id
			// 
			this->rb_dept_id->AutoSize = true;
			this->rb_dept_id->Location = System::Drawing::Point(360, 14);
			this->rb_dept_id->Name = L"rb_dept_id";
			this->rb_dept_id->Size = System::Drawing::Size(91, 17);
			this->rb_dept_id->TabIndex = 8;
			this->rb_dept_id->Text = L"DepartmentID";
			this->rb_dept_id->UseVisualStyleBackColor = true;
			// 
			// panel_category
			// 
			this->panel_category->BackColor = System::Drawing::Color::Silver;
			this->panel_category->Controls->Add(this->radioButton1);
			this->panel_category->Controls->Add(this->rb_staff);
			this->panel_category->Controls->Add(this->rb_student);
			this->panel_category->Controls->Add(this->rb_prof);
			this->panel_category->Location = System::Drawing::Point(185, 79);
			this->panel_category->Name = L"panel_category";
			this->panel_category->Size = System::Drawing::Size(455, 41);
			this->panel_category->TabIndex = 1;
			// 
			// rb_staff
			// 
			this->rb_staff->AutoSize = true;
			this->rb_staff->Location = System::Drawing::Point(360, 11);
			this->rb_staff->Name = L"rb_staff";
			this->rb_staff->Size = System::Drawing::Size(47, 17);
			this->rb_staff->TabIndex = 4;
			this->rb_staff->Text = L"Staff";
			this->rb_staff->UseVisualStyleBackColor = true;
			// 
			// rb_student
			// 
			this->rb_student->AutoSize = true;
			this->rb_student->Checked = true;
			this->rb_student->Location = System::Drawing::Point(17, 11);
			this->rb_student->Name = L"rb_student";
			this->rb_student->Size = System::Drawing::Size(96, 17);
			this->rb_student->TabIndex = 2;
			this->rb_student->TabStop = true;
			this->rb_student->Text = L"BTech/MTech";
			this->rb_student->UseVisualStyleBackColor = true;
			// 
			// rb_prof
			// 
			this->rb_prof->AutoSize = true;
			this->rb_prof->Location = System::Drawing::Point(245, 13);
			this->rb_prof->Name = L"rb_prof";
			this->rb_prof->Size = System::Drawing::Size(69, 17);
			this->rb_prof->TabIndex = 3;
			this->rb_prof->Text = L"Professor";
			this->rb_prof->UseVisualStyleBackColor = true;
			// 
			// tb_search
			// 
			this->tb_search->Location = System::Drawing::Point(185, 29);
			this->tb_search->Name = L"tb_search";
			this->tb_search->Size = System::Drawing::Size(230, 20);
			this->tb_search->TabIndex = 1;
			this->tb_search->TabStop = false;
			this->tb_search->Text = L"Search here...";
			this->tb_search->GotFocus += gcnew System::EventHandler(this, &Form1::tb_search_GotFocus);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(70, 92);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 13);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Category";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(70, 142);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 13);
			this->label1->TabIndex = 19;
			this->label1->Text = L"Search By";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(121, 11);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(46, 17);
			this->radioButton1->TabIndex = 5;
			this->radioButton1->Text = L"PhD";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(800, 489);
			this->Controls->Add(this->panel_main);
			this->Name = L"Form1";
			this->Text = L"ADMIN SECTION";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->panel_main->ResumeLayout(false);
			this->panel_main->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel_category->ResumeLayout(false);
			this->panel_category->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void btn_search_Click(System::Object^  sender, System::EventArgs^  e) {

			 MessageBox::Show("Pass 1") ;
			 String ^category = "" ;
			 if(rb_student->Checked){
				 category = "Student" ;
			 }
			 else if(rb_prof->Checked){
				 category = "Professor" ;
			 }
			 else if(rb_staff->Checked){
				 category = "Staff" ;
			 }
			 // Remove after Testing(Start)
			 else{
				 MessageBox::Show("Unhandled Case!") ;
			 }
			 // Remove after Testing(End)


			 MessageBox::Show(category) ;

			 String ^column = "" ;
			 if(rb_name->Checked){
				 column = "FullName" ;
			 }
			 else if(rb_username->Checked){
				 column = "Username" ;
			 }
			 else if(rb_roll->Checked){
				 column = "RollNumber" ;
			 }
			 else if(rb_dept_id->Checked){
				 column = "DeptID" ;
			 }
			 // Remove after Testing(Start)
			 else{
				 MessageBox::Show("Unhandled Case!") ;
			 }
			 // Remove after Testing(End)


			 MessageBox::Show(column) ;

			 String ^keyword = tb_search->Text ;
			 try{

				 OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=AcadManager.accdb";
				 DB_Connection->Open();
				 //String ^ first = tb_search->Text ;
				 //String ^ insertString = " into CourseList([CourseID],[CourseName],[DeptID],[Credits],[CourseLink]) VALUES('" +first+ "', '" +first+ "', '" +first+ "', '" +first+ "', '" +first+ "' );";
				 
				 String ^ selectString = "";
				 if(column == "FullName"){
					 std::string str[3] ;

					 std::string s = msclr::interop::marshal_as<std::string>(keyword);
					 std::string delimiter = " ";

					 size_t pos = 0;
					 std::string token;
					 int j=0;
					 for( j=0; (pos = s.find(delimiter)) != std::string::npos&&j<3; j++) {
						
						str[j] = s.substr(0, pos);
						MessageBox::Show(msclr::interop::marshal_as<String^>(str[j])) ;
						s.erase(0, pos + delimiter.length());
					 }
					 //std::cout << s << std::endl;

					 str[j] = s.substr(0, pos);
					 MessageBox::Show(msclr::interop::marshal_as<String^>(str[j])) ;
					 if(str[1]=="")
						 selectString = "SELECT * FROM " + category + " WHERE " + " FirstName " + " LIKE '%" + msclr::interop::marshal_as<String^>(str[0]) +"%'" ;
					 else if(str[2]=="")
						  selectString = "SELECT * FROM " + category + " WHERE " + " FirstName " + " LIKE '%" + msclr::interop::marshal_as<String^>(str[0]) +"%' and LastName Like '%"+ msclr::interop::marshal_as<String^>(str[1]) + "%'" ;
					 else
						  selectString = "SELECT * FROM " + category + " WHERE " + " FirstName " + " LIKE '%" + msclr::interop::marshal_as<String^>(str[0]) +"%' and MiddleName Like '%"+ msclr::interop::marshal_as<String^>(str[1]) + "%' and LastName Like '%"+ msclr::interop::marshal_as<String^>(str[2]) + "%'"  ;


				 }
				 else{
					 keyword = "%"+keyword+"%" ;
					 selectString = "SELECT * FROM " + category + " WHERE " + column + " LIKE '" + keyword +"'" ;
				 }
				 OleDbCommand ^ cmd = gcnew OleDbCommand(selectString, DB_Connection);

				 
				 MessageBox::Show(selectString) ;
				 

				 OleDb::OleDbDataAdapter^ adapter=gcnew OleDb::OleDbDataAdapter();
				 adapter->SelectCommand=cmd;
				 DataTable^ data =gcnew DataTable();
				 adapter->Fill(data);
				 BindingSource^ bSource=gcnew BindingSource();
				 bSource->DataSource=data;
				 dataGridView1->DataSource=bSource;
				 adapter->Update(data);
				 
				 DB_Connection->Close();

			 }

			 catch(Exception ^ ex)
			 {
				 MessageBox::Show(ex->Message);
			 }


			 /*
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
			 */
			
		 }
private: System::Void tb_search_GotFocus(System::Object^  sender, System::EventArgs^  e) {
			 if(tb_search->Text == "Search here...") tb_search->Text = "" ;
		 }
};
}

