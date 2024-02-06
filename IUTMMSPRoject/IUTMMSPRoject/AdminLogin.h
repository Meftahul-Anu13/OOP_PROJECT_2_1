#pragma once
#include"UserInfo.h"

#include"AdminInfo.h"

namespace IUTMMSPRoject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for AdminLogin
	/// </summary>
	public ref class AdminLogin : public System::Windows::Forms::Form
	{
	public:
		AdminLogin(void)
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
		~AdminLogin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnAdminid;
	private: System::Windows::Forms::Button^ btnusername;
	private: System::Windows::Forms::Button^ btnpassword;
	private: System::Windows::Forms::Button^ btnlogin;
	private: System::Windows::Forms::TextBox^ bxid;
	private: System::Windows::Forms::TextBox^ bxname;
	private: System::Windows::Forms::TextBox^ bxpass;
	private: System::Windows::Forms::Button^ btnCancel;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminLogin::typeid));
			this->btnAdminid = (gcnew System::Windows::Forms::Button());
			this->btnusername = (gcnew System::Windows::Forms::Button());
			this->btnpassword = (gcnew System::Windows::Forms::Button());
			this->btnlogin = (gcnew System::Windows::Forms::Button());
			this->bxid = (gcnew System::Windows::Forms::TextBox());
			this->bxname = (gcnew System::Windows::Forms::TextBox());
			this->bxpass = (gcnew System::Windows::Forms::TextBox());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnAdminid
			// 
			this->btnAdminid->Location = System::Drawing::Point(127, 61);
			this->btnAdminid->Name = L"btnAdminid";
			this->btnAdminid->Size = System::Drawing::Size(85, 39);
			this->btnAdminid->TabIndex = 0;
			this->btnAdminid->Text = L"Admin ID";
			this->btnAdminid->UseVisualStyleBackColor = true;
			// 
			// btnusername
			// 
			this->btnusername->Location = System::Drawing::Point(127, 121);
			this->btnusername->Name = L"btnusername";
			this->btnusername->Size = System::Drawing::Size(85, 37);
			this->btnusername->TabIndex = 1;
			this->btnusername->Text = L"Username";
			this->btnusername->UseVisualStyleBackColor = true;
			// 
			// btnpassword
			// 
			this->btnpassword->Location = System::Drawing::Point(130, 182);
			this->btnpassword->Name = L"btnpassword";
			this->btnpassword->Size = System::Drawing::Size(82, 38);
			this->btnpassword->TabIndex = 2;
			this->btnpassword->Text = L"Password";
			this->btnpassword->UseVisualStyleBackColor = true;
			// 
			// btnlogin
			// 
			this->btnlogin->Location = System::Drawing::Point(290, 312);
			this->btnlogin->Name = L"btnlogin";
			this->btnlogin->Size = System::Drawing::Size(90, 40);
			this->btnlogin->TabIndex = 3;
			this->btnlogin->Text = L"Login";
			this->btnlogin->UseVisualStyleBackColor = true;
			this->btnlogin->Click += gcnew System::EventHandler(this, &AdminLogin::btnlogin_Click);
			// 
			// bxid
			// 
			this->bxid->Location = System::Drawing::Point(250, 71);
			this->bxid->Name = L"bxid";
			this->bxid->Size = System::Drawing::Size(164, 20);
			this->bxid->TabIndex = 4;
			// 
			// bxname
			// 
			this->bxname->Location = System::Drawing::Point(250, 130);
			this->bxname->Name = L"bxname";
			this->bxname->Size = System::Drawing::Size(164, 20);
			this->bxname->TabIndex = 5;
			// 
			// bxpass
			// 
			this->bxpass->Location = System::Drawing::Point(250, 192);
			this->bxpass->Name = L"bxpass";
			this->bxpass->PasswordChar = '*';
			this->bxpass->Size = System::Drawing::Size(164, 20);
			this->bxpass->TabIndex = 6;
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(452, 312);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(86, 40);
			this->btnCancel->TabIndex = 7;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &AdminLogin::btnCancel_Click);
			// 
			// AdminLogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(866, 440);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->bxpass);
			this->Controls->Add(this->bxname);
			this->Controls->Add(this->bxid);
			this->Controls->Add(this->btnlogin);
			this->Controls->Add(this->btnpassword);
			this->Controls->Add(this->btnusername);
			this->Controls->Add(this->btnAdminid);
			this->Name = L"AdminLogin";
			this->Text = L"AdminLogin";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public: 
			AdminInfo^ user = nullptr;
			bool SwitchFunc = false;

	
			private: System::Void btnlogin_Click(System::Object^ sender, System::EventArgs^ e) {
				this->SwitchFunc = true;
				String^ password = this->bxpass->Text;
				String^ id = this->bxid->Text;
				String^ Name = "";

				if (password->Length == 0 || id->Length == 0) {
					MessageBox::Show("Please enter both ID and password.", "Empty Fields", MessageBoxButtons::OK);
					return;
				}

				try {
					String^ connect = "Data Source=LAPTOP-UGQ89HI6\\SQLEXPRESS;Initial Catalog=oopproject;Integrated Security=True;Encrypt=False";
					SqlConnection sqlconnect(connect);
					sqlconnect.Open();
					String^ sqlQuery = "SELECT * FROM AdminInfo WHERE id=@id AND password=@pwd;";
					SqlCommand Command(sqlQuery, % sqlconnect);
					Command.Parameters->AddWithValue("@id", id);
					Command.Parameters->AddWithValue("@pwd", password);

					SqlDataReader^ reader = Command.ExecuteReader();

					if (reader->Read()) {
						user = gcnew AdminInfo;
						user->Id = reader->GetString(0);
						user->Name = reader->GetString(1);
						user->Password = reader->GetString(2);
						//user->Address = reader->GetString(4);

						this->Close();
					}
					else {
						MessageBox::Show("ID and password are incorrect.", "Login Failed", MessageBoxButtons::OK);
					}
				}
				catch (Exception^ ex) {
					MessageBox::Show("Error: " + ex->Message, "Database Error", MessageBoxButtons::OK);
				}
			}


	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
		}
};
}
