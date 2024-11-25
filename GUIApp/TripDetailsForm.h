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
		List<array<int>^>^ ListaXY = gcnew List<array<int>^>();

	public:
		List<array<double>^>^ LatLong = gcnew List<array<double>^>();
	private: System::Windows::Forms::Label^ label8;
	public:
		Driver^ conductor = gcnew Driver();
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	public:
		Form^ principal;
		Form^ f2;
		Form^ f3;
		Passenger^ pasajero = gcnew Passenger();
		TripDetailsForm(List<array<double>^>^ a, Driver^ p, Passenger^ pasa, Form^ prin, Form^ F2, Form^ F3)
		{
			InitializeComponent();
			LatLong = a;
			conductor = p;
			pasajero = pasa;
			int x = 0, y = 0;
			principal = prin;
			f2 = F2;
			f3 = F3;

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
			pictureBox1->Invalidate();
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(TripDetailsForm::typeid));
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnAcceptTrip = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
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
			this->label3->Size = System::Drawing::Size(89, 16);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Costo (soles):";
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
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(104, 99);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(44, 16);
			this->label8->TabIndex = 22;
			this->label8->Text = L"label8";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(134, 165);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(44, 16);
			this->label9->TabIndex = 23;
			this->label9->Text = L"label9";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(104, 132);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(51, 16);
			this->label10->TabIndex = 24;
			this->label10->Text = L"label10";
			// 
			// TripDetailsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1330, 594);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnAcceptTrip);
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
		this->Close();
		f3->Show();
	}
private: System::Void btnAcceptTrip_Click(System::Object^ sender, System::EventArgs^ e) {
	
	Solicitud^ soli = gcnew Solicitud();
	soli->inicio = pasajero->UbiActual;
	soli->destino = pasajero->DesiredDestination;
	soli->pasajero = this->pasajero;
	conductor->solicitud = soli;
	Service::UpdateDriver(conductor);

	RealTimeForm^ newForm = gcnew RealTimeForm(LatLong,conductor,pasajero, this, principal);
	newForm->Show();
	this->Hide();
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	int x = 50, y = 50, x2 = 0, y2 = 0;
	bool primera = true;

	int width = pictureBox1->Width;
	int height = pictureBox1->Height;

	Graphics^ g = e->Graphics;
	Pen^ pen = gcnew Pen(Color::Blue);
	int radius = 5; // Radio del punto

	/* Graficamos ubicacion actual y destino*/

	List<double>^ latlong = gcnew List<double>();

	latlong = Service::De_String_toDouble(pasajero->UbiActual);

	x = (int)((latlong[0] - latTopLeft) / (latBottomRight - latTopLeft) * width);
	y = (int)((latlong[1] - lonTopLeft) / (lonBottomRight - lonTopLeft) * height);

	g->FillEllipse(System::Drawing::Brushes::Red, x - radius, y - radius, radius * 2, radius * 2);

	latlong = Service::De_String_toDouble(pasajero->DesiredDestination);

	x = (int)((latlong[0] - latTopLeft) / (latBottomRight - latTopLeft) * width);
	y = (int)((latlong[1] - lonTopLeft) / (lonBottomRight - lonTopLeft) * height);

	g->FillEllipse(System::Drawing::Brushes::Black, x - radius, y - radius, radius * 2, radius * 2);

	/* Terminamos de graficar ubicacion actual y destino*/

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
		label8->Text = conductor->Name + " " + conductor->LastName;
		label9->Text = "" + conductor->viaje->AvailableSeats;


		List<double>^ latlong1 = gcnew List<double>();
		List<double>^ latlong2 = gcnew List<double>();

		latlong1 = Service::De_String_toDouble(pasajero->UbiActual);

		latlong2 = Service::De_String_toDouble(pasajero->DesiredDestination);

		int precio = Math::Sqrt(Math::Pow(latlong1[0]-latlong2[0], 2) + Math::Pow(latlong1[1] - latlong2[1], 2))*1500;

		label10->Text = "" + String::Format("{0:F1}", precio);
}
};
}
