#pragma once
#include "FindTrip.h"

namespace GUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace RuralConnect;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:

		Passenger^ User;
		Form^ login;
		MyForm(RuralConnect::Passenger^ user, Form^ log)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			login = log;
			this->User = user;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ PhotoPasajero;
	protected:


	private: System::Windows::Forms::Button^ btnLogout;




	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ txtCategoria;
	private: System::Windows::Forms::Button^ btnPlace;


	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btPhotoPass;
	private: System::Windows::Forms::Label^ txtUserName;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ txtNumeroViajes;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->PhotoPasajero = (gcnew System::Windows::Forms::PictureBox());
			this->btnLogout = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtCategoria = (gcnew System::Windows::Forms::Label());
			this->btnPlace = (gcnew System::Windows::Forms::Button());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btPhotoPass = (gcnew System::Windows::Forms::Button());
			this->txtUserName = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtNumeroViajes = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PhotoPasajero))->BeginInit();
			this->SuspendLayout();
			// 
			// PhotoPasajero
			// 
			this->PhotoPasajero->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		//	this->PhotoPasajero->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PhotoPasajero.Image")));
			this->PhotoPasajero->Location = System::Drawing::Point(28, 82);
			this->PhotoPasajero->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PhotoPasajero->Name = L"PhotoPasajero";
			this->PhotoPasajero->Size = System::Drawing::Size(202, 235);
			this->PhotoPasajero->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PhotoPasajero->TabIndex = 1;
			this->PhotoPasajero->TabStop = false;
			// 
			// btnLogout
			// 
			this->btnLogout->Location = System::Drawing::Point(9, 15);
			this->btnLogout->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnLogout->Name = L"btnLogout";
			this->btnLogout->Size = System::Drawing::Size(93, 23);
			this->btnLogout->TabIndex = 2;
			this->btnLogout->Text = L"LOGOUT";
			this->btnLogout->UseVisualStyleBackColor = true;
			this->btnLogout->Click += gcnew System::EventHandler(this, &MyForm::btnLogout_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(251, 170);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(79, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Calificación:";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// txtCategoria
			// 
			this->txtCategoria->AutoSize = true;
			this->txtCategoria->Location = System::Drawing::Point(395, 241);
			this->txtCategoria->Name = L"txtCategoria";
			this->txtCategoria->Size = System::Drawing::Size(66, 16);
			this->txtCategoria->TabIndex = 5;
			this->txtCategoria->Text = L"Categoria";
			this->txtCategoria->Click += gcnew System::EventHandler(this, &MyForm::txtCategoria_Click);
			// 
			// btnPlace
			// 
			this->btnPlace->BackColor = System::Drawing::Color::AntiqueWhite;
			this->btnPlace->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnPlace->Location = System::Drawing::Point(255, 282);
			this->btnPlace->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnPlace->Name = L"btnPlace";
			this->btnPlace->Size = System::Drawing::Size(232, 85);
			this->btnPlace->TabIndex = 6;
			this->btnPlace->Text = L"¿A DÓNDE VAMOS\?";
			this->btnPlace->UseVisualStyleBackColor = false;
			this->btnPlace->Click += gcnew System::EventHandler(this, &MyForm::btnPlace_Click);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(397, 162);
			this->progressBar1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(157, 23);
			this->progressBar1->TabIndex = 7;
			this->progressBar1->Value = 2;
			this->progressBar1->Click += gcnew System::EventHandler(this, &MyForm::progressBar1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label4->Location = System::Drawing::Point(275, 38);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(95, 16);
			this->label4->TabIndex = 8;
			this->label4->Text = L"BIENVENIDO :";
			// 
			// btPhotoPass
			// 
			this->btPhotoPass->Location = System::Drawing::Point(69, 334);
			this->btPhotoPass->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btPhotoPass->Name = L"btPhotoPass";
			this->btPhotoPass->Size = System::Drawing::Size(111, 34);
			this->btPhotoPass->TabIndex = 9;
			this->btPhotoPass->Text = L"Cambiar Foto";
			this->btPhotoPass->UseVisualStyleBackColor = true;
			this->btPhotoPass->Click += gcnew System::EventHandler(this, &MyForm::btPhotoPass_Click);
			// 
			// txtUserName
			// 
			this->txtUserName->AutoSize = true;
			this->txtUserName->Location = System::Drawing::Point(339, 121);
			this->txtUserName->Name = L"txtUserName";
			this->txtUserName->Size = System::Drawing::Size(125, 16);
			this->txtUserName->TabIndex = 3;
			this->txtUserName->Text = L"Nombre del usuario";
			this->txtUserName->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(251, 241);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 16);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Categoria: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(251, 207);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(122, 16);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Cantidad de viajes:";
			// 
			// txtNumeroViajes
			// 
			this->txtNumeroViajes->AutoSize = true;
			this->txtNumeroViajes->Location = System::Drawing::Point(395, 207);
			this->txtNumeroViajes->Name = L"txtNumeroViajes";
			this->txtNumeroViajes->Size = System::Drawing::Size(55, 16);
			this->txtNumeroViajes->TabIndex = 12;
			this->txtNumeroViajes->Text = L"Número";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(627, 431);
			this->Controls->Add(this->txtNumeroViajes);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btPhotoPass);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->btnPlace);
			this->Controls->Add(this->txtCategoria);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtUserName);
			this->Controls->Add(this->btnLogout);
			this->Controls->Add(this->PhotoPasajero);
			this->HelpButton = true;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PhotoPasajero))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		

	}
private: System::Void progressBar1_Click(System::Object^ sender, System::EventArgs^ e) {
	progressBar1->Value = 20*(User->Qualification);
}
private: System::Void txtCategoria_Click(System::Object^ sender, System::EventArgs^ e) {
		//txtCategoria-> Text = User->Qualification;
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	txtUserName->Text = User->Name;
	//Codigoo para establecer la imagene en el form
	if (User->Photo != nullptr && User->Photo->Length > 0) {
		// Convertir el array<Byte>^ en una imagen
		System::IO::MemoryStream^ memoryStream = gcnew System::IO::MemoryStream(User->Photo);
		try {

			PhotoPasajero->Image = System::Drawing::Image::FromStream(memoryStream);
		}
		catch (System::Exception^ ex) {
			MessageBox::Show("Error al cargar la imagen: " + ex->Message);
		}
		finally {
			delete memoryStream; // Liberar recursos
		}
	}
	else {
		PhotoPasajero->Image = nullptr; // Opcional: Establecer imagen predeterminada
		//PhotoPasajero->Image = System::Drawing::Image::FromFile("C:\\Users\\USER\\OneDrive\\Imágenes\\ilustracion-vectorial-de-dibujos-animados-los-ninos-van-a-la-escuela-mj42xy.jpg");

	}

	if (User->Qualification == 0) {
		txtCategoria->Text = "CARBON";
	}
	else if (User->Qualification == 1) {
		txtCategoria->Text = "MADERA";
	}
	else if (User->Qualification == 2) {
		txtCategoria->Text = "BRONCE";
	}

	else if (User->Qualification == 3) {
		txtCategoria->Text = "PLATA";
	}
	else{
		txtCategoria->Text = "ORO";
	}
}

private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnPlace_Click(System::Object^ sender, System::EventArgs^ e) {
	// Crear una instancia del nuevo formulario (Form2 en este caso)
	FindTrip^ newForm = gcnew FindTrip(User, this);
	// Mostrar el nuevo formulario
	newForm->Show();

	// Ocultar el formulario actual 
	this->Hide();
}
private: System::Void btnLogout_Click(System::Object^ sender, System::EventArgs^ e) {
	login->Show();
	this->Close();  // Ocultar el formulario actual
}
private: System::Void btPhotoPass_Click(System::Object^ sender, System::EventArgs^ e) {

	OpenFileDialog^ ofd = gcnew OpenFileDialog();
	ofd->Filter = "Image Files (*.jpg;*.jpeg;)|*.jpg;*.jpeg;";
	if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		PhotoPasajero->Image = gcnew Bitmap(ofd->FileName);

	}
	//Secambia la foto del usuario Acepta cambio
	System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
	PhotoPasajero->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
	User->Photo = ms->ToArray();
	Service::UpdatePassenger(User);
}
};
}
