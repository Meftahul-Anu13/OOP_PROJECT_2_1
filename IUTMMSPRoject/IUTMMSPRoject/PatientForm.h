#pragma once

namespace IUTMMSPRoject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PatientForm
	/// </summary>
	public ref class PatientForm : public System::Windows::Forms::Form
	{
	public:
		PatientForm(void)
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
		~PatientForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnFindDoctor;
	protected:

	protected:
	private: System::Windows::Forms::CheckBox^ chkStudent;
	private: System::Windows::Forms::CheckBox^ chkStaff;
	private: System::Windows::Forms::Button^ button1;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PatientForm::typeid));
			this->btnFindDoctor = (gcnew System::Windows::Forms::Button());
			this->chkStudent = (gcnew System::Windows::Forms::CheckBox());
			this->chkStaff = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnFindDoctor
			// 
			this->btnFindDoctor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFindDoctor->Location = System::Drawing::Point(97, 125);
			this->btnFindDoctor->Name = L"btnFindDoctor";
			this->btnFindDoctor->Size = System::Drawing::Size(200, 60);
			this->btnFindDoctor->TabIndex = 0;
			this->btnFindDoctor->Text = L"Find A Doctor";
			this->btnFindDoctor->UseVisualStyleBackColor = true;
			// 
			// chkStudent
			// 
			this->chkStudent->AutoSize = true;
			this->chkStudent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chkStudent->Location = System::Drawing::Point(495, 73);
			this->chkStudent->Name = L"chkStudent";
			this->chkStudent->Size = System::Drawing::Size(151, 24);
			this->chkStudent->TabIndex = 2;
			this->chkStudent->Text = L"Are You Student ";
			this->chkStudent->UseVisualStyleBackColor = true;
			// 
			// chkStaff
			// 
			this->chkStaff->AutoSize = true;
			this->chkStaff->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chkStaff->Location = System::Drawing::Point(495, 52);
			this->chkStaff->Name = L"chkStaff";
			this->chkStaff->Size = System::Drawing::Size(180, 24);
			this->chkStaff->TabIndex = 3;
			this->chkStaff->Text = L"Are You Staff/Faculty";
			this->chkStaff->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(97, 213);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(200, 55);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Appoint A Doctor";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// PatientForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(807, 347);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->chkStaff);
			this->Controls->Add(this->chkStudent);
			this->Controls->Add(this->btnFindDoctor);
			this->Name = L"PatientForm";
			this->Text = L"PatientForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
