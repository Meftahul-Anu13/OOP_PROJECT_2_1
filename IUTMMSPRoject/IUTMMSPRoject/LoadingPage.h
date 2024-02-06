#pragma once

namespace IUTMMSPRoject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LoadingPage
	/// </summary>
	public ref class LoadingPage : public System::Windows::Forms::Form
	{
	public:
		LoadingPage(void)
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
		~LoadingPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ welcomelabel;
	private: System::Windows::Forms::Label^ Llogin;
	private: System::Windows::Forms::Button^ btnAdmin;
	private: System::Windows::Forms::Button^ btnDoctor;
	private: System::Windows::Forms::Button^ btnPatient;
	private: System::Windows::Forms::Button^ btnAbout;
	private: System::Windows::Forms::Button^ btnFacilities;
	private: System::Windows::Forms::Button^ btnEmergency;
	private: System::Windows::Forms::Button^ btncancel;







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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoadingPage::typeid));
			this->welcomelabel = (gcnew System::Windows::Forms::Label());
			this->Llogin = (gcnew System::Windows::Forms::Label());
			this->btnAdmin = (gcnew System::Windows::Forms::Button());
			this->btnDoctor = (gcnew System::Windows::Forms::Button());
			this->btnPatient = (gcnew System::Windows::Forms::Button());
			this->btnAbout = (gcnew System::Windows::Forms::Button());
			this->btnFacilities = (gcnew System::Windows::Forms::Button());
			this->btnEmergency = (gcnew System::Windows::Forms::Button());
			this->btncancel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// welcomelabel
			// 
			this->welcomelabel->AutoSize = true;
			this->welcomelabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->welcomelabel->Location = System::Drawing::Point(314, 29);
			this->welcomelabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->welcomelabel->Name = L"welcomelabel";
			this->welcomelabel->Size = System::Drawing::Size(243, 29);
			this->welcomelabel->TabIndex = 0;
			this->welcomelabel->Text = L"WelCome to IUTMS";
			// 
			// Llogin
			// 
			this->Llogin->AutoSize = true;
			this->Llogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Llogin->Location = System::Drawing::Point(116, 70);
			this->Llogin->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Llogin->Name = L"Llogin";
			this->Llogin->Size = System::Drawing::Size(94, 24);
			this->Llogin->TabIndex = 1;
			this->Llogin->Text = L" Login As ";
			// 
			// btnAdmin
			// 
			this->btnAdmin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdmin->Location = System::Drawing::Point(120, 119);
			this->btnAdmin->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnAdmin->Name = L"btnAdmin";
			this->btnAdmin->Size = System::Drawing::Size(105, 42);
			this->btnAdmin->TabIndex = 2;
			this->btnAdmin->Text = L"Admin";
			this->btnAdmin->UseVisualStyleBackColor = true;
			this->btnAdmin->Click += gcnew System::EventHandler(this, &LoadingPage::btnAdmin_Click);
			// 
			// btnDoctor
			// 
			this->btnDoctor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDoctor->Location = System::Drawing::Point(120, 202);
			this->btnDoctor->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnDoctor->Name = L"btnDoctor";
			this->btnDoctor->Size = System::Drawing::Size(105, 42);
			this->btnDoctor->TabIndex = 3;
			this->btnDoctor->Text = L"Doctor";
			this->btnDoctor->UseVisualStyleBackColor = true;
			this->btnDoctor->Click += gcnew System::EventHandler(this, &LoadingPage::btnDoctor_Click);
			// 
			// btnPatient
			// 
			this->btnPatient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPatient->Location = System::Drawing::Point(120, 287);
			this->btnPatient->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnPatient->Name = L"btnPatient";
			this->btnPatient->Size = System::Drawing::Size(105, 43);
			this->btnPatient->TabIndex = 4;
			this->btnPatient->Text = L"Patient";
			this->btnPatient->UseVisualStyleBackColor = true;
			this->btnPatient->Click += gcnew System::EventHandler(this, &LoadingPage::btnPatient_Click);
			// 
			// btnAbout
			// 
			this->btnAbout->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAbout->Location = System::Drawing::Point(600, 119);
			this->btnAbout->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnAbout->Name = L"btnAbout";
			this->btnAbout->Size = System::Drawing::Size(103, 42);
			this->btnAbout->TabIndex = 5;
			this->btnAbout->Text = L"About Us";
			this->btnAbout->UseVisualStyleBackColor = true;
			this->btnAbout->Click += gcnew System::EventHandler(this, &LoadingPage::btnAbout_Click);
			// 
			// btnFacilities
			// 
			this->btnFacilities->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFacilities->Location = System::Drawing::Point(600, 202);
			this->btnFacilities->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnFacilities->Name = L"btnFacilities";
			this->btnFacilities->Size = System::Drawing::Size(103, 42);
			this->btnFacilities->TabIndex = 6;
			this->btnFacilities->Text = L"Facilities";
			this->btnFacilities->UseVisualStyleBackColor = true;
			// 
			// btnEmergency
			// 
			this->btnEmergency->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEmergency->Location = System::Drawing::Point(600, 288);
			this->btnEmergency->Name = L"btnEmergency";
			this->btnEmergency->Size = System::Drawing::Size(103, 43);
			this->btnEmergency->TabIndex = 7;
			this->btnEmergency->Text = L"Emergency";
			this->btnEmergency->UseVisualStyleBackColor = true;
			// 
			// btncancel
			// 
			this->btncancel->Location = System::Drawing::Point(378, 308);
			this->btncancel->Name = L"btncancel";
			this->btncancel->Size = System::Drawing::Size(75, 23);
			this->btncancel->TabIndex = 8;
			this->btncancel->Text = L"Cancel";
			this->btncancel->UseVisualStyleBackColor = true;
			this->btncancel->Click += gcnew System::EventHandler(this, &LoadingPage::btncancel_Click);
			// 
			// LoadingPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(933, 377);
			this->Controls->Add(this->btncancel);
			this->Controls->Add(this->btnEmergency);
			this->Controls->Add(this->btnFacilities);
			this->Controls->Add(this->btnAbout);
			this->Controls->Add(this->btnPatient);
			this->Controls->Add(this->btnDoctor);
			this->Controls->Add(this->btnAdmin);
			this->Controls->Add(this->Llogin);
			this->Controls->Add(this->welcomelabel);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"LoadingPage";
			this->Text = L"LoadingPage";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	




	private: System::Void btnAbout_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("University Medical Centre\n\nIUT has a Medical Center at the North-West corner of the campus. It features five well-equipped observation beds, a Mini Operation Room, a Medicine store, a waiting area, and a pathological laboratory. The center provides standard healthcare services to students, faculty, staff, and their family members. Three doctors and two nurses are available 24/7. In case of emergency, contact the Medical Centre Hotline: +88 01844 056056. Personal numbers of doctors:\n\n"
            "Dr. Fakharuddin Ahmed, Chief Medical Officer: +88 01685 640650\n"
            "Dr. Md. Ali Tareq, Senior Medical Officer: +88 01716 323956\n"
            "Dr. Salma Khatun, Medical Officer: +88 01917 309481.\n\n"
            "Students receive medical facilities as per the IUT health care policy. No medical facilities or bill reimbursements are provided during leave/vacation, except for officially arranged training programs. In case of hospitalization, students are entitled to a single AC cabin in authorized hospitals such as Women Medical College and Hospital (Uttara), Holy Family Red Crescent Medical College Hospital (Eskaton, Dhaka), Ahsania Mission Cancer General Hospital & Medical College (Uttara), and International Medical College Hospital (Gusulia, Gazipur).\n\n"
            "If a student chooses higher accommodation, they must bear the difference and settle it with the hospital before release. Seek advice from an IUT Physician before hospitalization. Prior permission from an IUT Doctor is necessary before consulting an outside medical specialist. Medical expenses will be allowed following University rules. Prescriptions and receipts must be on printed forms. Details can be obtained from the Medical Center. Submit medical bills for reimbursement within the ongoing financial year (January-December).\n\n`Hotline number of IUT Medical Center: +88 01844056056\n", "About ", MessageBoxButtons::OK);
		return;
	}
		   public: bool switchPatient = false;
				 bool switchAdmin = false;
				 public:  bool switchDoctor = false;
private: System::Void btnPatient_Click(System::Object^ sender, System::EventArgs^ e) {
	this->switchPatient = true;
	this->Close();

}
private: System::Void btncancel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void btnDoctor_Click(System::Object^ sender, System::EventArgs^ e) {
	this->switchDoctor = true;
	this->Close();
}
private: System::Void btnAdmin_Click(System::Object^ sender, System::EventArgs^ e) {
	this->switchAdmin = true;
	this->Close();
}
};
}
