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
	/// Summary for Register
	/// </summary>
	public ref class Register : public System::Windows::Forms::Form
	{
	public:
		Register(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->CenterToScreen();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Register()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ LName;
	private: System::Windows::Forms::Label^ LID;
	private: System::Windows::Forms::Label^ LEmail;
	private: System::Windows::Forms::Label^ lAdreess;
	private: System::Windows::Forms::Label^ lphone;
	private: System::Windows::Forms::LinkLabel^ LLLogin;
	private: System::Windows::Forms::TextBox^ Tbnme;
	private: System::Windows::Forms::TextBox^ TBEmail;




	private: System::Windows::Forms::TextBox^ TbId;
	private: System::Windows::Forms::TextBox^ TbAddress;
	private: System::Windows::Forms::TextBox^ TbPhone;



	private: System::Windows::Forms::Button^ Btnregister;
	private: System::Windows::Forms::Label^ LPAsswoerd;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ TbPassword;
	private: System::Windows::Forms::TextBox^ TbConPass;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Register::typeid));
			this->LName = (gcnew System::Windows::Forms::Label());
			this->LID = (gcnew System::Windows::Forms::Label());
			this->LEmail = (gcnew System::Windows::Forms::Label());
			this->lAdreess = (gcnew System::Windows::Forms::Label());
			this->lphone = (gcnew System::Windows::Forms::Label());
			this->LLLogin = (gcnew System::Windows::Forms::LinkLabel());
			this->Tbnme = (gcnew System::Windows::Forms::TextBox());
			this->TBEmail = (gcnew System::Windows::Forms::TextBox());
			this->TbId = (gcnew System::Windows::Forms::TextBox());
			this->TbAddress = (gcnew System::Windows::Forms::TextBox());
			this->TbPhone = (gcnew System::Windows::Forms::TextBox());
			this->Btnregister = (gcnew System::Windows::Forms::Button());
			this->LPAsswoerd = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->TbPassword = (gcnew System::Windows::Forms::TextBox());
			this->TbConPass = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// LName
			// 
			this->LName->AutoSize = true;
			this->LName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LName->Location = System::Drawing::Point(35, 48);
			this->LName->Name = L"LName";
			this->LName->Size = System::Drawing::Size(61, 24);
			this->LName->TabIndex = 0;
			this->LName->Text = L"Name";
			// 
			// LID
			// 
			this->LID->AutoSize = true;
			this->LID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LID->Location = System::Drawing::Point(35, 82);
			this->LID->Name = L"LID";
			this->LID->Size = System::Drawing::Size(27, 24);
			this->LID->TabIndex = 1;
			this->LID->Text = L"ID";
			// 
			// LEmail
			// 
			this->LEmail->AutoSize = true;
			this->LEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LEmail->Location = System::Drawing::Point(35, 118);
			this->LEmail->Name = L"LEmail";
			this->LEmail->Size = System::Drawing::Size(57, 24);
			this->LEmail->TabIndex = 2;
			this->LEmail->Text = L"Email";
			// 
			// lAdreess
			// 
			this->lAdreess->AutoSize = true;
			this->lAdreess->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lAdreess->Location = System::Drawing::Point(35, 150);
			this->lAdreess->Name = L"lAdreess";
			this->lAdreess->Size = System::Drawing::Size(80, 24);
			this->lAdreess->TabIndex = 3;
			this->lAdreess->Text = L"Address";
			this->lAdreess->Click += gcnew System::EventHandler(this, &Register::label4_Click);
			// 
			// lphone
			// 
			this->lphone->AutoSize = true;
			this->lphone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lphone->Location = System::Drawing::Point(35, 182);
			this->lphone->Name = L"lphone";
			this->lphone->Size = System::Drawing::Size(66, 24);
			this->lphone->TabIndex = 4;
			this->lphone->Text = L"Phone";
			// 
			// LLLogin
			// 
			this->LLLogin->AutoSize = true;
			this->LLLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LLLogin->Location = System::Drawing::Point(331, 301);
			this->LLLogin->Name = L"LLLogin";
			this->LLLogin->Size = System::Drawing::Size(48, 20);
			this->LLLogin->TabIndex = 5;
			this->LLLogin->TabStop = true;
			this->LLLogin->Text = L"Login";
			this->LLLogin->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Register::LLLogin_LinkClicked);
			// 
			// Tbnme
			// 
			this->Tbnme->Location = System::Drawing::Point(163, 52);
			this->Tbnme->Name = L"Tbnme";
			this->Tbnme->Size = System::Drawing::Size(290, 20);
			this->Tbnme->TabIndex = 6;
			// 
			// TBEmail
			// 
			this->TBEmail->Location = System::Drawing::Point(163, 123);
			this->TBEmail->Name = L"TBEmail";
			this->TBEmail->Size = System::Drawing::Size(290, 20);
			this->TBEmail->TabIndex = 7;
			// 
			// TbId
			// 
			this->TbId->Location = System::Drawing::Point(163, 87);
			this->TbId->Name = L"TbId";
			this->TbId->Size = System::Drawing::Size(290, 20);
			this->TbId->TabIndex = 8;
			// 
			// TbAddress
			// 
			this->TbAddress->Location = System::Drawing::Point(163, 154);
			this->TbAddress->Name = L"TbAddress";
			this->TbAddress->Size = System::Drawing::Size(290, 20);
			this->TbAddress->TabIndex = 9;
			// 
			// TbPhone
			// 
			this->TbPhone->Location = System::Drawing::Point(163, 187);
			this->TbPhone->Name = L"TbPhone";
			this->TbPhone->Size = System::Drawing::Size(290, 20);
			this->TbPhone->TabIndex = 10;
			// 
			// Btnregister
			// 
			this->Btnregister->Location = System::Drawing::Point(206, 301);
			this->Btnregister->Name = L"Btnregister";
			this->Btnregister->Size = System::Drawing::Size(75, 23);
			this->Btnregister->TabIndex = 11;
			this->Btnregister->Text = L"Register";
			this->Btnregister->UseVisualStyleBackColor = true;
			this->Btnregister->Click += gcnew System::EventHandler(this, &Register::Btnregister_Click);
			// 
			// LPAsswoerd
			// 
			this->LPAsswoerd->AutoSize = true;
			this->LPAsswoerd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LPAsswoerd->Location = System::Drawing::Point(35, 216);
			this->LPAsswoerd->Name = L"LPAsswoerd";
			this->LPAsswoerd->Size = System::Drawing::Size(92, 24);
			this->LPAsswoerd->TabIndex = 12;
			this->LPAsswoerd->Text = L"Password";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(35, 249);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(162, 24);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Confirm Password";
			// 
			// TbPassword
			// 
			this->TbPassword->Location = System::Drawing::Point(181, 216);
			this->TbPassword->Name = L"TbPassword";
			this->TbPassword->PasswordChar = '*';
			this->TbPassword->Size = System::Drawing::Size(272, 20);
			this->TbPassword->TabIndex = 14;
			// 
			// TbConPass
			// 
			this->TbConPass->Location = System::Drawing::Point(206, 254);
			this->TbConPass->Name = L"TbConPass";
			this->TbConPass->PasswordChar = '*';
			this->TbConPass->Size = System::Drawing::Size(247, 20);
			this->TbConPass->TabIndex = 15;
			this->TbConPass->TextChanged += gcnew System::EventHandler(this, &Register::TbConPass_TextChanged);
			// 
			// Register
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(817, 528);
			this->Controls->Add(this->TbConPass);
			this->Controls->Add(this->TbPassword);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->LPAsswoerd);
			this->Controls->Add(this->Btnregister);
			this->Controls->Add(this->TbPhone);
			this->Controls->Add(this->TbAddress);
			this->Controls->Add(this->TbId);
			this->Controls->Add(this->TBEmail);
			this->Controls->Add(this->Tbnme);
			this->Controls->Add(this->LLLogin);
			this->Controls->Add(this->lphone);
			this->Controls->Add(this->lAdreess);
			this->Controls->Add(this->LEmail);
			this->Controls->Add(this->LID);
			this->Controls->Add(this->LName);
			this->Name = L"Register";
			this->Text = L"Register";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void TbConPass_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
	   public:bool swithLogin = false;

private: System::Void LLLogin_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->swithLogin = true;
	this->Close();

}
public: UserInfo^ user = nullptr;
	  public:bool ValidateTextbox(String^ input, String^ fieldName)
	  {
		  if (input->Length == 0)
		  {
			  MessageBox::Show("Please enter " + fieldName, "Empty field", MessageBoxButtons::OK);
			  return false;
		  }
		  return true;
	  }
private: System::Void Btnregister_Click(System::Object^ sender, System::EventArgs^ e) {
	
	
	
	
	String^ name = Tbnme->Text;
	String^ email = TBEmail->Text;
	String^ password = TbPassword->Text;
	String^ confirmpass = TbConPass->Text;
	String^ address = TbAddress->Text;
	String^ Id = TbId->Text;
	String^ phone = TbPhone->Text;
	if (!ValidateTextbox(name, "Name") || !ValidateTextbox(email, "Email") ||
		!ValidateTextbox(password, "Password") || !ValidateTextbox(address, "Address"))
	{
		return;
	}
	if (name->Length == 0 || password->Length == 0 || email->Length == 0 || address->Length == 0)
	{
		MessageBox::Show("Please Enter all information ", "Empty fields ", MessageBoxButtons::OK);
		return;
	}
	/*else {
		MessageBox::Show("Registration complete ", "", MessageBoxButtons::OK);
		return;
	}
	*/
	if (String::Compare(password, confirmpass)!=0)
	{
		MessageBox::Show("Password and Confirm Password don't match", "error", MessageBoxButtons::OK);
		return;
	}
	try
	{
		String^ connect = "Data Source=LAPTOP-UGQ89HI6\\SQLEXPRESS;Initial Catalog=oopproject;Integrated Security=True;Encrypt=False";
		SqlConnection sqlconnect(connect);
		sqlconnect.Open();
		String^ insertQuery = "INSERT INTO UserInfo (name, email, password, address, Id, phone) VALUES (@name, @email, @password, @address, @Id, @phone)";
		SqlCommand insertCommand(insertQuery, % sqlconnect);
		insertCommand.Parameters->AddWithValue("@name", name);
		insertCommand.Parameters->AddWithValue("@email", email);
		insertCommand.Parameters->AddWithValue("@password", password);
		insertCommand.Parameters->AddWithValue("@address", address);
		insertCommand.Parameters->AddWithValue("@Id", Id);
		insertCommand.Parameters->AddWithValue("@phone", phone);
		int rowsAffected = insertCommand.ExecuteNonQuery();
		user = gcnew UserInfo;
		user->Id = Id;
		user->Name = name;
		user->Email = email;
		user->Phone = phone;
		user->Password = password;
		user->Address = address;

		this->Close();

		if (rowsAffected > 0)
		{
			MessageBox::Show("Registration successful", "Registration Success", MessageBoxButtons::OK);
			return;
		}
		else
		{
			MessageBox::Show("Failed to register", "Registration Failure", MessageBoxButtons::OK);
			return;
		}

	}
	catch (Exception^e)
	{
		MessageBox::Show("Failed to register", "register Failure", MessageBoxButtons::OK);
		return;
	}
}
};
}
