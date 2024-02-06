#pragma once

namespace IUTMMSPRoject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AppointingDoctor
	/// </summary>
	public ref class AppointingDoctor : public System::Windows::Forms::Form
	{
	public:
		AppointingDoctor(void)
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
		~AppointingDoctor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lPatid;
	private: System::Windows::Forms::Label^ lname;
	private: System::Windows::Forms::Label^ lShift;
	private: System::Windows::Forms::Label^ ldrname;
	private: System::Windows::Forms::Label^ ldrid;
	private: System::Windows::Forms::Button^ btnappoint;
	private: System::Windows::Forms::Button^ btncancel;


	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AppointingDoctor::typeid));
			this->lPatid = (gcnew System::Windows::Forms::Label());
			this->lname = (gcnew System::Windows::Forms::Label());
			this->lShift = (gcnew System::Windows::Forms::Label());
			this->ldrname = (gcnew System::Windows::Forms::Label());
			this->ldrid = (gcnew System::Windows::Forms::Label());
			this->btnappoint = (gcnew System::Windows::Forms::Button());
			this->btncancel = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// lPatid
			// 
			this->lPatid->AutoSize = true;
			this->lPatid->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lPatid->Location = System::Drawing::Point(69, 61);
			this->lPatid->Name = L"lPatid";
			this->lPatid->Size = System::Drawing::Size(77, 20);
			this->lPatid->TabIndex = 0;
			this->lPatid->Text = L"Patient Id";
			// 
			// lname
			// 
			this->lname->AutoSize = true;
			this->lname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lname->Location = System::Drawing::Point(69, 98);
			this->lname->Name = L"lname";
			this->lname->Size = System::Drawing::Size(51, 20);
			this->lname->TabIndex = 1;
			this->lname->Text = L"Name";
			// 
			// lShift
			// 
			this->lShift->AutoSize = true;
			this->lShift->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lShift->Location = System::Drawing::Point(69, 137);
			this->lShift->Name = L"lShift";
			this->lShift->Size = System::Drawing::Size(137, 20);
			this->lShift->TabIndex = 2;
			this->lShift->Text = L"Appointment Shift";
			// 
			// ldrname
			// 
			this->ldrname->AutoSize = true;
			this->ldrname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ldrname->Location = System::Drawing::Point(69, 180);
			this->ldrname->Name = L"ldrname";
			this->ldrname->Size = System::Drawing::Size(103, 20);
			this->ldrname->TabIndex = 3;
			this->ldrname->Text = L"Doctor Name";
			// 
			// ldrid
			// 
			this->ldrid->AutoSize = true;
			this->ldrid->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ldrid->Location = System::Drawing::Point(69, 218);
			this->ldrid->Name = L"ldrid";
			this->ldrid->Size = System::Drawing::Size(44, 20);
			this->ldrid->TabIndex = 4;
			this->ldrid->Text = L"Dr Id";
			// 
			// btnappoint
			// 
			this->btnappoint->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnappoint->Location = System::Drawing::Point(225, 271);
			this->btnappoint->Name = L"btnappoint";
			this->btnappoint->Size = System::Drawing::Size(103, 47);
			this->btnappoint->TabIndex = 5;
			this->btnappoint->Text = L"Appoint ";
			this->btnappoint->UseVisualStyleBackColor = true;
			// 
			// btncancel
			// 
			this->btncancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btncancel->Location = System::Drawing::Point(485, 271);
			this->btncancel->Name = L"btncancel";
			this->btncancel->Size = System::Drawing::Size(96, 47);
			this->btncancel->TabIndex = 6;
			this->btncancel->Text = L"Cancel";
			this->btncancel->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(225, 61);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(356, 20);
			this->textBox1->TabIndex = 7;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(225, 137);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(356, 20);
			this->textBox2->TabIndex = 8;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(225, 180);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(356, 20);
			this->textBox3->TabIndex = 9;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(225, 100);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(356, 20);
			this->textBox4->TabIndex = 10;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(225, 218);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(356, 20);
			this->textBox5->TabIndex = 11;
			// 
			// AppointingDoctor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(853, 464);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->btncancel);
			this->Controls->Add(this->btnappoint);
			this->Controls->Add(this->ldrid);
			this->Controls->Add(this->ldrname);
			this->Controls->Add(this->lShift);
			this->Controls->Add(this->lname);
			this->Controls->Add(this->lPatid);
			this->Name = L"AppointingDoctor";
			this->Text = L"AppointingDoctor";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
