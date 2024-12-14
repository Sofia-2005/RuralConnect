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
			// // Cambiar la fuente aquí
			
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
	private: System::Windows::Forms::PictureBox^ pictureBox1;



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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fotoLogo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnRegister
			// 
			this->btnRegister->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRegister->Location = System::Drawing::Point(207, 534);
			this->btnRegister->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnRegister->Name = L"btnRegister";
			this->btnRegister->Size = System::Drawing::Size(179, 52);
			this->btnRegister->TabIndex = 0;
			this->btnRegister->Text = L"REGISTRARSE";
			this->btnRegister->UseVisualStyleBackColor = true;
			this->btnRegister->ContextMenuStripChanged += gcnew System::EventHandler(this, &LoginForm::btnRegister_Click);
			this->btnRegister->Click += gcnew System::EventHandler(this, &LoginForm::btnRegister_Click);
			// 
			// fotoLogo
			// 
			this->fotoLogo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"fotoLogo.Image")));
			this->fotoLogo->Location = System::Drawing::Point(81, -25);
			this->fotoLogo->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->fotoLogo->Name = L"fotoLogo";
			this->fotoLogo->Size = System::Drawing::Size(419, 455);
			this->fotoLogo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->fotoLogo->TabIndex = 1;
			this->fotoLogo->TabStop = false;
			this->fotoLogo->Click += gcnew System::EventHandler(this, &LoginForm::fotoLogo_Click);
			// 
			// lbl_username
			// 
			this->lbl_username->AutoSize = true;
			this->lbl_username->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lbl_username->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_username->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->lbl_username->Location = System::Drawing::Point(127, 292);
			this->lbl_username->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbl_username->Name = L"lbl_username";
			this->lbl_username->Size = System::Drawing::Size(101, 21);
			this->lbl_username->TabIndex = 2;
			this->lbl_username->Text = L"USUARIO : ";
			this->lbl_username->Click += gcnew System::EventHandler(this, &LoginForm::label1_Click);
			// 
			// txt_username
			// 
			this->txt_username->Location = System::Drawing::Point(297, 292);
			this->txt_username->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_username->Name = L"txt_username";
			this->txt_username->Size = System::Drawing::Size(201, 22);
			this->txt_username->TabIndex = 3;
			this->txt_username->TextChanged += gcnew System::EventHandler(this, &LoginForm::txt_username_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(127, 356);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(113, 21);
			this->label1->TabIndex = 4;
			this->label1->Text = L"PASSWORD :";
			// 
			// txt_password
			// 
			this->txt_password->Location = System::Drawing::Point(297, 351);
			this->txt_password->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_password->Name = L"txt_password";
			this->txt_password->Size = System::Drawing::Size(201, 22);
			this->txt_password->TabIndex = 5;
			this->txt_password->TextChanged += gcnew System::EventHandler(this, &LoginForm::txt_password_TextChanged);
			// 
			// txt_startSession
			// 
			this->txt_startSession->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->txt_startSession->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->txt_startSession->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_startSession->ForeColor = System::Drawing::Color::Brown;
			this->txt_startSession->Location = System::Drawing::Point(207, 438);
			this->txt_startSession->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_startSession->Name = L"txt_startSession";
			this->txt_startSession->Size = System::Drawing::Size(179, 55);
			this->txt_startSession->TabIndex = 6;
			this->txt_startSession->Text = L"INICIAR SESION";
			this->txt_startSession->UseVisualStyleBackColor = false;
			this->txt_startSession->Click += gcnew System::EventHandler(this, &LoginForm::txt_startSession_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(508, 347);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(32, 28);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &LoginForm::pictureBox1_Click);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(615, 671);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->txt_startSession);
			this->Controls->Add(this->txt_password);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_username);
			this->Controls->Add(this->lbl_username);
			this->Controls->Add(this->btnRegister);
			this->Controls->Add(this->fotoLogo);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"LoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LoginForm";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fotoLogo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
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
		   void LoginForm::OnButtonPaint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
			   Button^ button = (Button^)sender;

			   // Colores para el botón
			   System::Drawing::Color buttonColor = System::Drawing::Color::FromArgb(224, 255, 255); // Azul moderno
			   System::Drawing::Color textColor = System::Drawing::Color::White; // Texto blanco

			   // Dibuja un fondo redondeado
			   System::Drawing::Drawing2D::GraphicsPath^ path = gcnew System::Drawing::Drawing2D::GraphicsPath();
			   path->AddArc(0, 0, 20, 20, 180, 90); // Esquina superior izquierda
			   path->AddArc(button->Width - 21, 0, 20, 20, 270, 90); // Esquina superior derecha
			   path->AddArc(button->Width - 21, button->Height - 21, 20, 20, 0, 90); // Esquina inferior derecha
			   path->AddArc(0, button->Height - 21, 20, 20, 90, 90); // Esquina inferior izquierda
			   path->CloseFigure();

			   e->Graphics->SmoothingMode = System::Drawing::Drawing2D::SmoothingMode::AntiAlias;
			   e->Graphics->FillPath(gcnew System::Drawing::SolidBrush(buttonColor), path);

			   // Dibuja el texto centrado
			   System::Drawing::StringFormat^ sf = gcnew System::Drawing::StringFormat();
			   sf->Alignment = System::Drawing::StringAlignment::Center;
			   sf->LineAlignment = System::Drawing::StringAlignment::Center;
			   e->Graphics->DrawString(button->Text, button->Font, gcnew System::Drawing::SolidBrush(textColor), button->ClientRectangle, sf);
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
			MyForm^ f = gcnew MyForm(p, this);

			//Service::PasajeroActual = Service::QueryPassengerbyUsername(usuario);
			f->Show();
		}
		else {
			// Si es conductor
			Driver^ d = Service::QueryDriverbyUsername(usuario);
			PrincipalFormDriver^ f = gcnew PrincipalFormDriver(d,this);

			//Service::Conductor_actual = Service::QueryDriverbyUsername(usuario);
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
private:
	bool mostrarPassword = false; // Variable para alternar entre mostrar/ocultar

private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (mostrarPassword) {
		txt_password->PasswordChar = '*'; // Oculta la contraseña
	}
	else {
		txt_password->PasswordChar = '\0'; // Muestra el texto real
	}
	mostrarPassword = !mostrarPassword; // Cambia el estado
}
private: System::Void txt_username_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
