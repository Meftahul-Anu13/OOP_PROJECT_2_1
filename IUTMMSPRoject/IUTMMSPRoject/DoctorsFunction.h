#pragma once


namespace IUTMMSPRoject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DoctorsFunction
	/// </summary>
	/// 
	
	public class Detailsinfo {
	public:
		virtual void patientdetails(String^ patId) = 0;
	};
	public ref class DoctorsFunction : public System::Windows::Forms::Form
	{
	public:
		DoctorsFunction(void)
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
		~DoctorsFunction()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnPatientDetails;
	protected:

	private: System::Windows::Forms::Button^ btnAppointment;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DoctorsFunction::typeid));
			this->btnPatientDetails = (gcnew System::Windows::Forms::Button());
			this->btnAppointment = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnPatientDetails
			// 
			this->btnPatientDetails->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
			this->btnPatientDetails->Location = System::Drawing::Point(112, 204);
			this->btnPatientDetails->Name = L"btnPatientDetails";
			this->btnPatientDetails->Size = System::Drawing::Size(257, 48);
			this->btnPatientDetails->TabIndex = 1;
			this->btnPatientDetails->Text = L"Patient Details";
			this->btnPatientDetails->UseVisualStyleBackColor = true;
			this->btnPatientDetails->Click += gcnew System::EventHandler(this, &DoctorsFunction::btnPatientDetails_Click);
			// 
			// btnAppointment
			// 
			this->btnAppointment->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAppointment->Location = System::Drawing::Point(112, 87);
			this->btnAppointment->Name = L"btnAppointment";
			this->btnAppointment->Size = System::Drawing::Size(257, 47);
			this->btnAppointment->TabIndex = 2;
			this->btnAppointment->Text = L"Check Appointment";
			this->btnAppointment->UseVisualStyleBackColor = true;
			this->btnAppointment->Click += gcnew System::EventHandler(this, &DoctorsFunction::btnAppointment_Click);
			// 
			// DoctorsFunction
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(808, 342);
			this->Controls->Add(this->btnAppointment);
			this->Controls->Add(this->btnPatientDetails);
			this->Name = L"DoctorsFunction";
			this->Text = L"DoctorsFunction";
			this->ResumeLayout(false);

		}
#pragma endregion
	public:bool switchCheckAppoint = false;
		  bool switchPatienthistory = false;
		  bool switchPatientDetails = false;
	private: System::Void btnAppointment_Click(System::Object^ sender, System::EventArgs^ e) {
		this->switchCheckAppoint = true;
		this->Close();

	}
	private: System::Void btnPatientDetails_Click(System::Object^ sender, System::EventArgs^ e) {
		this->switchPatienthistory = true;
		this->Close();

	}
	};
}

