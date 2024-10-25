#pragma once

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

		static Passenger^ User;
		MyForm(RuralConnect::Passenger^ user)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
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

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button2;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ txtCategoria;

	private: System::Windows::Forms::Button^ button3;
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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtCategoria = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btPhotoPass = (gcnew System::Windows::Forms::Button());
			this->txtUserName = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtNumeroViajes = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(34, 108);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(162, 189);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"LOGOUT";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(247, 170);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"puntaje";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// txtCategoria
			// 
			this->txtCategoria->AutoSize = true;
			this->txtCategoria->Location = System::Drawing::Point(385, 250);
			this->txtCategoria->Name = L"txtCategoria";
			this->txtCategoria->Size = System::Drawing::Size(66, 16);
			this->txtCategoria->TabIndex = 5;
			this->txtCategoria->Text = L"Categoria";
			this->txtCategoria->Click += gcnew System::EventHandler(this, &MyForm::txtCategoria_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(316, 311);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(173, 27);
			this->button3->TabIndex = 6;
			this->button3->Text = L"¿A DÓNDE VAMOS\?";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(408, 163);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(158, 23);
			this->progressBar1->TabIndex = 7;
			this->progressBar1->Value = 2;
			this->progressBar1->Click += gcnew System::EventHandler(this, &MyForm::progressBar1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label4->Location = System::Drawing::Point(365, 57);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(95, 16);
			this->label4->TabIndex = 8;
			this->label4->Text = L"BIENVENIDO :";
			// 
			// btPhotoPass
			// 
			this->btPhotoPass->Location = System::Drawing::Point(68, 313);
			this->btPhotoPass->Name = L"btPhotoPass";
			this->btPhotoPass->Size = System::Drawing::Size(96, 23);
			this->btPhotoPass->TabIndex = 9;
			this->btPhotoPass->Text = L"Subir Foto";
			this->btPhotoPass->UseVisualStyleBackColor = true;
			// 
			// txtUserName
			// 
			this->txtUserName->AutoSize = true;
			this->txtUserName->Location = System::Drawing::Point(339, 121);
			this->txtUserName->Name = L"txtUserName";
			this->txtUserName->Size = System::Drawing::Size(128, 16);
			this->txtUserName->TabIndex = 3;
			this->txtUserName->Text = L"Nombre del Usuario";
			this->txtUserName->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(271, 250);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 16);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Categoria: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(251, 202);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(119, 16);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Cantidad de viajes";
			// 
			// txtNumeroViajes
			// 
			this->txtNumeroViajes->AutoSize = true;
			this->txtNumeroViajes->Location = System::Drawing::Point(408, 202);
			this->txtNumeroViajes->Name = L"txtNumeroViajes";
			this->txtNumeroViajes->Size = System::Drawing::Size(52, 16);
			this->txtNumeroViajes->TabIndex = 12;
			this->txtNumeroViajes->Text = L"numero";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(626, 431);
			this->Controls->Add(this->txtNumeroViajes);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btPhotoPass);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->txtCategoria);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtUserName);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox1);
			this->HelpButton = true;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
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
};
}
