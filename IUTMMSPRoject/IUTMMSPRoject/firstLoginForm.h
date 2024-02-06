#pragma once
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
	/// Summary for firstLoginForm
	/// </summary>
	public ref class firstLoginForm : public System::Windows::Forms::Form
	{
	public:
		firstLoginForm(void)
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
		~firstLoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ login;
	private: System::Windows::Forms::Label^ LavName;
	private: System::Windows::Forms::Label^ ID;
	private: System::Windows::Forms::TextBox^ TbId;
	protected:

	protected:



	private: System::Windows::Forms::TextBox^ tbName;
	private: System::Windows::Forms::TextBox^ TbEmail;
	private: System::Windows::Forms::TextBox^ Tbpassword;


	private: System::Windows::Forms::Label^ Emailbtn;
	private: System::Windows::Forms::Label^ btnpassword;
	private: System::Windows::Forms::Button^ btnLogin;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Button^ Btnregister;
	private: System::Windows::Forms::Button^ Btnforgottenpass;










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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(firstLoginForm::typeid));
			this->login = (gcnew System::Windows::Forms::Label());
			this->LavName = (gcnew System::Windows::Forms::Label());
			this->ID = (gcnew System::Windows::Forms::Label());
			this->TbId = (gcnew System::Windows::Forms::TextBox());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->TbEmail = (gcnew System::Windows::Forms::TextBox());
			this->Tbpassword = (gcnew System::Windows::Forms::TextBox());
			this->Emailbtn = (gcnew System::Windows::Forms::Label());
			this->btnpassword = (gcnew System::Windows::Forms::Label());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->Btnregister = (gcnew System::Windows::Forms::Button());
			this->Btnforgottenpass = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// login
			// 
			this->login->AutoSize = true;
			this->login->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->login->Location = System::Drawing::Point(347, 9);
			this->login->Name = L"login";
			this->login->Size = System::Drawing::Size(65, 25);
			this->login->TabIndex = 0;
			this->login->Text = L"LogIn";
			this->login->Click += gcnew System::EventHandler(this, &firstLoginForm::label1_Click);
			// 
			// LavName
			// 
			this->LavName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LavName->Location = System::Drawing::Point(112, 42);
			this->LavName->Name = L"LavName";
			this->LavName->Size = System::Drawing::Size(61, 24);
			this->LavName->TabIndex = 1;
			this->LavName->Text = L"Name";
			// 
			// ID
			// 
			this->ID->AutoSize = true;
			this->ID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ID->Location = System::Drawing::Point(127, 82);
			this->ID->Name = L"ID";
			this->ID->Size = System::Drawing::Size(27, 24);
			this->ID->TabIndex = 2;
			this->ID->Text = L"ID";
			// 
			// TbId
			// 
			this->TbId->Location = System::Drawing::Point(202, 87);
			this->TbId->Name = L"TbId";
			this->TbId->Size = System::Drawing::Size(383, 20);
			this->TbId->TabIndex = 3;
			// 
			// tbName
			// 
			this->tbName->BackColor = System::Drawing::SystemColors::Window;
			this->tbName->Location = System::Drawing::Point(202, 42);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(383, 20);
			this->tbName->TabIndex = 4;
			// 
			// TbEmail
			// 
			this->TbEmail->Location = System::Drawing::Point(202, 140);
			this->TbEmail->Name = L"TbEmail";
			this->TbEmail->Size = System::Drawing::Size(383, 20);
			this->TbEmail->TabIndex = 5;
			// 
			// Tbpassword
			// 
			this->Tbpassword->Location = System::Drawing::Point(210, 192);
			this->Tbpassword->Name = L"Tbpassword";
			this->Tbpassword->PasswordChar = '*';
			this->Tbpassword->Size = System::Drawing::Size(383, 20);
			this->Tbpassword->TabIndex = 6;
			// 
			// Emailbtn
			// 
			this->Emailbtn->AutoSize = true;
			this->Emailbtn->BackColor = System::Drawing::SystemColors::Menu;
			this->Emailbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Emailbtn->Location = System::Drawing::Point(116, 135);
			this->Emailbtn->Name = L"Emailbtn";
			this->Emailbtn->Size = System::Drawing::Size(57, 24);
			this->Emailbtn->TabIndex = 7;
			this->Emailbtn->Text = L"Email";
			// 
			// btnpassword
			// 
			this->btnpassword->AutoSize = true;
			this->btnpassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnpassword->Location = System::Drawing::Point(103, 187);
			this->btnpassword->Name = L"btnpassword";
			this->btnpassword->Size = System::Drawing::Size(92, 24);
			this->btnpassword->TabIndex = 8;
			this->btnpassword->Text = L"Password";
			// 
			// btnLogin
			// 
			this->btnLogin->Location = System::Drawing::Point(210, 293);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(78, 23);
			this->btnLogin->TabIndex = 9;
			this->btnLogin->Text = L"Login";
			this->btnLogin->UseVisualStyleBackColor = true;
			this->btnLogin->Click += gcnew System::EventHandler(this, &firstLoginForm::btnLogin_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(441, 293);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(75, 23);
			this->btnCancel->TabIndex = 10;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &firstLoginForm::btnCancel_Click);
			// 
			// Btnregister
			// 
			this->Btnregister->Location = System::Drawing::Point(325, 293);
			this->Btnregister->Name = L"Btnregister";
			this->Btnregister->Size = System::Drawing::Size(75, 23);
			this->Btnregister->TabIndex = 11;
			this->Btnregister->Text = L"Register";
			this->Btnregister->UseVisualStyleBackColor = true;
			this->Btnregister->Click += gcnew System::EventHandler(this, &firstLoginForm::Btnregister_Click);
			// 
			// Btnforgottenpass
			// 
			this->Btnforgottenpass->Location = System::Drawing::Point(266, 231);
			this->Btnforgottenpass->Name = L"Btnforgottenpass";
			this->Btnforgottenpass->Size = System::Drawing::Size(188, 23);
			this->Btnforgottenpass->TabIndex = 12;
			this->Btnforgottenpass->Text = L"Forgotten Password";
			this->Btnforgottenpass->UseVisualStyleBackColor = true;
			this->Btnforgottenpass->Click += gcnew System::EventHandler(this, &firstLoginForm::Btnforgottenpass_Click);
			// 
			// firstLoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(823, 503);
			this->Controls->Add(this->Btnforgottenpass);
			this->Controls->Add(this->Btnregister);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnLogin);
			this->Controls->Add(this->btnpassword);
			this->Controls->Add(this->Emailbtn);
			this->Controls->Add(this->Tbpassword);
			this->Controls->Add(this->TbEmail);
			this->Controls->Add(this->tbName);
			this->Controls->Add(this->TbId);
			this->Controls->Add(this->ID);
			this->Controls->Add(this->LavName);
			this->Controls->Add(this->login);
			this->Name = L"firstLoginForm";
			this->Text = L"\t\t\t\tFirstLogin\t\t\t\t";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	   public: UserInfo^ user=nullptr;
			 bool SwitchLogin = false;
private: System::Void btnLogin_Click(System::Object^ sender, System::EventArgs^ e) {
	this->SwitchLogin = true;
	String^ email = this->TbEmail->Text;
	String^ password = this->Tbpassword->Text;
	String^ id = this->TbId->Text;
	if (email->Length == 0 || password->Length == 0 || id->Length== 0)
	{
		MessageBox::Show("Please Enter at least email and password and Id ", "Email or Password Empty ", MessageBoxButtons::OK);
			return;
	}
	//using namespace System::Data::SqlClient;
	try
	{
		String^ connect = "Data Source=LAPTOP-UGQ89HI6\\SQLEXPRESS;Initial Catalog=oopproject;Integrated Security=True;Encrypt=False";
		SqlConnection sqlconnect(connect);
		sqlconnect.Open();
		String^ sqlQuery = "Select * from UserInfo Where email=@email AND password=@pwd;";
		SqlCommand Command(sqlQuery, % sqlconnect);
		Command.Parameters->AddWithValue("@email", email);
		Command.Parameters->AddWithValue("@pwd", password);
		SqlDataReader^ reader = Command.ExecuteReader();   

		if (reader->Read())
		{
			user = gcnew UserInfo;
			user->Id = reader->GetString(0);
			user->Name = reader->GetString(3);
			user->Email = reader->GetString(1);
			user->Phone = reader->GetString(5);
			user->Password = reader->GetString(2);
			user->Address = reader->GetString(4);
			this->Close();

		 }
		else {
			MessageBox::Show("Email and password is incorrect ", "Error", MessageBoxButtons::OK);
		}

	}
	catch (Exception^ e)
	{
		MessageBox::Show("Failed to connect ", "Database Connection Error", MessageBoxButtons::OK);
	}
	

}
private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
} 

	 public: bool swithregister = false;

private: System::Void Btnregister_Click(System::Object^ sender, System::EventArgs^ e) {
	this->swithregister = true;
	this->Close();

}


private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
public: bool switchforgotten = false;
private: System::Void Btnforgottenpass_Click(System::Object^ sender, System::EventArgs^ e) {
	this->switchforgotten = true;
	this->Close();

}
};
}
