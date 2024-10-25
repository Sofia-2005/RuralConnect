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
	private: System::Windows::Forms::Label^ labelNombre;
	private: System::Windows::Forms::ProgressBar^ pB;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ labelCali;
	private: System::Windows::Forms::Label^ labelNumViajes;




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
			this->labelNombre = (gcnew System::Windows::Forms::Label());
			this->pB = (gcnew System::Windows::Forms::ProgressBar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->labelCali = (gcnew System::Windows::Forms::Label());
			this->labelNumViajes = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label4->Location = System::Drawing::Point(390, 88);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(95, 16);
			this->label4->TabIndex = 16;
			this->label4->Text = L"BIENVENIDO :";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(342, 345);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(173, 27);
			this->button3->TabIndex = 14;
			this->button3->Text = L"¿A DÓNDE VAMOS\?";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(285, 166);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(79, 16);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Calificación:";
			this->label2->Click += gcnew System::EventHandler(this, &PrincipalFormDriver::label2_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(46, 54);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(88, 23);
			this->button2->TabIndex = 10;
			this->button2->Text = L"LOGOUT";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(68, 129);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(162, 189);
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// labelNombre
			// 
			this->labelNombre->AutoSize = true;
			this->labelNombre->Location = System::Drawing::Point(390, 129);
			this->labelNombre->Name = L"labelNombre";
			this->labelNombre->Size = System::Drawing::Size(44, 16);
			this->labelNombre->TabIndex = 17;
			this->labelNombre->Text = L"label1";
			// 
			// pB
			// 
			this->pB->Location = System::Drawing::Point(288, 198);
			this->pB->Name = L"pB";
			this->pB->Size = System::Drawing::Size(158, 23);
			this->pB->TabIndex = 15;
			this->pB->Value = 100;
			this->pB->Click += gcnew System::EventHandler(this, &PrincipalFormDriver::progressBar1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(285, 245);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(198, 16);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Número de viajes completados:";
			// 
			// labelCali
			// 
			this->labelCali->AutoSize = true;
			this->labelCali->Location = System::Drawing::Point(367, 166);
			this->labelCali->Name = L"labelCali";
			this->labelCali->Size = System::Drawing::Size(44, 16);
			this->labelCali->TabIndex = 19;
			this->labelCali->Text = L"label1";
			// 
			// labelNumViajes
			// 
			this->labelNumViajes->AutoSize = true;
			this->labelNumViajes->Location = System::Drawing::Point(489, 245);
			this->labelNumViajes->Name = L"labelNumViajes";
			this->labelNumViajes->Size = System::Drawing::Size(44, 16);
			this->labelNumViajes->TabIndex = 20;
			this->labelNumViajes->Text = L"label1";
			// 
			// PrincipalFormDriver
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(640, 444);
			this->Controls->Add(this->labelNumViajes);
			this->Controls->Add(this->labelCali);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->labelNombre);
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

	labelNombre->Text = User->Name + " " + User->LastName;

	labelCali->Text = Convert::ToString(User->Qualification);
	pB->Value = User->Qualification * 20;
	labelNumViajes->Text = Convert::ToString(User->NumberOfCompletedTrips);
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
