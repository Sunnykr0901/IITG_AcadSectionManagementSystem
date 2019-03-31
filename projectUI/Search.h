#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace projectUI {

	/// <summary>
	/// Summary for UserControlSearch
	/// </summary>
	public ref class UserControlSearch : public System::Windows::Forms::UserControl
	{

	public:
		String ^textbox;
		String ^combobox;
		String ^table;
	public: 
		String ^usrnm;

	public:
		UserControlSearch(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		UserControlSearch(String ^a,String ^b,String ^c)
		{
			InitializeComponent();
			textbox=a;
			combobox=b;
			table=c;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UserControlSearch()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 

	private: System::Windows::Forms::Panel^  searchResultsPanel;
	private: System::Windows::Forms::Panel^  searchPanel; 
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  lblDept;
	private: System::Windows::Forms::TextBox^  txtRoll;


	private: System::Windows::Forms::TextBox^  txtEmail;

	private: System::Windows::Forms::Label^  lblRoll;
	private: System::Windows::Forms::Label^  lblFullName;
	private: System::Windows::Forms::TextBox^  txtProgg;



	private: System::Windows::Forms::Label^  lblHostel;
	private: System::Windows::Forms::Label^  lblProgg;
	private: System::Windows::Forms::TextBox^  txtNat;



	private: System::Windows::Forms::TextBox^  txtHostel;

	private: System::Windows::Forms::Label^  lblNat;
	private: System::Windows::Forms::TextBox^  txtDept;


	private: System::Windows::Forms::Label^  lblEmail;


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
			this->searchResultsPanel = (gcnew System::Windows::Forms::Panel());
			this->searchPanel = (gcnew System::Windows::Forms::Panel());
			this->txtProgg = (gcnew System::Windows::Forms::TextBox());
			this->lblHostel = (gcnew System::Windows::Forms::Label());
			this->lblProgg = (gcnew System::Windows::Forms::Label());
			this->txtNat = (gcnew System::Windows::Forms::TextBox());
			this->txtHostel = (gcnew System::Windows::Forms::TextBox());
			this->lblNat = (gcnew System::Windows::Forms::Label());
			this->txtDept = (gcnew System::Windows::Forms::TextBox());
			this->lblEmail = (gcnew System::Windows::Forms::Label());
			this->lblDept = (gcnew System::Windows::Forms::Label());
			this->txtRoll = (gcnew System::Windows::Forms::TextBox());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->lblRoll = (gcnew System::Windows::Forms::Label());
			this->lblFullName = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->searchResultsPanel->SuspendLayout();
			this->searchPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// searchResultsPanel
			// 
			this->searchResultsPanel->BackColor = System::Drawing::SystemColors::Control;
			this->searchResultsPanel->Controls->Add(this->searchPanel);
			this->searchResultsPanel->Location = System::Drawing::Point(0, 0);
			this->searchResultsPanel->Margin = System::Windows::Forms::Padding(0);
			this->searchResultsPanel->Name = L"searchResultsPanel";
			this->searchResultsPanel->Size = System::Drawing::Size(839, 503);
			this->searchResultsPanel->TabIndex = 20;
			// 
			// searchPanel
			// 
			this->searchPanel->Controls->Add(this->txtProgg);
			this->searchPanel->Controls->Add(this->lblHostel);
			this->searchPanel->Controls->Add(this->lblProgg);
			this->searchPanel->Controls->Add(this->txtNat);
			this->searchPanel->Controls->Add(this->txtHostel);
			this->searchPanel->Controls->Add(this->lblNat);
			this->searchPanel->Controls->Add(this->txtDept);
			this->searchPanel->Controls->Add(this->lblEmail);
			this->searchPanel->Controls->Add(this->lblDept);
			this->searchPanel->Controls->Add(this->txtRoll);
			this->searchPanel->Controls->Add(this->txtEmail);
			this->searchPanel->Controls->Add(this->lblRoll);
			this->searchPanel->Controls->Add(this->lblFullName);
			this->searchPanel->Controls->Add(this->pictureBox1);
			this->searchPanel->Location = System::Drawing::Point(294, 2);
			this->searchPanel->Margin = System::Windows::Forms::Padding(2);
			this->searchPanel->Name = L"searchPanel";
			this->searchPanel->Size = System::Drawing::Size(543, 499);
			this->searchPanel->TabIndex = 0;
			this->searchPanel->Visible = false;
			// 
			// txtProgg
			// 
			this->txtProgg->BackColor = System::Drawing::SystemColors::Control;
			this->txtProgg->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtProgg->Enabled = false;
			this->txtProgg->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtProgg->Location = System::Drawing::Point(243, 429);
			this->txtProgg->Name = L"txtProgg";
			this->txtProgg->Size = System::Drawing::Size(214, 20);
			this->txtProgg->TabIndex = 149;
			// 
			// lblHostel
			// 
			this->lblHostel->AutoSize = true;
			this->lblHostel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblHostel->Location = System::Drawing::Point(85, 355);
			this->lblHostel->Name = L"lblHostel";
			this->lblHostel->Size = System::Drawing::Size(65, 21);
			this->lblHostel->TabIndex = 148;
			this->lblHostel->Text = L"Hostel :";
			this->lblHostel->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lblProgg
			// 
			this->lblProgg->AutoSize = true;
			this->lblProgg->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblProgg->Location = System::Drawing::Point(85, 432);
			this->lblProgg->Name = L"lblProgg";
			this->lblProgg->Size = System::Drawing::Size(109, 21);
			this->lblProgg->TabIndex = 147;
			this->lblProgg->Text = L"Programme :";
			this->lblProgg->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// txtNat
			// 
			this->txtNat->BackColor = System::Drawing::SystemColors::Control;
			this->txtNat->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtNat->Enabled = false;
			this->txtNat->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtNat->Location = System::Drawing::Point(242, 392);
			this->txtNat->Name = L"txtNat";
			this->txtNat->Size = System::Drawing::Size(214, 20);
			this->txtNat->TabIndex = 146;
			// 
			// txtHostel
			// 
			this->txtHostel->BackColor = System::Drawing::SystemColors::Control;
			this->txtHostel->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtHostel->Enabled = false;
			this->txtHostel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtHostel->Location = System::Drawing::Point(242, 355);
			this->txtHostel->Name = L"txtHostel";
			this->txtHostel->Size = System::Drawing::Size(214, 20);
			this->txtHostel->TabIndex = 145;
			// 
			// lblNat
			// 
			this->lblNat->AutoSize = true;
			this->lblNat->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblNat->Location = System::Drawing::Point(85, 392);
			this->lblNat->Name = L"lblNat";
			this->lblNat->Size = System::Drawing::Size(103, 21);
			this->lblNat->TabIndex = 144;
			this->lblNat->Text = L"Nationality :";
			this->lblNat->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// txtDept
			// 
			this->txtDept->BackColor = System::Drawing::SystemColors::Control;
			this->txtDept->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtDept->Enabled = false;
			this->txtDept->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtDept->Location = System::Drawing::Point(242, 281);
			this->txtDept->Name = L"txtDept";
			this->txtDept->Size = System::Drawing::Size(214, 20);
			this->txtDept->TabIndex = 143;
			// 
			// lblEmail
			// 
			this->lblEmail->AutoSize = true;
			this->lblEmail->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblEmail->Location = System::Drawing::Point(85, 247);
			this->lblEmail->Name = L"lblEmail";
			this->lblEmail->Size = System::Drawing::Size(59, 21);
			this->lblEmail->TabIndex = 142;
			this->lblEmail->Text = L"Email :";
			this->lblEmail->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lblDept
			// 
			this->lblDept->AutoSize = true;
			this->lblDept->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblDept->Location = System::Drawing::Point(85, 284);
			this->lblDept->Name = L"lblDept";
			this->lblDept->Size = System::Drawing::Size(116, 21);
			this->lblDept->TabIndex = 137;
			this->lblDept->Text = L"Department :";
			this->lblDept->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// txtRoll
			// 
			this->txtRoll->BackColor = System::Drawing::SystemColors::Control;
			this->txtRoll->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtRoll->Enabled = false;
			this->txtRoll->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtRoll->Location = System::Drawing::Point(242, 318);
			this->txtRoll->Name = L"txtRoll";
			this->txtRoll->Size = System::Drawing::Size(214, 20);
			this->txtRoll->TabIndex = 134;
			// 
			// txtEmail
			// 
			this->txtEmail->BackColor = System::Drawing::SystemColors::Control;
			this->txtEmail->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtEmail->Enabled = false;
			this->txtEmail->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtEmail->Location = System::Drawing::Point(242, 244);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(214, 20);
			this->txtEmail->TabIndex = 132;
			// 
			// lblRoll
			// 
			this->lblRoll->AutoSize = true;
			this->lblRoll->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblRoll->Location = System::Drawing::Point(85, 318);
			this->lblRoll->Name = L"lblRoll";
			this->lblRoll->Size = System::Drawing::Size(111, 21);
			this->lblRoll->TabIndex = 128;
			this->lblRoll->Text = L"Roll Number :";
			this->lblRoll->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lblFullName
			// 
			this->lblFullName->AutoSize = true;
			this->lblFullName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblFullName->Location = System::Drawing::Point(150, 203);
			this->lblFullName->Name = L"lblFullName";
			this->lblFullName->Size = System::Drawing::Size(126, 24);
			this->lblFullName->TabIndex = 126;
			this->lblFullName->Text = L"First Name :";
			this->lblFullName->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->pictureBox1->Location = System::Drawing::Point(201, 24);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(140, 146);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// UserControlSearch
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->searchResultsPanel);
			this->Name = L"UserControlSearch";
			this->Size = System::Drawing::Size(839, 503);
			this->Load += gcnew System::EventHandler(this, &UserControlSearch::UserControlSearch_Load);
			this->searchResultsPanel->ResumeLayout(false);
			this->searchPanel->ResumeLayout(false);
			this->searchPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void UserControlSearch_Load(System::Object^  sender, System::EventArgs^  e) {

				 int i=1;

				 String ^aString = "";
				 OleDb::OleDbConnection ^con;

				 try{					 

					 String^ connString="Provider=Microsoft.ACE.OLEDB.12.0;Data Source=AcadManager.accdb";
					 con=gcnew OleDb::OleDbConnection(connString);
					 con->Open();

					 if (textbox == "")
					 {
						 aString = "Select * from "+ table +" where [DeptID] ='"+ combobox +"';";
					 }
					 else{
						 if (table == "Student")
							 aString = "Select * from "+ table +" where [FirstName] Like '%"+ textbox +"%' or [MiddleName] Like '%"+ textbox +"%' or [LastName] Like '%"+ textbox +"%' or [RollNumber] = '"+ textbox +"' and [DeptID] ='"+ combobox +"';";
						 else
							 aString = "Select * from "+ table +" where [FirstName] Like '%"+ textbox +"%' or [MiddleName] Like '%"+ textbox +"%' or [LastName] Like '%"+ textbox +"%' and [DeptID] ='"+ combobox +"';";
					 }

					 //					 MessageBox::Show(aString);

					 OleDb::OleDbCommand ^cmd=gcnew OleDb::OleDbCommand(aString,con);
					 OleDb::OleDbDataReader ^readerData=cmd->ExecuteReader();

					 while(readerData->Read()){
						 String ^usrnm=readerData->GetString(0);
						 String ^firstnm="";
						 if (!readerData->IsDBNull(1)) firstnm=readerData->GetString(1);

						 String ^middlenm="";
						 if (!readerData->IsDBNull(2)) middlenm=readerData->GetString(2);

						 String ^lastnm="";
						 if (!readerData->IsDBNull(3)) lastnm=readerData->GetString(3);

						 creator(i,firstnm,middlenm,lastnm,usrnm);
						 i=i+1;
					 }
					 con->Close();
				 }
				 catch(Exception ^ ex)
				 {
					 MessageBox::Show(ex->Message);
					 con->Close();
				 }
			 }

			 void creator(int i,String^ firstnm,String^ middlenm,String^ lastnm,String^ usrnm){
				 Button ^ btn_course = gcnew Button();

				 btn_course->Name = Convert::ToString(i);
				 btn_course->Text = firstnm+" "+middlenm+" "+lastnm;

				 btn_course->FlatAppearance->BorderColor = System::Drawing::Color::Teal;
				 btn_course->FlatAppearance->BorderSize = 2;
				 btn_course->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				 btn_course->ForeColor = System::Drawing::Color::Black;
				 btn_course->Size = System::Drawing::Size(250, 35);
				 btn_course->UseVisualStyleBackColor = true;
				 btn_course->Tag = usrnm;

				 if(table=="Student")btn_course->Click += gcnew System::EventHandler(this,&UserControlSearch::clickbtnStudent);
				 else btn_course->Click += gcnew System::EventHandler(this,&UserControlSearch::clickbtnOthers);

				 int x = 15;
				 int y = 50 + 33*(i-1);
				 btn_course->Location = System::Drawing::Point(x, y);

				 searchResultsPanel->Controls->Add(btn_course);
			 }

			 Void clickbtnStudent(System::Object^  sender, System::EventArgs^  e) {

				 Button ^btn = gcnew Button();
				 btn = static_cast<Button^>(sender);
				 String^ username = static_cast<String^>(btn->Tag);

				 OleDb::OleDbConnection ^con;

				 try{					 

					 String^ connString="Provider=Microsoft.ACE.OLEDB.12.0;Data Source=AcadManager.accdb";
					 con=gcnew OleDb::OleDbConnection(connString);
					 con->Open();

					 String ^aString = "Select * from "+ table +" where [Username] ='"+ username +"';";

					 //					 MessageBox::Show(aString);

					 OleDb::OleDbCommand ^cmd=gcnew OleDb::OleDbCommand(aString,con);
					 OleDb::OleDbDataReader ^readerData=cmd->ExecuteReader();


					 while(readerData->Read()){
						 txtEmail->Text=readerData->GetString(0)+"@iitg.ac.in";
						 lblFullName->Text=btn->Text;
						 txtRoll->Text=readerData->GetString(4);
						 txtDept->Text=combobox;
						 txtProgg->Text=readerData->GetString(9);
						 if(!readerData->IsDBNull(10)) txtNat->Text=readerData->GetString(10);
						 if(!readerData->IsDBNull(13)) txtHostel->Text=readerData->GetString(13);
					 }

					 con->Close();
				 }
				 catch(Exception ^ ex)
				 {
					 MessageBox::Show(ex->Message);
					 con->Close();
				 }

				 searchPanel->Visible=true;

			 }

			 Void clickbtnOthers(System::Object^  sender, System::EventArgs^  e) {

				 Button ^btn = gcnew Button();
				 btn = static_cast<Button^>(sender);
				 String^ username = static_cast<String^>(btn->Tag);

				 lblHostel->Text="Post :";
				 lblRoll->Visible=false;
				 txtRoll->Visible=false;
				 txtProgg->Visible=false;
				 lblProgg->Visible=false;
				 

				 OleDb::OleDbConnection ^con;
				 searchPanel->Visible=true;
				 try{					 

					 String^ connString="Provider=Microsoft.ACE.OLEDB.12.0;Data Source=AcadManager.accdb";
					 con=gcnew OleDb::OleDbConnection(connString);
					 con->Open();

					 String ^table1;
					 if(table=="Professor") table1="ProfStatus";
					 else table1="StaffStatus";

					 String ^aString = "Select [Post] from "+table1+" where [Username] ='"+ username +"';";
					 String ^bString = "Select [Nationality] from "+table+" where [Username] ='"+ username +"';";

					 
					 OleDb::OleDbCommand ^cmd=gcnew OleDb::OleDbCommand(aString,con);
					 OleDb::OleDbDataReader ^readerData=cmd->ExecuteReader();

					 while(readerData->Read()){
						 MessageBox::Show(readerData->GetString(0));
						 txtEmail->Text=username+"@iitg.ac.in";
						 lblFullName->Text=btn->Text;
						 if(!readerData->IsDBNull(0))txtHostel->Text=readerData->GetString(0);
						 txtDept->Text=combobox;
					 }

					 OleDb::OleDbCommand ^cmd1=gcnew OleDb::OleDbCommand(bString,con);
					 OleDb::OleDbDataReader ^readerData1=cmd1->ExecuteReader();

					 while(readerData1->Read()){
						 if(!readerData1->IsDBNull(0))txtNat->Text=readerData1->GetString(0);
					 }

					 con->Close();
				 }
				 catch(Exception ^ ex)
				 {
					 MessageBox::Show(ex->Message);
					 con->Close();
				 }

			 }
};

}
