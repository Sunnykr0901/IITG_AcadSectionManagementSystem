#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace projectUI {

	/// <summary>
	/// Summary for DetailedStudentProfile
	/// </summary>
	public ref class DetailedStudentProfile : public System::Windows::Forms::UserControl
	{
	public:
		String ^usrnm;

	public:
		DetailedStudentProfile(String ^text)
		{
			InitializeComponent();
			usrnm=text;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DetailedStudentProfile()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  m;
	protected: 
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  editBtn;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  x;
	private: System::Windows::Forms::TextBox^  w;
	private: System::Windows::Forms::TextBox^  v;
	private: System::Windows::Forms::TextBox^  u;
	private: System::Windows::Forms::TextBox^  t;
	private: System::Windows::Forms::TextBox^  l;
	private: System::Windows::Forms::TextBox^  k;
	private: System::Windows::Forms::TextBox^  j;
	private: System::Windows::Forms::TextBox^  i;
	private: System::Windows::Forms::TextBox^  h;
	private: System::Windows::Forms::TextBox^  g;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  backBtn;
	private: System::Windows::Forms::Button^  UpdateBtn;
	private: System::Windows::Forms::TextBox^  s;
	private: System::Windows::Forms::TextBox^  r;
	private: System::Windows::Forms::TextBox^  q;
	private: System::Windows::Forms::TextBox^  p;
	private: System::Windows::Forms::TextBox^  o;
	private: System::Windows::Forms::TextBox^  n;
	private: System::Windows::Forms::TextBox^  f;
	private: System::Windows::Forms::TextBox^  e;
	private: System::Windows::Forms::TextBox^  d;
	private: System::Windows::Forms::TextBox^  c;
	private: System::Windows::Forms::TextBox^  b;
	private: System::Windows::Forms::TextBox^  a;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;




















































	protected: 

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
			this->m = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->editBtn = (gcnew System::Windows::Forms::Button());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->x = (gcnew System::Windows::Forms::TextBox());
			this->w = (gcnew System::Windows::Forms::TextBox());
			this->v = (gcnew System::Windows::Forms::TextBox());
			this->u = (gcnew System::Windows::Forms::TextBox());
			this->t = (gcnew System::Windows::Forms::TextBox());
			this->l = (gcnew System::Windows::Forms::TextBox());
			this->k = (gcnew System::Windows::Forms::TextBox());
			this->j = (gcnew System::Windows::Forms::TextBox());
			this->i = (gcnew System::Windows::Forms::TextBox());
			this->h = (gcnew System::Windows::Forms::TextBox());
			this->g = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->backBtn = (gcnew System::Windows::Forms::Button());
			this->UpdateBtn = (gcnew System::Windows::Forms::Button());
			this->s = (gcnew System::Windows::Forms::TextBox());
			this->r = (gcnew System::Windows::Forms::TextBox());
			this->q = (gcnew System::Windows::Forms::TextBox());
			this->p = (gcnew System::Windows::Forms::TextBox());
			this->o = (gcnew System::Windows::Forms::TextBox());
			this->n = (gcnew System::Windows::Forms::TextBox());
			this->f = (gcnew System::Windows::Forms::TextBox());
			this->e = (gcnew System::Windows::Forms::TextBox());
			this->d = (gcnew System::Windows::Forms::TextBox());
			this->c = (gcnew System::Windows::Forms::TextBox());
			this->b = (gcnew System::Windows::Forms::TextBox());
			this->a = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// m
			// 
			this->m->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->m->Location = System::Drawing::Point(444, 28);
			this->m->Name = L"m";
			this->m->Size = System::Drawing::Size(100, 21);
			this->m->TabIndex = 176;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(319, 30);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(44, 16);
			this->label8->TabIndex = 175;
			this->label8->Text = L"Hostel";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// editBtn
			// 
			this->editBtn->BackColor = System::Drawing::Color::Teal;
			this->editBtn->FlatAppearance->BorderSize = 0;
			this->editBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->editBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->editBtn->ForeColor = System::Drawing::Color::White;
			this->editBtn->Location = System::Drawing::Point(175, 556);
			this->editBtn->Margin = System::Windows::Forms::Padding(0);
			this->editBtn->Name = L"editBtn";
			this->editBtn->Size = System::Drawing::Size(137, 51);
			this->editBtn->TabIndex = 174;
			this->editBtn->Text = L"EDIT";
			this->editBtn->UseVisualStyleBackColor = false;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(81, 460);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(51, 16);
			this->label25->TabIndex = 173;
			this->label25->Text = L"Gender";
			this->label25->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(81, 417);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(87, 16);
			this->label26->TabIndex = 172;
			this->label26->Text = L"Birth category";
			this->label26->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(81, 374);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(68, 16);
			this->label27->TabIndex = 171;
			this->label27->Text = L"Nationality";
			this->label27->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(318, 503);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(76, 16);
			this->label14->TabIndex = 170;
			this->label14->Text = L"Passport no";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(318, 460);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(68, 16);
			this->label15->TabIndex = 169;
			this->label15->Text = L"Aadhar no";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(318, 417);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(45, 16);
			this->label16->TabIndex = 168;
			this->label16->Text = L"weight";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(318, 374);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(45, 16);
			this->label17->TabIndex = 167;
			this->label17->Text = L"Height";
			this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(318, 331);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(74, 16);
			this->label18->TabIndex = 166;
			this->label18->Text = L"Bloodgroup";
			this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(318, 202);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(113, 16);
			this->label19->TabIndex = 165;
			this->label19->Text = L"Admission session";
			this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(318, 245);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(89, 16);
			this->label20->TabIndex = 164;
			this->label20->Text = L"Father\'s name";
			this->label20->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(318, 288);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(93, 16);
			this->label21->TabIndex = 163;
			this->label21->Text = L"Mother\'s name";
			this->label21->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(81, 503);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(33, 16);
			this->label22->TabIndex = 162;
			this->label22->Text = L"DOB";
			this->label22->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(318, 159);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(57, 16);
			this->label23->TabIndex = 161;
			this->label23->Text = L"Pincode:";
			this->label23->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(317, 73);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(63, 16);
			this->label12->TabIndex = 160;
			this->label12->Text = L"RoomNO:";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(318, 116);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(60, 16);
			this->label11->TabIndex = 159;
			this->label11->Text = L"Address:";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(81, 331);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 16);
			this->label2->TabIndex = 158;
			this->label2->Text = L"Programme";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(81, 288);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 16);
			this->label1->TabIndex = 157;
			this->label1->Text = L"Department";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// x
			// 
			this->x->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->x->Location = System::Drawing::Point(445, 501);
			this->x->Name = L"x";
			this->x->Size = System::Drawing::Size(100, 21);
			this->x->TabIndex = 156;
			// 
			// w
			// 
			this->w->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->w->Location = System::Drawing::Point(445, 458);
			this->w->Name = L"w";
			this->w->Size = System::Drawing::Size(100, 21);
			this->w->TabIndex = 155;
			// 
			// v
			// 
			this->v->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->v->Location = System::Drawing::Point(445, 415);
			this->v->Name = L"v";
			this->v->Size = System::Drawing::Size(100, 21);
			this->v->TabIndex = 154;
			// 
			// u
			// 
			this->u->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->u->Location = System::Drawing::Point(445, 372);
			this->u->Name = L"u";
			this->u->Size = System::Drawing::Size(100, 21);
			this->u->TabIndex = 153;
			// 
			// t
			// 
			this->t->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t->Location = System::Drawing::Point(445, 329);
			this->t->Name = L"t";
			this->t->Size = System::Drawing::Size(100, 21);
			this->t->TabIndex = 152;
			// 
			// l
			// 
			this->l->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l->Location = System::Drawing::Point(196, 501);
			this->l->Name = L"l";
			this->l->Size = System::Drawing::Size(100, 21);
			this->l->TabIndex = 151;
			// 
			// k
			// 
			this->k->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->k->Location = System::Drawing::Point(196, 458);
			this->k->Name = L"k";
			this->k->Size = System::Drawing::Size(100, 21);
			this->k->TabIndex = 150;
			// 
			// j
			// 
			this->j->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->j->Location = System::Drawing::Point(196, 415);
			this->j->Name = L"j";
			this->j->Size = System::Drawing::Size(100, 21);
			this->j->TabIndex = 149;
			// 
			// i
			// 
			this->i->Enabled = false;
			this->i->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->i->Location = System::Drawing::Point(196, 372);
			this->i->Name = L"i";
			this->i->Size = System::Drawing::Size(100, 21);
			this->i->TabIndex = 148;
			// 
			// h
			// 
			this->h->Enabled = false;
			this->h->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->h->Location = System::Drawing::Point(196, 329);
			this->h->Name = L"h";
			this->h->Size = System::Drawing::Size(100, 21);
			this->h->TabIndex = 147;
			// 
			// g
			// 
			this->g->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->g->Location = System::Drawing::Point(196, 286);
			this->g->Name = L"g";
			this->g->Size = System::Drawing::Size(100, 21);
			this->g->TabIndex = 146;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(81, 245);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(105, 16);
			this->label9->TabIndex = 145;
			this->label9->Text = L"Mobile Number :";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(81, 116);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(77, 16);
			this->label3->TabIndex = 144;
			this->label3->Text = L"Last Name :";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// backBtn
			// 
			this->backBtn->BackColor = System::Drawing::Color::Teal;
			this->backBtn->FlatAppearance->BorderSize = 0;
			this->backBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->backBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->backBtn->ForeColor = System::Drawing::Color::White;
			this->backBtn->Location = System::Drawing::Point(345, 556);
			this->backBtn->Margin = System::Windows::Forms::Padding(0);
			this->backBtn->Name = L"backBtn";
			this->backBtn->Size = System::Drawing::Size(137, 51);
			this->backBtn->TabIndex = 143;
			this->backBtn->Text = L"BACK";
			this->backBtn->UseVisualStyleBackColor = false;
			// 
			// UpdateBtn
			// 
			this->UpdateBtn->BackColor = System::Drawing::Color::Teal;
			this->UpdateBtn->FlatAppearance->BorderSize = 0;
			this->UpdateBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->UpdateBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->UpdateBtn->ForeColor = System::Drawing::Color::White;
			this->UpdateBtn->Location = System::Drawing::Point(175, 556);
			this->UpdateBtn->Margin = System::Windows::Forms::Padding(0);
			this->UpdateBtn->Name = L"UpdateBtn";
			this->UpdateBtn->Size = System::Drawing::Size(137, 51);
			this->UpdateBtn->TabIndex = 142;
			this->UpdateBtn->Text = L"UPDATE";
			this->UpdateBtn->UseVisualStyleBackColor = false;
			// 
			// s
			// 
			this->s->Enabled = false;
			this->s->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->s->Location = System::Drawing::Point(445, 286);
			this->s->Name = L"s";
			this->s->Size = System::Drawing::Size(100, 21);
			this->s->TabIndex = 141;
			// 
			// r
			// 
			this->r->Enabled = false;
			this->r->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->r->Location = System::Drawing::Point(445, 243);
			this->r->Name = L"r";
			this->r->Size = System::Drawing::Size(100, 21);
			this->r->TabIndex = 140;
			// 
			// q
			// 
			this->q->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->q->Location = System::Drawing::Point(445, 200);
			this->q->Name = L"q";
			this->q->Size = System::Drawing::Size(100, 21);
			this->q->TabIndex = 139;
			// 
			// p
			// 
			this->p->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->p->Location = System::Drawing::Point(445, 157);
			this->p->Name = L"p";
			this->p->Size = System::Drawing::Size(100, 21);
			this->p->TabIndex = 138;
			// 
			// o
			// 
			this->o->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->o->Location = System::Drawing::Point(445, 114);
			this->o->Name = L"o";
			this->o->Size = System::Drawing::Size(100, 21);
			this->o->TabIndex = 137;
			// 
			// n
			// 
			this->n->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->n->Location = System::Drawing::Point(444, 71);
			this->n->Name = L"n";
			this->n->Size = System::Drawing::Size(100, 21);
			this->n->TabIndex = 136;
			// 
			// f
			// 
			this->f->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->f->Location = System::Drawing::Point(196, 243);
			this->f->Name = L"f";
			this->f->Size = System::Drawing::Size(100, 21);
			this->f->TabIndex = 135;
			// 
			// e
			// 
			this->e->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->e->Location = System::Drawing::Point(196, 200);
			this->e->Name = L"e";
			this->e->Size = System::Drawing::Size(100, 21);
			this->e->TabIndex = 134;
			// 
			// d
			// 
			this->d->Enabled = false;
			this->d->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->d->Location = System::Drawing::Point(196, 157);
			this->d->Name = L"d";
			this->d->Size = System::Drawing::Size(100, 21);
			this->d->TabIndex = 133;
			// 
			// c
			// 
			this->c->Enabled = false;
			this->c->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->c->Location = System::Drawing::Point(196, 114);
			this->c->Name = L"c";
			this->c->Size = System::Drawing::Size(100, 21);
			this->c->TabIndex = 132;
			// 
			// b
			// 
			this->b->Enabled = false;
			this->b->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->b->Location = System::Drawing::Point(195, 71);
			this->b->Name = L"b";
			this->b->Size = System::Drawing::Size(100, 21);
			this->b->TabIndex = 131;
			// 
			// a
			// 
			this->a->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->a->Enabled = false;
			this->a->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->a->Location = System::Drawing::Point(195, 28);
			this->a->Name = L"a";
			this->a->Size = System::Drawing::Size(100, 21);
			this->a->TabIndex = 130;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(81, 159);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(88, 16);
			this->label7->TabIndex = 129;
			this->label7->Text = L"Roll Number :";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(81, 202);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(110, 16);
			this->label6->TabIndex = 128;
			this->label6->Text = L"Secondary Email :";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(80, 73);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(93, 16);
			this->label5->TabIndex = 127;
			this->label5->Text = L"Middle Name :";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Lucida Sans Unicode", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(80, 30);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(78, 16);
			this->label4->TabIndex = 126;
			this->label4->Text = L"First Name :";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// DetailedStudentProfile
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->AutoScrollMargin = System::Drawing::Size(0, 50);
			this->BackColor = System::Drawing::SystemColors::Control;
			this->Controls->Add(this->m);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->editBtn);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->x);
			this->Controls->Add(this->w);
			this->Controls->Add(this->v);
			this->Controls->Add(this->u);
			this->Controls->Add(this->t);
			this->Controls->Add(this->l);
			this->Controls->Add(this->k);
			this->Controls->Add(this->j);
			this->Controls->Add(this->i);
			this->Controls->Add(this->h);
			this->Controls->Add(this->g);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->backBtn);
			this->Controls->Add(this->UpdateBtn);
			this->Controls->Add(this->s);
			this->Controls->Add(this->r);
			this->Controls->Add(this->q);
			this->Controls->Add(this->p);
			this->Controls->Add(this->o);
			this->Controls->Add(this->n);
			this->Controls->Add(this->f);
			this->Controls->Add(this->e);
			this->Controls->Add(this->d);
			this->Controls->Add(this->c);
			this->Controls->Add(this->b);
			this->Controls->Add(this->a);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Name = L"DetailedStudentProfile";
			this->Size = System::Drawing::Size(674, 443);
			this->Load += gcnew System::EventHandler(this, &DetailedStudentProfile::DetailedStudentProfile_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void DetailedStudentProfile_Load(System::Object^  sender, System::EventArgs^  e) {
			 
			 this->a->Enabled = false;
			 this->b->Enabled = false;
			 this->c->Enabled = false;
			 this->d->Enabled = false;
			 this->e->Enabled = false;
			 this->f->Enabled = false;
			 this->g->Enabled = false;
			 this->h->Enabled = false;
			 this->i->Enabled = false;
			 this->j->Enabled = false;
			 this->k->Enabled = false;
			 this->l->Enabled = false;
			 this->m->Enabled = false;
			 this->n->Enabled = false;
			 this->o->Enabled = false;
			 this->p->Enabled = false;
			 this->q->Enabled = false;
			 this->r->Enabled = false;
			 this->s->Enabled = false;
			 this->t->Enabled = false;
			 this->u->Enabled = false;
			 this->v->Enabled = false;
			 this->w->Enabled = false;
			 this->x->Enabled = false;

			 OleDb::OleDbConnection ^con;	 
			 try{				
				 String^ connString="Provider=Microsoft.ACE.OLEDB.12.0;Data Source=AcadManager.accdb";

				 con=gcnew OleDb::OleDbConnection(connString);
				 con->Open();

				 String ^ aString = "Select * from Student where [Username] ='"+usrnm+"';";
				 MessageBox::Show(aString);

				 //if(aString->Length){
				 //	Homepage::Hide();
				 //	studentform ^student=gcnew studentform();
				 //	student->ShowDialog();
				 //}
				 OleDb::OleDbCommand ^cmd=gcnew OleDb::OleDbCommand(aString,con);
				 OleDb::OleDbDataReader ^readerData=cmd->ExecuteReader();

				 while(readerData->Read())
				 {
					 a->Text=readerData->GetString(1);
					 b->Text=readerData->GetString(2);
					 c->Text=readerData->GetString(3);
					 d->Text=readerData->GetString(4);
					 //e->Text=readerData->GetString(6);
					 f->Text=readerData->GetString(7);
					 g->Text=readerData->GetString(8);
					 h->Text=readerData->GetString(9);
					 i->Text=readerData->GetString(10);
					 j->Text=readerData->GetString(11);
					 k->Text=readerData->GetString(12);
					 l->Text=readerData->GetString(17);
					 m->Text=readerData->GetString(13);
					 n->Text=readerData->GetString(14);
					 o->Text=readerData->GetString(15);
					 p->Text=readerData->GetString(16);
					 q->Text=readerData->GetString(23);
					 r->Text=readerData->GetString(26);
					 s->Text=readerData->GetString(30);
					 t->Text=readerData->GetString(44);
					 u->Text=readerData->GetString(45);
					 v->Text=readerData->GetString(46);
					 w->Text=readerData->GetString(47);
					 x->Text=readerData->GetString(50);
					 /*label1->Text=readerData->GetString(1)+readerData->GetString(3);
					 label2->Text=readerData->GetString(4);
					 label3->Text=readerData->GetString(9)+", "+readerData->GetString(8);
					 LblIITGEmail->Text=readerData->GetString(0)+"@iitg.ac.in";
					 LblNationality->Text=readerData->GetString(10);
					 LblGender->Text=readerData->GetString(12);
					 LblHostel->Text=readerData->GetString(13);*/
				 }
				 con->Close();
			 }
			 catch(Exception ^ ex)
			 {
				 MessageBox::Show(ex->Message);
				 con->Close();
			 }
		 }
private: System::Void label11_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label22_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label20_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label16_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label15_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void updateBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->editBtn->Show();
			 this->UpdateBtn->Hide();
			 
			 this->a->Enabled = false;
			 this->b->Enabled = false;
			 this->c->Enabled = false;
			 this->d->Enabled = false;
			 this->e->Enabled = false;
			 this->f->Enabled = false;
			 this->g->Enabled = false;
			 this->h->Enabled = false;
			 this->i->Enabled = false;
			 this->j->Enabled = false;
			 this->k->Enabled = false;
			 this->l->Enabled = false;
			 this->m->Enabled = false;
			 this->n->Enabled = false;
			 this->o->Enabled = false;
			 this->p->Enabled = false;
			 this->q->Enabled = false;
			 this->r->Enabled = false;
			 this->s->Enabled = false;
			 this->t->Enabled = false;
			 this->u->Enabled = false;
			 this->v->Enabled = false;
			 this->w->Enabled = false;
			 this->x->Enabled = false;
		 }
private: System::Void backBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 /*Back to StudentProfile UserControl*/
		 }
private: System::Void editBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->a->Enabled = false;
			 this->b->Enabled = false;
			 this->c->Enabled = false;
			 this->d->Enabled = false;
			 this->e->Enabled = true;
			 this->f->Enabled = true;
			 this->g->Enabled = true;
			 this->h->Enabled = false;
			 this->i->Enabled = true;
			 this->j->Enabled = true;
			 this->k->Enabled = true;
			 this->l->Enabled = false;
			 this->m->Enabled = true;
			 this->n->Enabled = true;
			 this->o->Enabled = true;
			 this->p->Enabled = true;
			 this->q->Enabled = false;
			 this->r->Enabled = true;
			 this->s->Enabled = true;
			 this->t->Enabled = true;
			 this->u->Enabled = true;
			 this->v->Enabled = true;
			 this->w->Enabled = true;
			 this->x->Enabled = true;

			 this->editBtn->Hide();
			 this->UpdateBtn->Show();
		 }
};
}
