#pragma once
#include "RegisterForm.h"

namespace GUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ fotoLogo;
	private: System::Windows::Forms::Label^ lbl_username;
	private: System::Windows::Forms::TextBox^ txt_username;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt_password;
	private: System::Windows::Forms::Button^ txt_startSession;
	private: System::Windows::Forms::Button^ button2;


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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->fotoLogo = (gcnew System::Windows::Forms::PictureBox());
			this->lbl_username = (gcnew System::Windows::Forms::Label());
			this->txt_username = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_password = (gcnew System::Windows::Forms::TextBox());
			this->txt_startSession = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fotoLogo))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(150, 468);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(172, 28);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Registrarse";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->ContextMenuStripChanged += gcnew System::EventHandler(this, &LoginForm::button1_Click);
			this->button1->Click += gcnew System::EventHandler(this, &LoginForm::button1_Click);
			// 
			// fotoLogo
			// 
			this->fotoLogo->Location = System::Drawing::Point(40, 32);
			this->fotoLogo->Name = L"fotoLogo";
			this->fotoLogo->Size = System::Drawing::Size(403, 431);
			this->fotoLogo->TabIndex = 1;
			this->fotoLogo->TabStop = false;
			this->fotoLogo->Click += gcnew System::EventHandler(this, &LoginForm::fotoLogo_Click);
			// 
			// lbl_username
			// 
			this->lbl_username->AutoSize = true;
			this->lbl_username->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->lbl_username->Location = System::Drawing::Point(106, 311);
			this->lbl_username->Name = L"lbl_username";
			this->lbl_username->Size = System::Drawing::Size(65, 13);
			this->lbl_username->TabIndex = 2;
			this->lbl_username->Text = L"USUARIO : ";
			this->lbl_username->Click += gcnew System::EventHandler(this, &LoginForm::label1_Click);
			// 
			// txt_username
			// 
			this->txt_username->Location = System::Drawing::Point(184, 313);
			this->txt_username->Name = L"txt_username";
			this->txt_username->Size = System::Drawing::Size(152, 20);
			this->txt_username->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(95, 349);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"PASSWORD :";
			// 
			// txt_password
			// 
			this->txt_password->Location = System::Drawing::Point(192, 349);
			this->txt_password->Name = L"txt_password";
			this->txt_password->Size = System::Drawing::Size(153, 20);
			this->txt_password->TabIndex = 5;
			this->txt_password->TextChanged += gcnew System::EventHandler(this, &LoginForm::txt_password_TextChanged);
			// 
			// txt_startSession
			// 
			this->txt_startSession->Location = System::Drawing::Point(173, 391);
			this->txt_startSession->Name = L"txt_startSession";
			this->txt_startSession->Size = System::Drawing::Size(121, 30);
			this->txt_startSession->TabIndex = 6;
			this->txt_startSession->Text = L"INICIAR SESION";
			this->txt_startSession->UseVisualStyleBackColor = true;
			this->txt_startSession->Click += gcnew System::EventHandler(this, &LoginForm::txt_startSession_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(360, 355);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(9, 13);
			this->button2->TabIndex = 7;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &LoginForm::button2_Click);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(505, 602);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->txt_startSession);
			this->Controls->Add(this->txt_password);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_username);
			this->Controls->Add(this->lbl_username);
			this->Controls->Add(this->fotoLogo);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"LoginForm";
			this->Text = L"LoginForm";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fotoLogo))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		

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

	if (Service::QueryDriverPassengerbyUsername(usuario, contra)) {
		MessageBox::Show("El usuario " + contra + " ha iniciado sesion ");
	}
	else {
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
