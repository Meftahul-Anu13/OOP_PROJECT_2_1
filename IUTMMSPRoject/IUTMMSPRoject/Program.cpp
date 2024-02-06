#include"firstLoginForm.h"
#include"Register.h"
#include"Newpassform.h"
#include"LoadingPage.h"
#include "Doctorlogin.h"
#include "DoctorsFunction.h"
#include "CheckAppointment.h"
#include "patientDetails1.h"
#include"AdminLogin.h"
#include"AdminInfo.h"
#include"Adminfunction.h"
#include"PatientInfo.h"
//namespace IUTMMSPRoject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	using namespace System;
	using namespace System::Windows::Forms;
	void main()
	{
		Application::EnableVisualStyles();
		Application::SetCompatibleTextRenderingDefault(false);

		UserInfo^ user = nullptr;
		DoctoInfo^ userdr = nullptr;
		AdminInfo^ usersadmin = nullptr;

		IUTMMSPRoject::LoadingPage loading;
		loading.ShowDialog();
		while (true)
		{
			if (loading.switchPatient)
			{


				IUTMMSPRoject::firstLoginForm loginform;
				loginform.ShowDialog();
				user = loginform.user;
				if (loginform.SwitchLogin) {
					if (user != nullptr)
					{
						MessageBox::Show("Succesful Authentication of " + user->Name, "Program.cpp", MessageBoxButtons::OK);

					}
					else {
						MessageBox::Show("Error Authentication", "Program.cpp", MessageBoxButtons::OK);
						continue;

					}
				}
				if (loginform.swithregister)
				{
					IUTMMSPRoject::Register registerform;
					registerform.ShowDialog();
					if (registerform.swithLogin)
					{
						//loginform.ShowDialog();
						continue;

					}

					else {
						user = registerform.user;
						break;
					}
					//continue;
				}
				if (loginform.switchforgotten)
				{
					IUTMMSPRoject::Newpassform newpassform;

					newpassform.ShowDialog();
					if (newpassform.switchLogin)
					{
						//loginform.ShowDialog();
						continue;
					}

					/*else {
						user = newpassform.UseWaitCursor;
						break;
					}*/

				}
				else {
					user = loginform.user;

					break;
				}
			}
			if (loading.switchDoctor)
			{
				IUTMMSPRoject::Doctorlogin drLogin;
				drLogin.ShowDialog();
				userdr = drLogin.userdr;
				if (userdr != nullptr)
				{
					//MessageBox::Show("Succesful Authentication of " + userdr->Name, "Program.cpp", MessageBoxButtons::OK);
					IUTMMSPRoject::DoctorsFunction drfunc;
					drfunc.ShowDialog();
					if (drfunc.switchCheckAppoint)
					{
						IUTMMSPRoject::CheckAppointment checkAppoint(userdr);
						Application::Run(% checkAppoint);
						continue;
					}

				}
				else {
					MessageBox::Show("Error Authentication", "Program.cpp", MessageBoxButtons::OK);
					continue;

				}
			}
			if (loading.switchAdmin)
			{
				IUTMMSPRoject::AdminLogin admin;
				admin.ShowDialog();
				usersadmin = admin.user;
				if (usersadmin != nullptr)
				{
					//MessageBox::Show("Succesful Authentication of " + userdr->Name, "Program.cpp", MessageBoxButtons::OK);
					IUTMMSPRoject::Adminfunction adminfunc;
					adminfunc.ShowDialog();
					if (adminfunc.switchpatientdetails)
					{
						IUTMMSPRoject::PatientInfo user;
						Application::Run(% user);
						continue;
					}
					//continue;
					/*if (adminfunc.SwitchpatientUpdate)
					{

					}*/

				}
				else {
					MessageBox::Show("Error Authentication", "Program.cpp", MessageBoxButtons::OK);
					continue;

				}

			}


		}


	}
//}