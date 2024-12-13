#pragma once
//#include "Claim.h"

namespace GUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace RuralConnect;
	using namespace RuralService;

	/// <summary>
	/// Resumen de AdvertisementForm
	/// </summary>
	public ref class AdvertisementForm : public System::Windows::Forms::Form
	{
	public:
		AdvertisementForm(void)
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
		~AdvertisementForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtReclamo;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtReclamo = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(118, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(272, 22);
			this->label1->TabIndex = 0;
			this->label1->Text = L"FORMULARIO DE RECLAMOS";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(52, 71);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(410, 32);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Este formulario de quejas es válida para reclamos y quejas referida\r\nal presente "
				L"servicio de RuralConnect.\r\n";
			this->label2->Click += gcnew System::EventHandler(this, &AdvertisementForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(52, 142);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(107, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"En calidad de:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(52, 229);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(226, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Motivo para realizar el reclamo:";
			// 
			// txtReclamo
			// 
			this->txtReclamo->Location = System::Drawing::Point(55, 248);
			this->txtReclamo->Multiline = true;
			this->txtReclamo->Name = L"txtReclamo";
			this->txtReclamo->Size = System::Drawing::Size(348, 92);
			this->txtReclamo->TabIndex = 4;
			this->txtReclamo->TextChanged += gcnew System::EventHandler(this, &AdvertisementForm::textBox1_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(52, 361);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(364, 32);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Lamentamos todo inconveniente con su experiencia usando\r\n esta aplicación.";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(245, 405);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(198, 32);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Enviar y finalizar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AdvertisementForm::button1_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(92, 174);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(83, 20);
			this->radioButton1->TabIndex = 7;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Pasajero";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &AdvertisementForm::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(234, 174);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(89, 20);
			this->radioButton2->TabIndex = 8;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Conductor";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &AdvertisementForm::radioButton2_CheckedChanged);
			// 
			// AdvertisementForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(518, 548);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txtReclamo);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"AdvertisementForm";
			this->Text = L"Formulario de reclamos";
			this->Load += gcnew System::EventHandler(this, &AdvertisementForm::AdvertisementForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int user = 0;
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	//es pasajero
	user = 0;
}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	//es conductor
	user = 1;
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void AdvertisementForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//se guarda los valores del reclamo
	Claim^ reclamo = gcnew Claim(txtReclamo->Text);
	Service::AddAdvert(reclamo);
	this->Close();
}
};
}
