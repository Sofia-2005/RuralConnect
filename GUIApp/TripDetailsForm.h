#pragma once
#include "RealTimeForm.h"
namespace GUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace RuralConnect;
	using namespace RuralService;

	/// <summary>
	/// Summary for TripDetailsForm
	/// </summary>
	public ref class TripDetailsForm : public System::Windows::Forms::Form
	{
	public:
		int counter = 1;
		List<array<int>^>^ ListaXY = gcnew List<array<int>^>();
	private: System::Windows::Forms::Timer^ timer1;
	public:
		List<array<double>^>^ LatLong = gcnew List<array<double>^>();
	private: System::Windows::Forms::Label^ label8;
	public:
		Driver^ conductor = gcnew Driver();
		Passenger^ pasajero = gcnew Passenger();
		TripDetailsForm(List<array<double>^>^ a, Driver^ p, Passenger^ pasa )
		{
			InitializeComponent();
			LatLong = a;
			conductor = p;
			pasajero = pasa;
			int x = 0, y = 0;
			// Tamaño del PictureBox
			int width = pictureBox1->Width;
			int height = pictureBox1->Height;

			for (int i = 0; i < LatLong->Count;i++) {
				array<double>^ a1 = LatLong[i];

				double  latitude = a1[0];
				double longitude = a1[1];

				x = (int)((latitude - latTopLeft) / (latBottomRight - latTopLeft) * width);
				y = (int)((longitude - lonTopLeft) / (lonBottomRight - lonTopLeft) * height);

				array<int>^ pt = { x, y };

				ListaXY->Add(pt);
			}
			//
			//TODO: agregar código de constructor aquí
			//
			timer1->Start();
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

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ btnAcceptTrip;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(TripDetailsForm::typeid));
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->btnAcceptTrip = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label8 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
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
			this->btnAcceptTrip->Location = System::Drawing::Point(51, 387);
			this->btnAcceptTrip->Name = L"btnAcceptTrip";
			this->btnAcceptTrip->Size = System::Drawing::Size(203, 56);
			this->btnAcceptTrip->TabIndex = 20;
			this->btnAcceptTrip->Text = L"CONFIRMAR VIAJE";
			this->btnAcceptTrip->UseVisualStyleBackColor = true;
			this->btnAcceptTrip->Click += gcnew System::EventHandler(this, &TripDetailsForm::btnAcceptTrip_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(289, 28);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1012, 514);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 21;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &TripDetailsForm::pictureBox1_Paint);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &TripDetailsForm::timer1_Tick);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(104, 99);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(44, 16);
			this->label8->TabIndex = 22;
			this->label8->Text = L"label8";
			// 
			// TripDetailsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1330, 594);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnAcceptTrip);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnBack);
			this->Name = L"TripDetailsForm";
			this->Text = L"TripDetailsForm";
			this->Load += gcnew System::EventHandler(this, &TripDetailsForm::TripDetailsForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		double latTopLeft = -12.074135, lonTopLeft = -77.083166;   // Coordenadas de la esquina superior izquierda
		double latBottomRight = -12.064391, lonBottomRight = -77.077202; // Coordenadas de la esquina inferior derecha

	private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
	}
private: System::Void btnAcceptTrip_Click(System::Object^ sender, System::EventArgs^ e) {
	
	Solicitud^ soli = gcnew Solicitud();
	soli->inicio = pasajero->UbiActual;
	soli->destino = pasajero->DesiredDestination;
	soli->pasajero = this->pasajero;
	conductor->solicitud = soli;
	Service::UpdateDriver(conductor);

	RealTimeForm^ newForm = gcnew RealTimeForm();
	newForm->Show();
	this->Hide();
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {

	if (counter < 2) {
		counter++;
		pictureBox1->Invalidate();
	}
	else {
		timer1->Stop();
		timer1->Enabled = false;
	}
}
private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	int x = 50, y = 50, x2 = 0, y2 = 0;
	bool primera = true;

	Graphics^ g = e->Graphics;
	Pen^ pen = gcnew Pen(Color::Blue);
	int radius = 5; // Radio del punto
	for (int i = 0;i < ListaXY->Count;i++) {
		array<int>^ a1 = ListaXY[i];
		x = a1[0];
		y = a1[1];
		g->FillEllipse(System::Drawing::Brushes::Blue, x - radius, y - radius, radius * 2, radius * 2);
	}

	for (int i = 0;i < ListaXY->Count - 1;i++) {
		array<int>^ a1 = ListaXY[i];
		x = a1[0];
		y = a1[1];
		a1 = ListaXY[i + 1];
		x2 = a1[0];
		y2 = a1[1];
		g->DrawLine(pen, x, y, x2, y2);
	}
}
private: System::Void TripDetailsForm_Load(System::Object^ sender, System::EventArgs^ e) {
	label8->Text = conductor->Name+ " "+ conductor->LastName;
}
};
}
