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
	/// Summary for PatientInfo
	/// </summary>
	public ref class PatientInfo : public System::Windows::Forms::Form
	{
	public:
		PatientInfo(void)
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
		~PatientInfo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ ldetails;
	protected:

	protected:
	private: System::Windows::Forms::Label^ lpatientdetails;
	private: System::Windows::Forms::Button^ btncancel;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PatientInfo::typeid));
			this->ldetails = (gcnew System::Windows::Forms::Label());
			this->lpatientdetails = (gcnew System::Windows::Forms::Label());
			this->btncancel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// ldetails
			// 
			this->ldetails->AutoSize = true;
			this->ldetails->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ldetails->Location = System::Drawing::Point(55, 67);
			this->ldetails->Name = L"ldetails";
			this->ldetails->Size = System::Drawing::Size(51, 20);
			this->ldetails->TabIndex = 0;
			this->ldetails->Text = L"label1";
			this->ldetails->Click += gcnew System::EventHandler(this, &PatientInfo::ldetails_Click);
			// 
			// lpatientdetails
			// 
			this->lpatientdetails->AutoSize = true;
			this->lpatientdetails->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lpatientdetails->Location = System::Drawing::Point(378, 9);
			this->lpatientdetails->Name = L"lpatientdetails";
			this->lpatientdetails->Size = System::Drawing::Size(112, 20);
			this->lpatientdetails->TabIndex = 1;
			this->lpatientdetails->Text = L"Patient Details";
			// 
			// btncancel
			// 
			this->btncancel->Location = System::Drawing::Point(750, 264);
			this->btncancel->Name = L"btncancel";
			this->btncancel->Size = System::Drawing::Size(75, 23);
			this->btncancel->TabIndex = 2;
			this->btncancel->Text = L"cancel";
			this->btncancel->UseVisualStyleBackColor = true;
			this->btncancel->Click += gcnew System::EventHandler(this, &PatientInfo::btncancel_Click);
			// 
			// PatientInfo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(933, 326);
			this->Controls->Add(this->btncancel);
			this->Controls->Add(this->lpatientdetails);
			this->Controls->Add(this->ldetails);
			this->Name = L"PatientInfo";
			this->Text = L"PatientInfo";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion



	public:
		AdminInfo^ admin = nullptr;
		

	private: System::Void ldetails_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void btncancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
		   public:
		   void Seepatientdetails()
		   {
			   try
			   {
				   String^ connection = "Data Source=LAPTOP-UGQ89HI6\\SQLEXPRESS;Initial Catalog=oopproject;Integrated Security=True;Encrypt=False";
				   SqlConnection sqlconnect(connection);
				   sqlconnect.Open();

				   // Execute a SQL query to get all patient details
				   String^ sqlQuery = "SELECT * FROM UserInfo";

				   SqlCommand Command(sqlQuery, % sqlconnect);
				   SqlDataReader^ reader = Command.ExecuteReader();

				   // Check if there are any patients in the database
				   if (reader->HasRows)
				   {
					   // Display all columns and their values for each patient
					   String^ result = "";
					   while (reader->Read())
					   {
						   for (int i = 0; i < reader->FieldCount; i++)
						   {
							   result += reader->GetName(i) + " = " + reader->GetString(i) + "\n";
						   }
						   result += "\n";
					   }
					   ldetails->Text = result;
				   }
				   else
				   {
					   ldetails->Text = "No patient details found.";
				   }

				   // Close the reader and connection
				   reader->Close();
			   }
			   catch (Exception^ ex)
			   {
				   MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			   }
		   }

};
}
