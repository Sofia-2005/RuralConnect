#pragma once

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
	/// Resumen de TripRequest
	/// </summary>
	public ref class TripRequest : public System::Windows::Forms::Form
	{
	public:
		List<array<int>^>^ ListaXY = gcnew List<array<int>^>();

	public:
		List<array<double>^>^ LatLong = gcnew List<array<double>^>();
		Driver^ user;
		Passenger^ pasajero;
	public:
		TripRequest(List<array<double>^>^ a, Driver^ p)
		{
			InitializeComponent();

			user = p;
			LatLong = a;
			pasajero = user->solicitud->pasajero;
			label2->Text = pasajero->Name;
			label8->Text = pasajero->LastName;

			int x = 0, y = 0;
			// Tama�o del PictureBox
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

			pictureBox1->Invalidate();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~TripRequest()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label9;
	protected:
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnAcceptPassenger;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(TripRequest::typeid));
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnAcceptPassenger = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(94, 186);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(44, 16);
			this->label9->TabIndex = 25;
			this->label9->Text = L"label9";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(94, 145);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(44, 16);
			this->label8->TabIndex = 24;
			this->label8->Text = L"label8";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(94, 106);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 16);
			this->label2->TabIndex = 23;
			this->label2->Text = L"label2";
			// 
			// btnAcceptPassenger
			// 
			this->btnAcceptPassenger->Location = System::Drawing::Point(46, 363);
			this->btnAcceptPassenger->Name = L"btnAcceptPassenger";
			this->btnAcceptPassenger->Size = System::Drawing::Size(200, 70);
			this->btnAcceptPassenger->TabIndex = 22;
			this->btnAcceptPassenger->Text = L"ACEPTAR PASAJERO";
			this->btnAcceptPassenger->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 64);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(126, 16);
			this->label7->TabIndex = 21;
			this->label7->Text = L"Datos del Pasajero:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 145);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(67, 16);
			this->label6->TabIndex = 20;
			this->label6->Text = L"Apellidos:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 106);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(66, 16);
			this->label5->TabIndex = 19;
			this->label5->Text = L"Nombres:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 186);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 16);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Celular:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 223);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 16);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Calificaci�n";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(234, 16);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Informaci�n sobre la solicitud del viaje";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(281, 21);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(885, 553);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 26;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &TripRequest::pictureBox1_Paint);
			// 
			// TripRequest
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1187, 586);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnAcceptPassenger);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Name = L"TripRequest";
			this->Text = L"TripRequest";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
				public:
					double latTopLeft = -12.074135, lonTopLeft = -77.083166;   // Coordenadas de la esquina superior izquierda
					double latBottomRight = -12.064391, lonBottomRight = -77.077202; // Coordenadas de la esquina inferior derecha
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

		g->FillEllipse(System::Drawing::Brushes::Black, x - radius, y - radius, radius * 2, radius * 2);

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
};
}