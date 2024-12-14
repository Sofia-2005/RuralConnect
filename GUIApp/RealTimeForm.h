#pragma once
#include "AdvertisementForm.h"
#include "CalificacionPassenger.h"
//#include "PrincipalForm.h"
//#include "FindTrip.h"
//#include "SelectRoutePassenger.h"

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
	/// Summary for RealTimeForm
	/// </summary>
	public ref class RealTimeForm : public System::Windows::Forms::Form
	{
	public:
		List<array<int>^>^ ListaXY = gcnew List<array<int>^>();

	public:
		List<array<double>^>^ LatLong = gcnew List<array<double>^>();
	public:
		Driver^ conductor = gcnew Driver();
	private: System::Windows::Forms::Button^ button3;
	public:

	public:
		Form^ f4;
		Form^ principal;
		Passenger^ pasajero = gcnew Passenger();
		RealTimeForm(List<array<double>^>^ a, Driver^ p, Passenger^ pasa, Form^ F4, Form^ principal2)
		{
			InitializeComponent();
			LatLong = a;
			conductor = p;
			pasajero = pasa;
			f4 = F4;
			principal = principal2;
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
			pictureBox1->Invalidate();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RealTimeForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnBack;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RealTimeForm::typeid));
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnBack
			// 
			this->btnBack->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBack->Location = System::Drawing::Point(12, 12);
			this->btnBack->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(81, 25);
			this->btnBack->TabIndex = 12;
			this->btnBack->Text = L"Volver";
			this->btnBack->UseVisualStyleBackColor = true;
			this->btnBack->Click += gcnew System::EventHandler(this, &RealTimeForm::btnBack_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Elephant", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(31, 105);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(128, 39);
			this->button1->TabIndex = 18;
			this->button1->Text = L"RECLAMO";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &RealTimeForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Elephant", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(35, 169);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(123, 37);
			this->button2->TabIndex = 19;
			this->button2->Text = L"SOS";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &RealTimeForm::button2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(207, 25);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(981, 508);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 20;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &RealTimeForm::pictureBox1_Paint);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Elephant", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(35, 444);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(141, 54);
			this->button3->TabIndex = 21;
			this->button3->Text = L"Terminar viaje";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &RealTimeForm::button3_Click);
			// 
			// RealTimeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1227, 545);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btnBack);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"RealTimeForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Viaje en Curso";
			this->Load += gcnew System::EventHandler(this, &RealTimeForm::RealTimeForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
public:
		double latTopLeft = -12.074135, lonTopLeft = -77.083166;   // Coordenadas de la esquina superior izquierda
		double latBottomRight = -12.064391, lonBottomRight = -77.077202; // Coordenadas de la esquina inferior derecha
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Service::ActivateSecurityProtocol();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {		//le envia a otra laguina donde el ususario puede escribir su reclamoq
		AdvertisementForm^ newForm = gcnew AdvertisementForm();
		newForm->Show();
		//this->Hide();
	}
private: System::Void RealTimeForm_Load(System::Object^ sender, System::EventArgs^ e) {
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

	x = (int)((-12.0723561226158 - latTopLeft) / (latBottomRight - latTopLeft) * width);
	y = (int)((-77.0790978410596 - lonTopLeft) / (lonBottomRight - lonTopLeft) * height);

	g->FillEllipse(System::Drawing::Brushes::Orange, x - radius, y - radius, radius * 2, radius * 2);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	conductor = Service::QueryDriverbyUsername(conductor->Username);
	for (int i = 0;i < conductor->viaje->Passengers->Count;i++) {
		if (conductor->viaje->Passengers[0]->Username == pasajero->Username) {
			conductor->viaje->Passengers->RemoveAt(i);
		}
	}
	conductor->viaje->AvailableSeats = conductor->viaje->AvailableSeats +1;
	Service::UpdateDriver(conductor);
	pasajero->Address = Convert::ToString(Convert::ToInt32(pasajero->Address) + 1);
	if (Convert::ToInt32(pasajero->Address) >= 10) {
		pasajero->Level = "PLATA";
	}
	else if (Convert::ToInt32(pasajero->Address) >= 20) {
		pasajero->Level = "ORO";
	}
	Service::UpdatePassenger(pasajero);
	CalificacionPassenger^ que = gcnew CalificacionPassenger(conductor, principal);
	this->Close();
	que->Show();

}
private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
	f4->Show();

}
};
}
