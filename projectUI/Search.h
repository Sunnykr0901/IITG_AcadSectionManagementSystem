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
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  rollTxt;
	private: System::Windows::Forms::TextBox^  emailTxt;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  nameLbl;
	private: System::Windows::Forms::TextBox^  progTxt;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  nationalityTxt;
	private: System::Windows::Forms::TextBox^  hostelTxt;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  deptTxt;
	private: System::Windows::Forms::Label^  label6;

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
			this->progTxt = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->nationalityTxt = (gcnew System::Windows::Forms::TextBox());
			this->hostelTxt = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->deptTxt = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->rollTxt = (gcnew System::Windows::Forms::TextBox());
			this->emailTxt = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->nameLbl = (gcnew System::Windows::Forms::Label());
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
			this->searchResultsPanel->Size = System::Drawing::Size(1287, 542);
			this->searchResultsPanel->TabIndex = 20;
			// 
			// searchPanel
			// 
			this->searchPanel->Controls->Add(this->progTxt);
			this->searchPanel->Controls->Add(this->label2);
			this->searchPanel->Controls->Add(this->label8);
			this->searchPanel->Controls->Add(this->nationalityTxt);
			this->searchPanel->Controls->Add(this->hostelTxt);
			this->searchPanel->Controls->Add(this->label9);
			this->searchPanel->Controls->Add(this->deptTxt);
			this->searchPanel->Controls->Add(this->label6);
			this->searchPanel->Controls->Add(this->label1);
			this->searchPanel->Controls->Add(this->rollTxt);
			this->searchPanel->Controls->Add(this->emailTxt);
			this->searchPanel->Controls->Add(this->label7);
			this->searchPanel->Controls->Add(this->nameLbl);
			this->searchPanel->Controls->Add(this->pictureBox1);
			this->searchPanel->Location = System::Drawing::Point(399, 0);
			this->searchPanel->Name = L"searchPanel";
			this->searchPanel->Size = System::Drawing::Size(888, 542);
			this->searchPanel->TabIndex = 0;
			this->searchPanel->Visible = false;
			// 
			// progTxt
			// 
			this->progTxt->Enabled = false;
			this->progTxt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->progTxt->Location = System::Drawing::Point(640, 494);
			this->progTxt->Margin = System::Windows::Forms::Padding(4);
			this->progTxt->Name = L"progTxt";
			this->progTxt->Size = System::Drawing::Size(178, 24);
			this->progTxt->TabIndex = 149;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(493, 383);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 18);
			this->label2->TabIndex = 148;
			this->label2->Text = L"Hostel :";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(493, 497);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(104, 18);
			this->label8->TabIndex = 147;
			this->label8->Text = L"Programme :";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// nationalityTxt
			// 
			this->nationalityTxt->Enabled = false;
			this->nationalityTxt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->nationalityTxt->Location = System::Drawing::Point(639, 437);
			this->nationalityTxt->Margin = System::Windows::Forms::Padding(4);
			this->nationalityTxt->Name = L"nationalityTxt";
			this->nationalityTxt->Size = System::Drawing::Size(178, 24);
			this->nationalityTxt->TabIndex = 146;
			// 
			// hostelTxt
			// 
			this->hostelTxt->Enabled = false;
			this->hostelTxt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->hostelTxt->Location = System::Drawing::Point(639, 380);
			this->hostelTxt->Margin = System::Windows::Forms::Padding(4);
			this->hostelTxt->Name = L"hostelTxt";
			this->hostelTxt->Size = System::Drawing::Size(178, 24);
			this->hostelTxt->TabIndex = 145;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(493, 440);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(96, 18);
			this->label9->TabIndex = 144;
			this->label9->Text = L"Nationality :";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// deptTxt
			// 
			this->deptTxt->Enabled = false;
			this->deptTxt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->deptTxt->Location = System::Drawing::Point(239, 437);
			this->deptTxt->Margin = System::Windows::Forms::Padding(4);
			this->deptTxt->Name = L"deptTxt";
			this->deptTxt->Size = System::Drawing::Size(178, 24);
			this->deptTxt->TabIndex = 143;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(93, 383);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(56, 18);
			this->label6->TabIndex = 142;
			this->label6->Text = L"Email :";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(93, 440);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(106, 18);
			this->label1->TabIndex = 137;
			this->label1->Text = L"Department :";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// rollTxt
			// 
			this->rollTxt->Enabled = false;
			this->rollTxt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->rollTxt->Location = System::Drawing::Point(239, 494);
			this->rollTxt->Margin = System::Windows::Forms::Padding(4);
			this->rollTxt->Name = L"rollTxt";
			this->rollTxt->Size = System::Drawing::Size(178, 24);
			this->rollTxt->TabIndex = 134;
			// 
			// emailTxt
			// 
			this->emailTxt->Enabled = false;
			this->emailTxt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->emailTxt->Location = System::Drawing::Point(239, 380);
			this->emailTxt->Margin = System::Windows::Forms::Padding(4);
			this->emailTxt->Name = L"emailTxt";
			this->emailTxt->Size = System::Drawing::Size(178, 24);
			this->emailTxt->TabIndex = 132;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(93, 497);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(109, 18);
			this->label7->TabIndex = 128;
			this->label7->Text = L"Roll Number :";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// nameLbl
			// 
			this->nameLbl->AutoSize = true;
			this->nameLbl->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->nameLbl->Location = System::Drawing::Point(368, 255);
			this->nameLbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->nameLbl->Name = L"nameLbl";
			this->nameLbl->Size = System::Drawing::Size(153, 28);
			this->nameLbl->TabIndex = 126;
			this->nameLbl->Text = L"First Name :";
			this->nameLbl->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->pictureBox1->Location = System::Drawing::Point(358, 22);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(186, 180);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// UserControlSearch
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->searchResultsPanel);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"UserControlSearch";
			this->Size = System::Drawing::Size(1287, 542);
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
					    emailTxt->Text=readerData->GetString(0)+"@iitg.ac.in";
					    nameLbl->Text=btn->Text;
					    rollTxt->Text=readerData->GetString(4);
					    deptTxt->Text=combobox;
					    progTxt->Text=readerData->GetString(9);
					    if(!readerData->IsDBNull(10)) nationalityTxt->Text=readerData->GetString(10);
					    if(!readerData->IsDBNull(13)) hostelTxt->Text=readerData->GetString(13);
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

			    label2->Text="Post :";
			    label7->Visible=false;
			    label8->Visible=false;
			    progTxt->Visible=false;
			    rollTxt->Visible=false;


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

				    //					 MessageBox::Show(aString);

				    OleDb::OleDbCommand ^cmd=gcnew OleDb::OleDbCommand(aString,con);
				    OleDb::OleDbDataReader ^readerData=cmd->ExecuteReader();

				    while(readerData->Read()){
					    emailTxt->Text=username+"@iitg.ac.in";
					    nameLbl->Text=btn->Text;
					    if(!readerData->IsDBNull(0))hostelTxt->Text=readerData->GetString(0);
					    deptTxt->Text=combobox;
				    }

				    OleDb::OleDbCommand ^cmd1=gcnew OleDb::OleDbCommand(bString,con);
				    OleDb::OleDbDataReader ^readerData1=cmd1->ExecuteReader();

				    while(readerData1->Read()){
					    if(!readerData1->IsDBNull(0))nationalityTxt->Text=readerData1->GetString(0);
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
