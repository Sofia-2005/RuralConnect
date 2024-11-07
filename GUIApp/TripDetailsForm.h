#pragma once
#include "RealTimeForm.h"
namespace GUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TripDetailsForm
	/// </summary>
	public ref class TripDetailsForm : public System::Windows::Forms::Form
	{
	public:
		TripDetailsForm(void)
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
		~TripDetailsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnBack;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::WebBrowser^ webBrowser1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ btnAcceptTrip;
	protected:

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
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->btnAcceptTrip = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnBack
			// 
			this->btnBack->Location = System::Drawing::Point(12, 12);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(81, 24);
			this->btnBack->TabIndex = 11;
			this->btnBack->Text = L"Volver";
			this->btnBack->UseVisualStyleBackColor = true;
			this->btnBack->Click += gcnew System::EventHandler(this, &TripDetailsForm::btnBack_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 57);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(187, 16);
			this->label1->TabIndex = 12;
			this->label1->Text = L"INFORMACIÓN DE SU VIAJE:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 99);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 16);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Conductor: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 132);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 16);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Costo:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 165);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(116, 16);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Sitios disponibles:";
			// 
			// webBrowser1
			// 
			this->webBrowser1->Location = System::Drawing::Point(310, 57);
			this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->Size = System::Drawing::Size(315, 252);
			this->webBrowser1->TabIndex = 16;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 201);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(216, 16);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Distancia hacia el punto de partida:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(9, 239);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(268, 16);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Tiempo estimado de llegada del conductor:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 279);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(193, 16);
			this->label7->TabIndex = 19;
			this->label7->Text = L"Distancia hacia su destino final:";
			// 
			// btnAcceptTrip
			// 
			this->btnAcceptTrip->Location = System::Drawing::Point(184, 335);
			this->btnAcceptTrip->Name = L"btnAcceptTrip";
			this->btnAcceptTrip->Size = System::Drawing::Size(203, 56);
			this->btnAcceptTrip->TabIndex = 20;
			this->btnAcceptTrip->Text = L"CONFIRMAR VIAJE";
			this->btnAcceptTrip->UseVisualStyleBackColor = true;
			this->btnAcceptTrip->Click += gcnew System::EventHandler(this, &TripDetailsForm::btnAcceptTrip_Click);
			// 
			// TripDetailsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(637, 414);
			this->Controls->Add(this->btnAcceptTrip);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->webBrowser1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnBack);
			this->Name = L"TripDetailsForm";
			this->Text = L"TripDetailsForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
	}
private: System::Void btnAcceptTrip_Click(System::Object^ sender, System::EventArgs^ e) {
	RealTimeForm^ newForm = gcnew RealTimeForm();
	newForm->Show();
	this->Hide();
}
};
}
