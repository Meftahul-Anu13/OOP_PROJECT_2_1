#pragma once

namespace IUTMMSPRoject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for Newpassform
	/// </summary>
	public ref class Newpassform : public System::Windows::Forms::Form
	{
	public:
		Newpassform(void)
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
		~Newpassform()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Lemail;
	private: System::Windows::Forms::Label^ LNewPass;
	private: System::Windows::Forms::TextBox^ tbNewPass;
	protected:

	protected:


	private: System::Windows::Forms::TextBox^ Tbemail;

	private: System::Windows::Forms::Button^ btnLogin;

	private: System::Windows::Forms::Button^ btnOk;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Newpassform::typeid));
			this->Lemail = (gcnew System::Windows::Forms::Label());
			this->LNewPass = (gcnew System::Windows::Forms::Label());
			this->tbNewPass = (gcnew System::Windows::Forms::TextBox());
			this->Tbemail = (gcnew System::Windows::Forms::TextBox());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->btnOk = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Lemail
			// 
			this->Lemail->AutoSize = true;
			this->Lemail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lemail->Location = System::Drawing::Point(157, 70);
			this->Lemail->Name = L"Lemail";
			this->Lemail->Size = System::Drawing::Size(57, 24);
			this->Lemail->TabIndex = 0;
			this->Lemail->Text = L"Email";
			this->Lemail->Click += gcnew System::EventHandler(this, &Newpassform::label1_Click);
			// 
			// LNewPass
			// 
			this->LNewPass->AutoSize = true;
			this->LNewPass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LNewPass->Location = System::Drawing::Point(78, 118);
			this->LNewPass->Name = L"LNewPass";
			this->LNewPass->Size = System::Drawing::Size(136, 24);
			this->LNewPass->TabIndex = 1;
			this->LNewPass->Text = L"New Password";
			this->LNewPass->Click += gcnew System::EventHandler(this, &Newpassform::LNewPass_Click);
			// 
			// tbNewPass
			// 
			this->tbNewPass->Location = System::Drawing::Point(248, 122);
			this->tbNewPass->Name = L"tbNewPass";
			this->tbNewPass->Size = System::Drawing::Size(335, 20);
			this->tbNewPass->TabIndex = 2;
			// 
			// Tbemail
			// 
			this->Tbemail->Location = System::Drawing::Point(248, 74);
			this->Tbemail->Name = L"Tbemail";
			this->Tbemail->Size = System::Drawing::Size(335, 20);
			this->Tbemail->TabIndex = 3;
			// 
			// btnLogin
			// 
			this->btnLogin->Location = System::Drawing::Point(499, 224);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(84, 36);
			this->btnLogin->TabIndex = 4;
			this->btnLogin->Text = L"Back to Login";
			this->btnLogin->UseVisualStyleBackColor = true;
			this->btnLogin->Click += gcnew System::EventHandler(this, &Newpassform::btnLogin_Click);
			// 
			// btnOk
			// 
			this->btnOk->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOk->Location = System::Drawing::Point(271, 224);
			this->btnOk->Name = L"btnOk";
			this->btnOk->Size = System::Drawing::Size(98, 36);
			this->btnOk->TabIndex = 5;
			this->btnOk->Text = L"Ok";
			this->btnOk->UseVisualStyleBackColor = true;
			this->btnOk->Click += gcnew System::EventHandler(this, &Newpassform::btnOk_Click);
			// 
			// Newpassform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(648, 320);
			this->Controls->Add(this->btnOk);
			this->Controls->Add(this->btnLogin);
			this->Controls->Add(this->Tbemail);
			this->Controls->Add(this->tbNewPass);
			this->Controls->Add(this->LNewPass);
			this->Controls->Add(this->Lemail);
			this->Name = L"Newpassform";
			this->Text = L"Newpassform";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {

	}
private: System::Void LNewPass_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void btnOk_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ email = this->Tbemail->Text;
	String^ password = this->tbNewPass->Text;
	if (email->Length == 0 || password->Length == 0)
	{
		MessageBox::Show("Please Enter all the information ", "Email or Password Empty ", MessageBoxButtons::OK);
		return;
	}
	try
	{
		String^ connect = "Data Source=LAPTOP-UGQ89HI6\\SQLEXPRESS;Initial Catalog=oopproject;Integrated Security=True;Encrypt=False";
		SqlConnection sqlconnect(connect);
		sqlconnect.Open();
		String^ checkEmailQuery = "SELECT COUNT(*) FROM UserInfo WHERE email=@email";
		SqlCommand checkEmailCommand(checkEmailQuery, % sqlconnect);
		checkEmailCommand.Parameters->AddWithValue("@email", email);

		int emailCount = safe_cast<int>(checkEmailCommand.ExecuteScalar());

		if (emailCount > 0) {
			String^ updatePasswordQuery = "UPDATE UserInfo SET password=@newPassword WHERE email=@email";
			SqlCommand updatePasswordCommand(updatePasswordQuery, % sqlconnect);
			updatePasswordCommand.Parameters->AddWithValue("@newPassword", password);
			updatePasswordCommand.Parameters->AddWithValue("@email", email);
			int rowsAffected = updatePasswordCommand.ExecuteNonQuery();

			if (rowsAffected > 0) {
				// Notify the user about the password change
				MessageBox::Show("Your password has been successfully reset. Check your email for the new password.", "Password Reset", MessageBoxButtons::OK);
			}
			else {
				MessageBox::Show("Failed to update password.", "Password Reset", MessageBoxButtons::OK);
			}
		}
		else {
			MessageBox::Show("Email not found in the database.", "Password Reset", MessageBoxButtons::OK);
		}


	}
	catch (Exception^ e)
	{
		MessageBox::Show("Failed to connect to the database: " , "Database Connection Error", MessageBoxButtons::OK);
	}

	
}
	public: bool switchLogin = false;
private: System::Void btnLogin_Click(System::Object^ sender, System::EventArgs^ e) {
	this->switchLogin = true;
	this->Close();
}
};
}
