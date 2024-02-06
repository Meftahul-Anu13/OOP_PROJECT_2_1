#pragma once
#include "DoctoInfo.h"
#include"UserInfo.h"
namespace IUTMMSPRoject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for Doctorlogin
	/// </summary>
	public ref class Doctorlogin : public System::Windows::Forms::Form
	{
	public:
		Doctorlogin(void)
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
		~Doctorlogin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Lname;
	private: System::Windows::Forms::Label^ LId;

	private: System::Windows::Forms::TextBox^ tbId;
	private: System::Windows::Forms::TextBox^ tbName;
	protected:

	protected:




	private: System::Windows::Forms::Label^ lPassword;
	private: System::Windows::Forms::TextBox^ Tbpassword;

	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Button^ btnLogin;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Doctorlogin::typeid));
			this->Lname = (gcnew System::Windows::Forms::Label());
			this->LId = (gcnew System::Windows::Forms::Label());
			this->tbId = (gcnew System::Windows::Forms::TextBox());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->lPassword = (gcnew System::Windows::Forms::Label());
			this->Tbpassword = (gcnew System::Windows::Forms::TextBox());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Lname
			// 
			this->Lname->AutoSize = true;
			this->Lname->BackColor = System::Drawing::Color::White;
			this->Lname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lname->Location = System::Drawing::Point(86, 122);
			this->Lname->Name = L"Lname";
			this->Lname->Size = System::Drawing::Size(65, 24);
			this->Lname->TabIndex = 0;
			this->Lname->Text = L"Name";
			// 
			// LId
			// 
			this->LId->AutoSize = true;
			this->LId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LId->Location = System::Drawing::Point(122, 73);
			this->LId->Name = L"LId";
			this->LId->Size = System::Drawing::Size(29, 24);
			this->LId->TabIndex = 1;
			this->LId->Text = L"ID";
			// 
			// tbId
			// 
			this->tbId->Location = System::Drawing::Point(224, 78);
			this->tbId->Name = L"tbId";
			this->tbId->Size = System::Drawing::Size(349, 20);
			this->tbId->TabIndex = 3;
			// 
			// tbName
			// 
			this->tbName->Location = System::Drawing::Point(224, 126);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(349, 20);
			this->tbName->TabIndex = 4;
			// 
			// lPassword
			// 
			this->lPassword->AutoSize = true;
			this->lPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lPassword->Location = System::Drawing::Point(51, 182);
			this->lPassword->Name = L"lPassword";
			this->lPassword->Size = System::Drawing::Size(100, 24);
			this->lPassword->TabIndex = 5;
			this->lPassword->Text = L"Password";
			// 
			// Tbpassword
			// 
			this->Tbpassword->Location = System::Drawing::Point(224, 182);
			this->Tbpassword->Name = L"Tbpassword";
			this->Tbpassword->Size = System::Drawing::Size(349, 20);
			this->Tbpassword->TabIndex = 6;
			// 
			// btnCancel
			// 
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->Location = System::Drawing::Point(487, 241);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(86, 29);
			this->btnCancel->TabIndex = 7;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &Doctorlogin::btnCancel_Click);
			// 
			// btnLogin
			// 
			this->btnLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLogin->Location = System::Drawing::Point(224, 241);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(80, 29);
			this->btnLogin->TabIndex = 8;
			this->btnLogin->Text = L"Login";
			this->btnLogin->UseVisualStyleBackColor = true;
			this->btnLogin->Click += gcnew System::EventHandler(this, &Doctorlogin::btnLogin_Click);
			// 
			// Doctorlogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(806, 347);
			this->Controls->Add(this->btnLogin);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->Tbpassword);
			this->Controls->Add(this->lPassword);
			this->Controls->Add(this->tbName);
			this->Controls->Add(this->tbId);
			this->Controls->Add(this->LId);
			this->Controls->Add(this->Lname);
			this->Name = L"Doctorlogin";
			this->Text = L"Doctorlogin";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public:bool switchLogin = false;
 public: DoctoInfo^ userdr = nullptr;
private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
public: System::Void btnLogin_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ name = this->tbName->Text;
	String^ password = this->Tbpassword->Text;
	String^ id = this->tbId->Text;
	if (name->Length == 0 || password->Length == 0 || id->Length == 0)
	{
		MessageBox::Show("Please Enter all information ", "error", MessageBoxButtons::OK);
		return;
	}
	
	try
	{
		String^ connect = "Data Source=LAPTOP-UGQ89HI6\\SQLEXPRESS;Initial Catalog=oopproject;Integrated Security=True;Encrypt=False";
		//Data Source=LAPTOP-UGQ89HI6\SQLEXPRESS;Initial Catalog=oopproject;Integrated Security=True;Encrypt=False
		SqlConnection sqlconnect(connect);
		sqlconnect.Open();

		String^ sqlQuery = "SELECT * FROM DoctoInfo WHERE Id=@id AND password=@pwd";
		SqlCommand command(sqlQuery, % sqlconnect);
		command.Parameters->AddWithValue("@id", id);
		command.Parameters->AddWithValue("@pwd", password);
		SqlDataReader^ reader = command.ExecuteReader();
		//int ans = reader->Read();

		if (reader->Read())
		{
			userdr = gcnew DoctoInfo;
			userdr->Id = reader->GetString(0);
			userdr->Name = reader->GetString(1);
			userdr->Email = reader->GetString(2);
			userdr->Phone = reader->GetString(5);
			userdr->Password = reader->GetString(4);
			userdr->specialist = reader->GetString(3);
			userdr->position = reader->GetString(6);
			this->switchLogin = true;
			this->Close();

		}
		else {
		
			MessageBox::Show("ID and password is incorrect " , "Error", MessageBoxButtons::OK);
		}

	}
	catch (Exception^ e)
	{
		MessageBox::Show("Failed to connect ", "Database Connection Error", MessageBoxButtons::OK);
	}
	
}
};
}
