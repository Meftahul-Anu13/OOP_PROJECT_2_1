#pragma once
#include"AdminInfo.h"
#include "Adminfunction.h"
#include"AdminLogin.h"
#include"DoctoInfo.h"
namespace IUTMMSPRoject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for Adminfunction
	/// </summary>
	public ref class Adminfunction : public System::Windows::Forms::Form
	{
	public:
		Adminfunction(void)
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
		~Adminfunction()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnPatientdetails;
	private: System::Windows::Forms::Button^ btnupdatepatient;
	private: System::Windows::Forms::Button^ btnDeletePatient;
	private: System::Windows::Forms::Button^ btnStorage;
	private: System::Windows::Forms::Button^ btncheckDocotr;
	private: System::Windows::Forms::Button^ btnUpdatedocotr;
	private: System::Windows::Forms::Button^ btnDeleteDocrtor;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Adminfunction::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnPatientdetails = (gcnew System::Windows::Forms::Button());
			this->btnupdatepatient = (gcnew System::Windows::Forms::Button());
			this->btnDeletePatient = (gcnew System::Windows::Forms::Button());
			this->btnStorage = (gcnew System::Windows::Forms::Button());
			this->btncheckDocotr = (gcnew System::Windows::Forms::Button());
			this->btnUpdatedocotr = (gcnew System::Windows::Forms::Button());
			this->btnDeleteDocrtor = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(362, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(99, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Admin Portal";
			// 
			// btnPatientdetails
			// 
			this->btnPatientdetails->Location = System::Drawing::Point(203, 65);
			this->btnPatientdetails->Name = L"btnPatientdetails";
			this->btnPatientdetails->Size = System::Drawing::Size(324, 41);
			this->btnPatientdetails->TabIndex = 1;
			this->btnPatientdetails->Text = L" Check Patient Details";
			this->btnPatientdetails->UseVisualStyleBackColor = true;
			this->btnPatientdetails->Click += gcnew System::EventHandler(this, &Adminfunction::btnPatientdetails_Click);
			// 
			// btnupdatepatient
			// 
			this->btnupdatepatient->Location = System::Drawing::Point(203, 112);
			this->btnupdatepatient->Name = L"btnupdatepatient";
			this->btnupdatepatient->Size = System::Drawing::Size(324, 36);
			this->btnupdatepatient->TabIndex = 2;
			this->btnupdatepatient->Text = L"Update Patient Details";
			this->btnupdatepatient->UseVisualStyleBackColor = true;
			this->btnupdatepatient->Click += gcnew System::EventHandler(this, &Adminfunction::btnupdatepatient_Click);
			// 
			// btnDeletePatient
			// 
			this->btnDeletePatient->Location = System::Drawing::Point(203, 154);
			this->btnDeletePatient->Name = L"btnDeletePatient";
			this->btnDeletePatient->Size = System::Drawing::Size(324, 38);
			this->btnDeletePatient->TabIndex = 3;
			this->btnDeletePatient->Text = L"Delete Patient History ";
			this->btnDeletePatient->UseVisualStyleBackColor = true;
			this->btnDeletePatient->Click += gcnew System::EventHandler(this, &Adminfunction::btnDeletePatient_Click);
			// 
			// btnStorage
			// 
			this->btnStorage->Location = System::Drawing::Point(203, 198);
			this->btnStorage->Name = L"btnStorage";
			this->btnStorage->Size = System::Drawing::Size(324, 44);
			this->btnStorage->TabIndex = 4;
			this->btnStorage->Text = L"Medicine Storage";
			this->btnStorage->UseVisualStyleBackColor = true;
			this->btnStorage->Click += gcnew System::EventHandler(this, &Adminfunction::btnStorage_Click);
			// 
			// btncheckDocotr
			// 
			this->btncheckDocotr->Location = System::Drawing::Point(203, 257);
			this->btncheckDocotr->Name = L"btncheckDocotr";
			this->btncheckDocotr->Size = System::Drawing::Size(324, 37);
			this->btncheckDocotr->TabIndex = 5;
			this->btncheckDocotr->Text = L"Check Doctor Details";
			this->btncheckDocotr->UseVisualStyleBackColor = true;
			this->btncheckDocotr->Click += gcnew System::EventHandler(this, &Adminfunction::btncheckDocotr_Click);
			// 
			// btnUpdatedocotr
			// 
			this->btnUpdatedocotr->Location = System::Drawing::Point(203, 300);
			this->btnUpdatedocotr->Name = L"btnUpdatedocotr";
			this->btnUpdatedocotr->Size = System::Drawing::Size(324, 44);
			this->btnUpdatedocotr->TabIndex = 6;
			this->btnUpdatedocotr->Text = L"Update Doctor Details";
			this->btnUpdatedocotr->UseVisualStyleBackColor = true;
			this->btnUpdatedocotr->Click += gcnew System::EventHandler(this, &Adminfunction::btnUpdatedocotr_Click);
			// 
			// btnDeleteDocrtor
			// 
			this->btnDeleteDocrtor->Location = System::Drawing::Point(203, 350);
			this->btnDeleteDocrtor->Name = L"btnDeleteDocrtor";
			this->btnDeleteDocrtor->Size = System::Drawing::Size(324, 44);
			this->btnDeleteDocrtor->TabIndex = 7;
			this->btnDeleteDocrtor->Text = L"Delete Doctor History";
			this->btnDeleteDocrtor->UseVisualStyleBackColor = true;
			this->btnDeleteDocrtor->Click += gcnew System::EventHandler(this, &Adminfunction::btnDeleteDocrtor_Click);
			// 
			// Adminfunction
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(810, 437);
			this->Controls->Add(this->btnDeleteDocrtor);
			this->Controls->Add(this->btnUpdatedocotr);
			this->Controls->Add(this->btncheckDocotr);
			this->Controls->Add(this->btnStorage);
			this->Controls->Add(this->btnDeletePatient);
			this->Controls->Add(this->btnupdatepatient);
			this->Controls->Add(this->btnPatientdetails);
			this->Controls->Add(this->label1);
			this->Name = L"Adminfunction";
			this->Text = L"Adminfunction";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public:bool switchpatientdetails = false;
			  bool SwitchpatientUpdate = false;
			  bool switchpatientdelete = false;
			  bool switchDoctortdetails = false;
			  bool switchdoctordetails = false;
			  bool switchdocotrdetails = false;
			  bool switchStorage = false;

	private: System::Void btnUpdatedocotr_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			String^ Id = "200";
			String^ name = "100003";
			String^ connection = "Data Source=LAPTOP-UGQ89HI6\\SQLEXPRESS;Initial Catalog=oopproject;Integrated Security=True;Encrypt=False";
			SqlConnection sqlconnect(connection);
			// Open the database connection
			sqlconnect.Open();

			// Execute a SQL query to update patient details
			//String^ sqlQuery = "UPDATE UserInfo SET Id = "101" WHERE ";
			String^ updatePasswordQuery = "UPDATE DoctoInfo SET password=@newPassword WHERE id=@email";
			SqlCommand updatePasswordCommand(updatePasswordQuery, % sqlconnect);
			updatePasswordCommand.Parameters->AddWithValue("@newPassword", Id);
			updatePasswordCommand.Parameters->AddWithValue("@email", name);
			int rowsAffected = updatePasswordCommand.ExecuteNonQuery();

			if (rowsAffected > 0) {
				// Notify the user about the password change
				//MessageBox::Show("Your password has been successfully reset. Check your email for the new password.", "Password Reset", MessageBoxButtons::OK);

				MessageBox::Show("Patient details updated successfully.", "Update Success", MessageBoxButtons::OK);
			}
			else {
				MessageBox::Show("Failed to update password.", "Password Reset", MessageBoxButtons::OK);
			}

			//SqlCommand^ sqlCommand = gcnew SqlCommand(sqlQuery, sqlconnect);
			//SqlCommand Command(sqlQuery, % sqlconnect);
			//Command.ExecuteNonQuery(); // Execute non-query for update operation
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}


		
	}
private: System::Void btnPatientdetails_Click(System::Object^ sender, System::EventArgs^ e) {
	this->switchpatientdetails = true;
	this->Close();


}
private: System::Void btnupdatepatient_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		String^ Id = "200";
		String^ name = "210041";
		String^ connection = "Data Source=LAPTOP-UGQ89HI6\\SQLEXPRESS;Initial Catalog=oopproject;Integrated Security=True;Encrypt=False";
		SqlConnection sqlconnect(connection);
		// Open the database connection
		sqlconnect.Open();

		// Execute a SQL query to update patient details
		//String^ sqlQuery = "UPDATE UserInfo SET Id = "101" WHERE ";
		String^ updatePasswordQuery = "UPDATE UserInfo SET password=@newPassword WHERE id=@email";
		SqlCommand updatePasswordCommand(updatePasswordQuery, % sqlconnect);
		updatePasswordCommand.Parameters->AddWithValue("@newPassword", Id);
		updatePasswordCommand.Parameters->AddWithValue("@email", name);
		int rowsAffected = updatePasswordCommand.ExecuteNonQuery();

		if (rowsAffected > 0) {
			// Notify the user about the password change
			//MessageBox::Show("Your password has been successfully reset. Check your email for the new password.", "Password Reset", MessageBoxButtons::OK);

		MessageBox::Show("Patient details updated successfully.", "Update Success",MessageBoxButtons::OK);
		}
		else {
			MessageBox::Show("Failed to update password.", "Password Reset", MessageBoxButtons::OK);
		}

		//SqlCommand^ sqlCommand = gcnew SqlCommand(sqlQuery, sqlconnect);
		//SqlCommand Command(sqlQuery, % sqlconnect);
		//Command.ExecuteNonQuery(); // Execute non-query for update operation
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	

}

private: System::Void btnDeletePatient_Click(System::Object ^ sender, System::EventArgs ^ e) {
	try
	{
		String^ Id = "200";
		String^ name = "210041";
		String^ connection = "Data Source=LAPTOP-UGQ89HI6\\SQLEXPRESS;Initial Catalog=oopproject;Integrated Security=True;Encrypt=False";
		SqlConnection sqlconnect(connection);

		// Open the database connection
		sqlconnect.Open();

		// Execute a SQL query to delete patient details
		String^ deleteQuery = "DELETE FROM UserInfo WHERE id=@id";
		SqlCommand deleteCommand(deleteQuery, % sqlconnect);
		deleteCommand.Parameters->AddWithValue("@id", Id);

		int rowsAffected = deleteCommand.ExecuteNonQuery();

		if (rowsAffected > 0) {
			MessageBox::Show("Patient details deleted successfully.", "Delete Success", MessageBoxButtons::OK);
		}
		else {
			MessageBox::Show("Failed to delete patient details.", "Delete Error", MessageBoxButtons::OK);
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}




private: System::Void btnStorage_Click(System::Object^ sender, System::EventArgs^ e) {
	this->switchpatientdetails = true;
	this->Close();

}
private: System::Void btncheckDocotr_Click(System::Object^ sender, System::EventArgs^ e) {
	this->switchpatientdetails = true;
	this->Close();

}
private: System::Void btnDeleteDocrtor_Click(System::Object^ sender, System::EventArgs^ e) {

	try
	{
		String^ Id = "10003";
		String^ name = "100003";
		String^ connection = "Data Source=LAPTOP-UGQ89HI6\\SQLEXPRESS;Initial Catalog=oopproject;Integrated Security=True;Encrypt=False";
		SqlConnection sqlconnect(connection);

		// Open the database connection
		sqlconnect.Open();

		// Execute a SQL query to delete patient details
		String^ deleteQuery = "DELETE FROM UserInfo WHERE id=@id";
		SqlCommand deleteCommand(deleteQuery, % sqlconnect);
		deleteCommand.Parameters->AddWithValue("@id", Id);

		int rowsAffected = deleteCommand.ExecuteNonQuery();

		if (rowsAffected > 0) {
			MessageBox::Show("Doctor details deleted successfully.", "Delete Success", MessageBoxButtons::OK);
		}
		else {
			MessageBox::Show("Failed to delete patient details.", "Delete Error", MessageBoxButtons::OK);
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
		}



};
}
