#pragma once

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
	/// Resumen de TripRequestToDriverh
	/// </summary>
	public ref class TripRequestToDriverh : public System::Windows::Forms::Form
	{
	public:
		Driver^ user;
		TripRequestToDriverh(Driver^p)
		{
			InitializeComponent();
			user = p;
			label2->Text = user->solicitud->pasajero->Name;
			label8->Text = user->solicitud->pasajero->LastName;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~TripRequestToDriverh()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ btnAcceptPassenger;



	private: System::Windows::Forms::Button^ btnBack;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label8;

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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->btnAcceptPassenger = (gcnew System::Windows::Forms::Button());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 57);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(234, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Información sobre la solicitud del viaje";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 259);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Calificación";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 222);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Celular:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 142);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(66, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Nombres:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 181);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(67, 16);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Apellidos:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 100);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(126, 16);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Datos del Pasajero:";
			// 
			// btnAcceptPassenger
			// 
			this->btnAcceptPassenger->Location = System::Drawing::Point(46, 399);
			this->btnAcceptPassenger->Name = L"btnAcceptPassenger";
			this->btnAcceptPassenger->Size = System::Drawing::Size(200, 70);
			this->btnAcceptPassenger->TabIndex = 7;
			this->btnAcceptPassenger->Text = L"ACEPTAR PASAJERO";
			this->btnAcceptPassenger->UseVisualStyleBackColor = true;
			this->btnAcceptPassenger->Click += gcnew System::EventHandler(this, &TripRequestToDriverh::btnAcceptPassenger_Click);
			// 
			// btnBack
			// 
			this->btnBack->Location = System::Drawing::Point(12, 12);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(81, 24);
			this->btnBack->TabIndex = 10;
			this->btnBack->Text = L"Volver";
			this->btnBack->UseVisualStyleBackColor = true;
			this->btnBack->Click += gcnew System::EventHandler(this, &TripRequestToDriverh::btnBack_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(94, 142);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 16);
			this->label2->TabIndex = 12;
			this->label2->Text = L"label2";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(94, 181);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(44, 16);
			this->label8->TabIndex = 13;
			this->label8->Text = L"label8";
			// 
			// TripRequestToDriverh
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1091, 521);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->btnAcceptPassenger);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Name = L"TripRequestToDriverh";
			this->Text = L"Solicitud de viaje";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
	}
private: System::Void btnAcceptPassenger_Click(System::Object^ sender, System::EventArgs^ e) {
	if (user->viaje->AvailableSeats > 0) {
		user->viaje->AvailableSeats -= 1;
	}
	user->viaje->Passengers->Add(user->solicitud->pasajero);
	user->solicitud = nullptr;
	Service::UpdateDriver(user);
	this->Close();
}
};
}
