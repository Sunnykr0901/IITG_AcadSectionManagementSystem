#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace projectUI {

	/// <summary>
	/// Summary for professor_sendGrades
	/// </summary>
	public ref class professor_sendGrades : public System::Windows::Forms::UserControl
	{
	public:
		professor_sendGrades(void)
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
		~professor_sendGrades()
		{
			if (components)
			{
				delete components;
			}
		}


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
			this->SuspendLayout();
			// 
			// professor_sendGrades
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Name = L"professor_sendGrades";
			this->Size = System::Drawing::Size(753, 614);
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
