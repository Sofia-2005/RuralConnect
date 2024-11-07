#pragma once
#include "RegisterForm.h"
#include "PrincipalForm.h"
#include "PrincipalFormDriver.h"
#include "ReportForm.h"



namespace GUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	using namespace RuralService;


	/// <summary>
	/// Resumen de LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnRegister;
	protected:

	private: System::Windows::Forms::PictureBox^ fotoLogo;
	private: System::Windows::Forms::Label^ lbl_username;
	private: System::Windows::Forms::TextBox^ txt_username;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt_password;
	private: System::Windows::Forms::Button^ txt_startSession;



	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->btnRegister = (gcnew System::Windows::Forms::Button());
			this->fotoLogo = (gcnew System::Windows::Forms::PictureBox());
			this->lbl_username = (gcnew System::Windows::Forms::Label());
			this->txt_username = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_password = (gcnew System::Windows::Forms::TextBox());
			this->txt_startSession = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fotoLogo))->BeginInit();
			this->SuspendLayout();
			// 
			// btnRegister
			// 
			this->btnRegister->Location = System::Drawing::Point(155, 363);
			this->btnRegister->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnRegister->Name = L"btnRegister";
			this->btnRegister->Size = System::Drawing::Size(134, 42);
			this->btnRegister->TabIndex = 0;
			this->btnRegister->Text = L"REGISTRARSE";
			this->btnRegister->UseVisualStyleBackColor = true;
			this->btnRegister->ContextMenuStripChanged += gcnew System::EventHandler(this, &LoginForm::btnRegister_Click);
			this->btnRegister->Click += gcnew System::EventHandler(this, &LoginForm::btnRegister_Click);
			// 
			// fotoLogo
			// 
			this->fotoLogo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"fotoLogo.Image")));
			this->fotoLogo->Location = System::Drawing::Point(98, -32);
			this->fotoLogo->Name = L"fotoLogo";
			this->fotoLogo->Size = System::Drawing::Size(297, 339);
			this->fotoLogo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->fotoLogo->TabIndex = 1;
			this->fotoLogo->TabStop = false;
			this->fotoLogo->Click += gcnew System::EventHandler(this, &LoginForm::fotoLogo_Click);
			// 
			// lbl_username
			// 
			this->lbl_username->AutoSize = true;
			this->lbl_username->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->lbl_username->Location = System::Drawing::Point(95, 203);
			this->lbl_username->Name = L"lbl_username";
			this->lbl_username->Size = System::Drawing::Size(65, 13);
			this->lbl_username->TabIndex = 2;
			this->lbl_username->Text = L"USUARIO : ";
			this->lbl_username->Click += gcnew System::EventHandler(this, &LoginForm::label1_Click);
			// 
			// txt_username
			// 
			this->txt_username->Location = System::Drawing::Point(223, 203);
			this->txt_username->Name = L"txt_username";
			this->txt_username->Size = System::Drawing::Size(152, 20);
			this->txt_username->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(95, 246);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"PASSWORD :";
			// 
			// txt_password
			// 
			this->txt_password->Location = System::Drawing::Point(223, 246);
			this->txt_password->Name = L"txt_password";
			this->txt_password->Size = System::Drawing::Size(152, 20);
			this->txt_password->TabIndex = 5;
			this->txt_password->TextChanged += gcnew System::EventHandler(this, &LoginForm::txt_password_TextChanged);
			// 
			// txt_startSession
			// 
			this->txt_startSession->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->txt_startSession->Location = System::Drawing::Point(155, 294);
			this->txt_startSession->Name = L"txt_startSession";
			this->txt_startSession->Size = System::Drawing::Size(134, 45);
			this->txt_startSession->TabIndex = 6;
			this->txt_startSession->Text = L"INICIAR SESION";
			this->txt_startSession->UseVisualStyleBackColor = true;
			this->txt_startSession->Click += gcnew System::EventHandler(this, &LoginForm::txt_startSession_Click);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(505, 447);
			this->Controls->Add(this->txt_startSession);
			this->Controls->Add(this->txt_password);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_username);
			this->Controls->Add(this->lbl_username);
			this->Controls->Add(this->btnRegister);
			this->Controls->Add(this->fotoLogo);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"LoginForm";
			this->Text = L"LoginForm";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fotoLogo))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnRegister_Click(System::Object^ sender, System::EventArgs^ e) {

		//this->Hide();
		RegisterForm^ form1 = gcnew RegisterForm();
		form1->Show();
		
	}
	private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->BackColor = System::Drawing::Color::Black; // Color negro

		/*OpenFileDialog^ ofd = gcnew OpenFileDialog();
		ofd->Filter = "Image Files (*.jpg;*.jpeg;)|*.jpg;*.jpeg;";
		if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			fotoLogo->Image = gcnew Bitmap(ofd->FileName);
			// Ajustar el tamaño de la imagen para que se acople al PictureBox
			fotoLogo->SizeMode = PictureBoxSizeMode::StretchImage;
		}*/
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void txt_startSession_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ usuario = txt_username->Text;
	String^ contra = txt_password->Text;

	// Verifica si es el administrador
	if (usuario == "admin" && contra == "admin") {
		// Si es admin, redirige al formulario de reportes
		MessageBox::Show("Administrador ha iniciado sesión.");
		// Aquí se abre el formulario de reportes (cambia "ReportForm" por el nombre de tu formulario de reportes)
		ReportForm^ newForm = gcnew ReportForm();
		newForm->Show();
		// Oculta el formulario actual
		this->Hide();
	}
	else if (Service::QueryDriverPassengerbyUsername(usuario, contra)) {
		// Si no es admin, sigue con la lógica actual de conductor o pasajero
		MessageBox::Show("El usuario " + usuario + " ha iniciado sesión.");

		int i = Service::PassengerOrDriver(usuario);
		if (i == 0) {
			// Si es pasajero
			Passenger^ p = Service::QueryPassengerbyUsername(usuario);
			MyForm^ f = gcnew MyForm(p);

			Service::PasajeroActual = Service::QueryPassengerbyUsername(usuario);
			f->Show();
		}
		else {
			// Si es conductor
			Driver^ d = Service::QueryDriverbyUsername(usuario);
			PrincipalFormDriver^ f = gcnew PrincipalFormDriver(d);

			Service::Conductor_actual = Service::QueryDriverbyUsername(usuario);
			f->Show();
		}

		// Oculta el formulario actual
		this->Hide();
	}
	else {
		// Si el usuario no existe
		MessageBox::Show("Usted no se encuentra registrado, debe realizarlo");
	}
}
private: System::Void txt_password_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	txt_password->PasswordChar = '*';
}
private: System::Void fotoLogo_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

}
};
}
