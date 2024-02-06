#pragma once

namespace IUTMMSPRoject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FindADoctor
	/// </summary>
	public ref class FindADoctor : public System::Windows::Forms::Form
	{
	public:
		FindADoctor(void)
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
		~FindADoctor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ Back;
	private: System::Windows::Forms::Label^ ldetails;

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
			this->Back = (gcnew System::Windows::Forms::Label());
			this->ldetails = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(313, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(158, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Doctors Details";
			// 
			// Back
			// 
			this->Back->AutoSize = true;
			this->Back->Location = System::Drawing::Point(61, 21);
			this->Back->Name = L"Back";
			this->Back->Size = System::Drawing::Size(32, 13);
			this->Back->TabIndex = 1;
			this->Back->Text = L"Back";
			// 
			// ldetails
			// 
			this->ldetails->AutoSize = true;
			this->ldetails->Location = System::Drawing::Point(140, 79);
			this->ldetails->Name = L"ldetails";
			this->ldetails->Size = System::Drawing::Size(37, 13);
			this->ldetails->TabIndex = 2;
			this->ldetails->Text = L"details";
			// 
			// FindADoctor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Brown;
			this->ClientSize = System::Drawing::Size(806, 383);
			this->Controls->Add(this->ldetails);
			this->Controls->Add(this->Back);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Name = L"FindADoctor";
			this->Text = L"FindADoctor";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
