#pragma once
#include"DoctorsFunction.h"
#include"Appointment.h"
#include"PatientDetails.h"
#include"Doctorlogin.h"
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
	/// Summary for CheckAppointment
	/// </summary>
	/// #pragma once
	
	

	public ref class CheckAppointment : public System::Windows::Forms::Form
	{
	public:
		CheckAppointment(DoctoInfo^ user)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		//Lbapppoint->Text = "Patient_ID = " + user->Id + "		" + "pateint_name =" + user->Name + "Appointment Shift " + user->Appointment_shift;
			CheckAppointments(user->Id);
		

		}
		CheckAppointment()
		{
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CheckAppointment()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ Lcancel;
	private: System::Windows::Forms::Label^ Lbapppoint;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CheckAppointment::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Lcancel = (gcnew System::Windows::Forms::Label());
			this->Lbapppoint = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(272, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(228, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Appointment Details";
			// 
			// Lcancel
			// 
			this->Lcancel->AutoSize = true;
			this->Lcancel->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Lcancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 3.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lcancel->Location = System::Drawing::Point(25, 24);
			this->Lcancel->Name = L"Lcancel";
			this->Lcancel->Size = System::Drawing::Size(20, 6);
			this->Lcancel->TabIndex = 1;
			this->Lcancel->Text = L"Cancel";
			this->Lcancel->Click += gcnew System::EventHandler(this, &CheckAppointment::Lcancel_Click);
			// 
			// Lbapppoint
			// 
			this->Lbapppoint->AutoSize = true;
			this->Lbapppoint->Location = System::Drawing::Point(55, 83);
			this->Lbapppoint->Name = L"Lbapppoint";
			this->Lbapppoint->Size = System::Drawing::Size(25, 13);
			this->Lbapppoint->TabIndex = 2;
			this->Lbapppoint->Text = L"Info";
			// 
			// CheckAppointment
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(802, 314);
			this->Controls->Add(this->Lbapppoint);
			this->Controls->Add(this->Lcancel);
			this->Controls->Add(this->label1);
			this->Name = L"CheckAppointment";
			this->Text = L"CheckAppointment";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:bool switchDoctorFunction = false;
		  Appointment^ userapp = nullptr;
	private: System::Void Lcancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->switchDoctorFunction = true;
		this->Close();
		IUTMMSPRoject::DoctorsFunction Drfunc;
		Drfunc.ShowDialog();

	}
	public:
		/*void CheckAppointments(String^drid)
		{
			try
			{
				String^ connection = "Data Source=LAPTOP-UGQ89HI6\\SQLEXPRESS;Initial Catalog=oopproject;Integrated Security=True;Encrypt=False";
				SqlConnection sqlconnect(connection);
				sqlconnect.Open();
			
				
				
				// Execute a SQL query to get appointments
				String^ sqlQuery = "SELECT * FROM Appointment where Dr_id=@dr_id";
				SqlCommand Command(sqlQuery, % sqlconnect);
				Command.Parameters->AddWithValue("@dr_id",drid);
				//Command.Parameters->AddWithValue("@pwd", password);

				//SqlCommand^ command = gcnew SqlCommand(sqlQuery, connection);
				SqlDataReader^ reader = Command.ExecuteReader();
				// Process the results and display appointments
					userapp = gcnew Appointment;
					//int f= reader->Read();
				while (reader->Read())
				{
					userapp->Id = reader->GetString(0);
					userapp->Name = reader->GetString(1);
					userapp->Appointment_dr = reader->GetString(3);
					userapp->Appointment_shift = reader->GetString(2);
					userapp->Dr_id = drid;
					//userapp->Password = reader->GetString(4);
					Lbapppoint->Text = "Patient_ID = " + userapp->Id + "		" + "pateint_name =" + userapp->Name + "Appointment Shift " + userapp->Appointment_shift;
					Lbapppoint->Text="\n";

				
				}

				// Close the reader and connection
				reader->Close();
				//connection->Close();
			}
			catch (Exception^ ex)
			{
				MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		 }*/
		void CheckAppointments(String^ drid)
		{
			try
			{
				String^ connection = "Data Source=LAPTOP-UGQ89HI6\\SQLEXPRESS;Initial Catalog=oopproject;Integrated Security=True;Encrypt=False";
				SqlConnection sqlconnect(connection);
				sqlconnect.Open();

				// Execute a SQL query to get appointments
				String^ sqlQuery = "SELECT * FROM Appointment where Dr_id=@dr_id";

				// Display the SQL query in a label or another UI element
				

				SqlCommand Command(sqlQuery, % sqlconnect);
				Command.Parameters->AddWithValue("@dr_id", drid);

				SqlDataReader^ reader = Command.ExecuteReader();

				//userapp = gcnew Appointment;
				while (reader->Read())
				{
					String^ result = "Patient_ID = " + reader->GetString(0) +
						"    Patient Name = " + reader->GetString(1) +
						"    Appointment Shift = " + reader->GetString(2);
					//Lbapppoint->Items->Add(result);
					Lbapppoint->Text = result;
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
