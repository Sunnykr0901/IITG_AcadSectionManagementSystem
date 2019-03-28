#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace projectUI {

	/// <summary>
	/// Summary for professor_viewNotifications
	/// </summary>
	public ref class professor_viewNotifications : public System::Windows::Forms::UserControl
	{
	public:
		professor_viewNotifications(void)
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
		~professor_viewNotifications()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  start_date;
	protected: 
	private: System::Windows::Forms::Label^  end_date;
	private: System::Windows::Forms::DateTimePicker^  start_dateTimePicker;
	private: System::Windows::Forms::DateTimePicker^  end_dateTimePicker;


	private: System::Windows::Forms::Button^  viewNotifications_btn;
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
			this->start_date = (gcnew System::Windows::Forms::Label());
			this->end_date = (gcnew System::Windows::Forms::Label());
			this->start_dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->end_dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->viewNotifications_btn = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// start_date
			// 
			this->start_date->AutoSize = true;
			this->start_date->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->start_date->Location = System::Drawing::Point(58, 79);
			this->start_date->Name = L"start_date";
			this->start_date->Size = System::Drawing::Size(155, 20);
			this->start_date->TabIndex = 0;
			this->start_date->Text = L"Select Start Date";
			// 
			// end_date
			// 
			this->end_date->AutoSize = true;
			this->end_date->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->end_date->Location = System::Drawing::Point(476, 79);
			this->end_date->Name = L"end_date";
			this->end_date->Size = System::Drawing::Size(146, 20);
			this->end_date->TabIndex = 1;
			this->end_date->Text = L"Select End Date";
			// 
			// start_dateTimePicker
			// 
			this->start_dateTimePicker->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->start_dateTimePicker->Location = System::Drawing::Point(62, 113);
			this->start_dateTimePicker->Name = L"start_dateTimePicker";
			this->start_dateTimePicker->Size = System::Drawing::Size(151, 22);
			this->start_dateTimePicker->TabIndex = 2;
			// 
			// end_dateTimePicker
			// 
			this->end_dateTimePicker->CustomFormat = L"";
			this->end_dateTimePicker->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->end_dateTimePicker->Location = System::Drawing::Point(480, 113);
			this->end_dateTimePicker->Name = L"end_dateTimePicker";
			this->end_dateTimePicker->Size = System::Drawing::Size(142, 22);
			this->end_dateTimePicker->TabIndex = 3;
			// 
			// viewNotifications_btn
			// 
			this->viewNotifications_btn->Location = System::Drawing::Point(303, 168);
			this->viewNotifications_btn->Name = L"viewNotifications_btn";
			this->viewNotifications_btn->Size = System::Drawing::Size(142, 40);
			this->viewNotifications_btn->TabIndex = 4;
			this->viewNotifications_btn->Text = L"View Notifications";
			this->viewNotifications_btn->UseVisualStyleBackColor = true;
			this->viewNotifications_btn->Click += gcnew System::EventHandler(this, &professor_viewNotifications::viewNotifications_btn_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(22, 322);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(701, 247);
			this->dataGridView1->TabIndex = 5;
			// 
			// professor_viewNotifications
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->viewNotifications_btn);
			this->Controls->Add(this->end_dateTimePicker);
			this->Controls->Add(this->start_dateTimePicker);
			this->Controls->Add(this->end_date);
			this->Controls->Add(this->start_date);
			this->Name = L"professor_viewNotifications";
			this->Size = System::Drawing::Size(753, 614);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void viewNotifications_btn_Click(System::Object^  sender, System::EventArgs^  e) {


				 OleDb::OleDbConnection ^con;
				 String^ connString="Provider=Microsoft.ACE.OLEDB.12.0;Data Source=AcadManager.accdb";
				 con=gcnew OleDb::OleDbConnection(connString);
				 String^ com="Select * from Notification where SendDate between '" + start_dateTimePicker->Text + "' and '" + end_dateTimePicker->Text + "'"; 
				 OleDb::OleDbCommand ^cmd=gcnew OleDb::OleDbCommand(com,con);
				 con->Open(); 
				 OleDb::OleDbDataAdapter^ adapter=gcnew OleDb::OleDbDataAdapter();
				 adapter->SelectCommand=cmd;
				 DataTable^ data =gcnew DataTable();
				 adapter->Fill(data);
				 OleDb::OleDbDataReader ^readerData=cmd->ExecuteReader();
				 if(readerData->Read()){
					 BindingSource^ bSource=gcnew BindingSource();
					 bSource->DataSource=data;
					 dataGridView1->DataSource=bSource;
					 adapter->Update(data);
					 con->Close();
				 }
				 else{
					 MessageBox::Show("No Notifications are present");
					 con->Close();

				 }	
			 }
	};
}
