#pragma once
#include"Storage.h"
namespace IUTMMSPRoject {

	using namespace System;
	using namespace std;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for StorageFunc
	/// </summary>
	public ref class StorageFunc : public System::Windows::Forms::Form
	{
	public:
		StorageFunc(void)
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
		~StorageFunc()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnmedicine;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnRemove;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnback;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StorageFunc::typeid));
			this->btnmedicine = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnRemove = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnback = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnmedicine
			// 
			this->btnmedicine->Location = System::Drawing::Point(408, 65);
			this->btnmedicine->Name = L"btnmedicine";
			this->btnmedicine->Size = System::Drawing::Size(196, 46);
			this->btnmedicine->TabIndex = 0;
			this->btnmedicine->Text = L"Medicine Store ";
			this->btnmedicine->UseVisualStyleBackColor = true;
			this->btnmedicine->Click += gcnew System::EventHandler(this, &StorageFunc::btnmedicine_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(408, 117);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(196, 53);
			this->btnAdd->TabIndex = 1;
			this->btnAdd->Text = L"Add Medicine";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &StorageFunc::btnAdd_Click);
			// 
			// btnRemove
			// 
			this->btnRemove->Location = System::Drawing::Point(408, 176);
			this->btnRemove->Name = L"btnRemove";
			this->btnRemove->Size = System::Drawing::Size(196, 51);
			this->btnRemove->TabIndex = 2;
			this->btnRemove->Text = L"Remove Medicine";
			this->btnRemove->UseVisualStyleBackColor = true;
			this->btnRemove->Click += gcnew System::EventHandler(this, &StorageFunc::btnRemove_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(408, 233);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(196, 48);
			this->btnUpdate->TabIndex = 3;
			this->btnUpdate->Text = L"Update Medicine ";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &StorageFunc::btnUpdate_Click);
			// 
			// btnback
			// 
			this->btnback->Location = System::Drawing::Point(408, 287);
			this->btnback->Name = L"btnback";
			this->btnback->Size = System::Drawing::Size(196, 43);
			this->btnback->TabIndex = 4;
			this->btnback->Text = L"Back";
			this->btnback->UseVisualStyleBackColor = true;
			this->btnback->Click += gcnew System::EventHandler(this, &StorageFunc::btnback_Click);
			// 
			// StorageFunc
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(845, 383);
			this->Controls->Add(this->btnback);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnRemove);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->btnmedicine);
			this->Name = L"StorageFunc";
			this->Text = L"StorageFunc";
			this->ResumeLayout(false);

		}
#pragma endregion
		public:Storage^ st = nullptr;
	private: System::Void btnmedicine_Click(System::Object^ sender, System::EventArgs^ e) {
		/*String^ gen_Name = this->TbEmail->Text;
		String^ brand_name = this->Tbpassword->Text;
		String^ id = this->TbId->Text;

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
			user = gcnew Storage;
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
		catch (Exception^ e)
		{
			MessageBox::Show("Failed to register", "register Failure", MessageBoxButtons::OK);
			return;
		}*/
	}
private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void btnRemove_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnback_Click(System::Object^ sender, System::EventArgs^ e) {

}
};
}
