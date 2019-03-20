#pragma once

#using <System.dll>
#using <System.data.dll>

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
	private: System::Windows::Forms::TextBox^  tb_search;
	private: System::Windows::Forms::Button^  btn_search;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::RadioButton^  rb_username;
	private: System::Windows::Forms::RadioButton^  rb_name;
	private: System::Windows::Forms::RadioButton^  rb_roll;
	private: System::Windows::Forms::RadioButton^  rb_dept;
	private: System::Windows::Forms::Panel^  panel_category;
	private: System::Windows::Forms::RadioButton^  rb_staff;
	private: System::Windows::Forms::RadioButton^  rb_student;
	private: System::Windows::Forms::RadioButton^  rb_prof;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::TextBox^  Search_textbox;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Username;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  first_name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  last_name;

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
			this->tb_search = (gcnew System::Windows::Forms::TextBox());
			this->btn_search = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->rb_username = (gcnew System::Windows::Forms::RadioButton());
			this->rb_name = (gcnew System::Windows::Forms::RadioButton());
			this->rb_roll = (gcnew System::Windows::Forms::RadioButton());
			this->rb_dept = (gcnew System::Windows::Forms::RadioButton());
			this->panel_category = (gcnew System::Windows::Forms::Panel());
			this->rb_staff = (gcnew System::Windows::Forms::RadioButton());
			this->rb_student = (gcnew System::Windows::Forms::RadioButton());
			this->rb_prof = (gcnew System::Windows::Forms::RadioButton());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Search_textbox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Username = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->first_name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->last_name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel_main->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel_category->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel_main
			// 
			this->panel_main->Controls->Add(this->tb_search);
			this->panel_main->Controls->Add(this->btn_search);
			this->panel_main->Controls->Add(this->panel2);
			this->panel_main->Controls->Add(this->panel_category);
			this->panel_main->Controls->Add(this->dataGridView1);
			this->panel_main->Controls->Add(this->Search_textbox);
			this->panel_main->Controls->Add(this->label2);
			this->panel_main->Controls->Add(this->label1);
			this->panel_main->Location = System::Drawing::Point(41, 35);
			this->panel_main->Name = L"panel_main";
			this->panel_main->Size = System::Drawing::Size(722, 442);
			this->panel_main->TabIndex = 0;
			// 
			// tb_search
			// 
			this->tb_search->Location = System::Drawing::Point(186, 183);
			this->tb_search->Name = L"tb_search";
			this->tb_search->Size = System::Drawing::Size(194, 20);
			this->tb_search->TabIndex = 20;
			// 
			// btn_search
			// 
			this->btn_search->Location = System::Drawing::Point(546, 176);
			this->btn_search->Name = L"btn_search";
			this->btn_search->Size = System::Drawing::Size(95, 33);
			this->btn_search->TabIndex = 26;
			this->btn_search->Text = L"Search";
			this->btn_search->UseVisualStyleBackColor = true;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Silver;
			this->panel2->Controls->Add(this->rb_username);
			this->panel2->Controls->Add(this->rb_name);
			this->panel2->Controls->Add(this->rb_roll);
			this->panel2->Controls->Add(this->rb_dept);
			this->panel2->Location = System::Drawing::Point(186, 76);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(455, 81);
			this->panel2->TabIndex = 25;
			// 
			// rb_username
			// 
			this->rb_username->AutoSize = true;
			this->rb_username->Location = System::Drawing::Point(121, 14);
			this->rb_username->Name = L"rb_username";
			this->rb_username->Size = System::Drawing::Size(73, 17);
			this->rb_username->TabIndex = 7;
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
			this->rb_name->TabIndex = 3;
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
			this->rb_roll->TabIndex = 5;
			this->rb_roll->Text = L"Roll No.";
			this->rb_roll->UseVisualStyleBackColor = true;
			// 
			// rb_dept
			// 
			this->rb_dept->AutoSize = true;
			this->rb_dept->Location = System::Drawing::Point(360, 14);
			this->rb_dept->Name = L"rb_dept";
			this->rb_dept->Size = System::Drawing::Size(80, 17);
			this->rb_dept->TabIndex = 6;
			this->rb_dept->Text = L"Department";
			this->rb_dept->UseVisualStyleBackColor = true;
			// 
			// panel_category
			// 
			this->panel_category->BackColor = System::Drawing::Color::Silver;
			this->panel_category->Controls->Add(this->rb_staff);
			this->panel_category->Controls->Add(this->rb_student);
			this->panel_category->Controls->Add(this->rb_prof);
			this->panel_category->Location = System::Drawing::Point(186, 13);
			this->panel_category->Name = L"panel_category";
			this->panel_category->Size = System::Drawing::Size(455, 41);
			this->panel_category->TabIndex = 24;
			// 
			// rb_staff
			// 
			this->rb_staff->AutoSize = true;
			this->rb_staff->Location = System::Drawing::Point(333, 11);
			this->rb_staff->Name = L"rb_staff";
			this->rb_staff->Size = System::Drawing::Size(47, 17);
			this->rb_staff->TabIndex = 15;
			this->rb_staff->Text = L"Staff";
			this->rb_staff->UseVisualStyleBackColor = true;
			// 
			// rb_student
			// 
			this->rb_student->AutoSize = true;
			this->rb_student->Checked = true;
			this->rb_student->Location = System::Drawing::Point(36, 11);
			this->rb_student->Name = L"rb_student";
			this->rb_student->Size = System::Drawing::Size(62, 17);
			this->rb_student->TabIndex = 13;
			this->rb_student->TabStop = true;
			this->rb_student->Text = L"Student";
			this->rb_student->UseVisualStyleBackColor = true;
			// 
			// rb_prof
			// 
			this->rb_prof->AutoSize = true;
			this->rb_prof->Location = System::Drawing::Point(180, 11);
			this->rb_prof->Name = L"rb_prof";
			this->rb_prof->Size = System::Drawing::Size(69, 17);
			this->rb_prof->TabIndex = 14;
			this->rb_prof->Text = L"Professor";
			this->rb_prof->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {this->Username, 
				this->first_name, this->last_name});
			this->dataGridView1->Location = System::Drawing::Point(74, 237);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(567, 181);
			this->dataGridView1->TabIndex = 23;
			// 
			// Search_textbox
			// 
			this->Search_textbox->Location = System::Drawing::Point(186, 134);
			this->Search_textbox->Name = L"Search_textbox";
			this->Search_textbox->Size = System::Drawing::Size(230, 20);
			this->Search_textbox->TabIndex = 22;
			this->Search_textbox->Text = L"Search here....";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(71, 26);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 13);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Category";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(71, 90);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 13);
			this->label1->TabIndex = 19;
			this->label1->Text = L"Search By";
			// 
			// Username
			// 
			this->Username->HeaderText = L"USERNAME";
			this->Username->Name = L"Username";
			this->Username->ReadOnly = true;
			// 
			// first_name
			// 
			this->first_name->HeaderText = L"FIRST NAME";
			this->first_name->Name = L"first_name";
			this->first_name->ReadOnly = true;
			// 
			// last_name
			// 
			this->last_name->HeaderText = L"LAST NAME";
			this->last_name->Name = L"last_name";
			this->last_name->ReadOnly = true;
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
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel_category->ResumeLayout(false);
			this->panel_category->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void rb_roll_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void btn_search_Click(System::Object^  sender, System::EventArgs^  e) {
			
			 try{

				 OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
				 DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=AcadManager.accdb";
				 DB_Connection->Open();
				 String ^ first = tb_search->Text ;
				 //String ^ insertString = " into CourseList([CourseID],[CourseName],[DeptID],[Credits],[CourseLink]) VALUES('" +first+ "', '" +first+ "', '" +first+ "', '" +first+ "', '" +first+ "' );";
				 String ^ selectString = "SELECT * FROM Student" ;
				 OleDbCommand ^ cmd = gcnew OleDbCommand(selectString, DB_Connection);

				 OleDbDataReader ^ reader = cmd->ExecuteReader();
				 //cmd->ExecuteNonQuery();

				 do{
					 while(reader->Read()){
						for(int i = 0 ; i < reader->FieldCount ; i++){
							//label3->Text += reader->GetValue(i) ;
						}
					 }
				 }while(reader->NextResult()) ;
				 
				 DB_Connection->Close();

			 }

			 catch(Exception ^ ex)
			 {
				 MessageBox::Show(ex->Message);
			 }
			 
		 }
};
}

