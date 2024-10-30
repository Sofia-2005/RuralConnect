#pragma once

#include "DriverPage.h"

namespace GUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace RuralConnect;
	/// <summary>
	/// Resumen de PrincipalFormDriver
	/// </summary>
	public ref class PrincipalFormDriver : public System::Windows::Forms::Form
	{
	public:
		static Driver^ User;
		PrincipalFormDriver(RuralConnect::Driver^ user)
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
		~PrincipalFormDriver()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label4;
	protected:

	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::ProgressBar^ pB;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ txtCompletedTrips;


	private: System::Windows::Forms::Label^ txtScore;

	private: System::Windows::Forms::Label^ txtDriverName;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label5;







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
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pB = (gcnew System::Windows::Forms::ProgressBar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtCompletedTrips = (gcnew System::Windows::Forms::Label());
			this->txtScore = (gcnew System::Windows::Forms::Label());
			this->txtDriverName = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label4->Location = System::Drawing::Point(369, 61);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(95, 16);
			this->label4->TabIndex = 16;
			this->label4->Text = L"BIENVENIDO :";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(325, 288);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(208, 79);
			this->button3->TabIndex = 14;
			this->button3->Text = L"¿A DÓNDE VAMOS\?";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &PrincipalFormDriver::button3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(261, 157);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(79, 16);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Calificación:";
			this->label2->Click += gcnew System::EventHandler(this, &PrincipalFormDriver::label2_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(88, 23);
			this->button2->TabIndex = 10;
			this->button2->Text = L"LOGOUT";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(29, 52);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(196, 240);
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// pB
			// 
			this->pB->Location = System::Drawing::Point(351, 150);
			this->pB->Name = L"pB";
			this->pB->Size = System::Drawing::Size(158, 23);
			this->pB->TabIndex = 15;
			this->pB->Value = 100;
			this->pB->Click += gcnew System::EventHandler(this, &PrincipalFormDriver::progressBar1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(261, 191);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(164, 16);
			this->label1->TabIndex = 18;
			this->label1->Text = L"N° de viajes completados:";
			// 
			// txtCompletedTrips
			// 
			this->txtCompletedTrips->AutoSize = true;
			this->txtCompletedTrips->Location = System::Drawing::Point(431, 191);
			this->txtCompletedTrips->Name = L"txtCompletedTrips";
			this->txtCompletedTrips->Size = System::Drawing::Size(177, 16);
			this->txtCompletedTrips->TabIndex = 20;
			this->txtCompletedTrips->Text = L"Cant. de viajes completados";
			// 
			// txtScore
			// 
			this->txtScore->AutoSize = true;
			this->txtScore->Location = System::Drawing::Point(531, 157);
			this->txtScore->Name = L"txtScore";
			this->txtScore->Size = System::Drawing::Size(73, 16);
			this->txtScore->TabIndex = 19;
			this->txtScore->Text = L"Puntuación";
			// 
			// txtDriverName
			// 
			this->txtDriverName->AutoSize = true;
			this->txtDriverName->Location = System::Drawing::Point(348, 102);
			this->txtDriverName->Name = L"txtDriverName";
			this->txtDriverName->Size = System::Drawing::Size(140, 16);
			this->txtDriverName->TabIndex = 17;
			this->txtDriverName->Text = L"Nombre del conductor";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(55, 309);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(130, 37);
			this->button1->TabIndex = 21;
			this->button1->Text = L"Subir foto";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(261, 224);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(104, 16);
			this->label3->TabIndex = 22;
			this->label3->Text = L"Modelo de auto:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(373, 224);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(91, 16);
			this->label5->TabIndex = 23;
			this->label5->Text = L"Audi Z32 Gray";
			// 
			// PrincipalFormDriver
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(640, 419);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txtCompletedTrips);
			this->Controls->Add(this->txtScore);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtDriverName);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pB);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"PrincipalFormDriver";
			this->Text = L"PrincipalFormDriver";
			this->Load += gcnew System::EventHandler(this, &PrincipalFormDriver::PrincipalFormDriver_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void progressBar1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void PrincipalFormDriver_Load(System::Object^ sender, System::EventArgs^ e) {

	txtDriverName->Text = User->Name + " " + User->LastName;

	txtScore->Text = Convert::ToString(User->Qualification);
	pB->Value = User->Qualification * 20;
	txtCompletedTrips->Text = Convert::ToString(User->NumberOfCompletedTrips);
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	// Crear una instancia del nuevo formulario (Form2 en este caso)
	DriverPage^ newForm = gcnew DriverPage();
	newForm->Show();
	this->Hide();
}
};
}