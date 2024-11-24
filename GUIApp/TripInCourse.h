#pragma once
#include "TripRequest.h"


namespace GUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace RuralConnect;
	using namespace RuralService;


	using namespace RuralService;
	

	/// <summary>
	/// Resumen de TripInCourse
	/// </summary>
	public ref class TripInCourse : public System::Windows::Forms::Form
	{
		int counter = 1;
		List<array<int>^>^ ListaXY = gcnew List<array<int>^>();
	private: System::Windows::Forms::Timer^ timer2;

	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtCantPersona;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ btnSolicitud;
	private: System::Windows::Forms::Label^ label10;

	public:
		Driver^ User;
		List<array<double>^>^ LatLong = gcnew List<array<double>^>();
	public:
		TripInCourse(List<array<double>^>^ a, Driver^ p)
		{
			InitializeComponent();
			LatLong = a;
			this->User = p;
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
			pictureBox1->Invalidate();
			//timer1->Start();
			//
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~TripInCourse()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:

	private: System::Windows::Forms::Button^ btnTripApplication;

	private: System::Windows::Forms::Button^ btnBack;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::TextBox^ txtLat;
	private: System::Windows::Forms::TextBox^ txtLong;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txt_CantPersonas;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(TripInCourse::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnTripApplication = (gcnew System::Windows::Forms::Button());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->txtLat = (gcnew System::Windows::Forms::TextBox());
			this->txtLong = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txt_CantPersonas = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtCantPersona = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->btnSolicitud = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 65);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(117, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"VIAJE EN CURSO";
			// 
			// btnTripApplication
			// 
			this->btnTripApplication->Location = System::Drawing::Point(764, 14);
			this->btnTripApplication->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnTripApplication->Name = L"btnTripApplication";
			this->btnTripApplication->Size = System::Drawing::Size(137, 43);
			this->btnTripApplication->TabIndex = 2;
			this->btnTripApplication->Text = L"Solicitudes de viaje";
			this->btnTripApplication->UseVisualStyleBackColor = true;
			this->btnTripApplication->Click += gcnew System::EventHandler(this, &TripInCourse::btnTripApplication_Click);
			// 
			// btnBack
			// 
			this->btnBack->Location = System::Drawing::Point(12, 12);
			this->btnBack->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(81, 25);
			this->btnBack->TabIndex = 3;
			this->btnBack->Text = L"Volver";
			this->btnBack->UseVisualStyleBackColor = true;
			this->btnBack->Click += gcnew System::EventHandler(this, &TripInCourse::btnBack_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 102);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(901, 450);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &TripInCourse::pictureBox1_Click);
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &TripInCourse::pictureBox1_Paint);
			// 
			// timer1
			// 
			this->timer1->Interval = 800;
			this->timer1->Tick += gcnew System::EventHandler(this, &TripInCourse::timer1_Tick);
			// 
			// txtLat
			// 
			this->txtLat->Location = System::Drawing::Point(229, 14);
			this->txtLat->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtLat->Name = L"txtLat";
			this->txtLat->Size = System::Drawing::Size(100, 22);
			this->txtLat->TabIndex = 5;
			this->txtLat->TextChanged += gcnew System::EventHandler(this, &TripInCourse::txtLat_TextChanged);
			// 
			// txtLong
			// 
			this->txtLong->Location = System::Drawing::Point(229, 58);
			this->txtLong->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtLong->Name = L"txtLong";
			this->txtLong->Size = System::Drawing::Size(100, 22);
			this->txtLong->TabIndex = 6;
			this->txtLong->TextChanged += gcnew System::EventHandler(this, &TripInCourse::txtLong_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(159, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(42, 16);
			this->label2->TabIndex = 7;
			this->label2->Text = L"latitud";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(159, 62);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 16);
			this->label3->TabIndex = 8;
			this->label3->Text = L"longitud";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(0, 0);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 28);
			this->button1->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(0, 0);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(133, 28);
			this->label4->TabIndex = 5;
			// 
			// txt_CantPersonas
			// 
			this->txt_CantPersonas->Location = System::Drawing::Point(0, 0);
			this->txt_CantPersonas->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txt_CantPersonas->Name = L"txt_CantPersonas";
			this->txt_CantPersonas->Size = System::Drawing::Size(132, 22);
			this->txt_CantPersonas->TabIndex = 4;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(0, 0);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(133, 62);
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(0, 0);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(133, 62);
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(0, 0);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(133, 28);
			this->label5->TabIndex = 1;
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(0, 0);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(133, 28);
			this->label6->TabIndex = 0;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(975, 272);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(232, 126);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 15;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(1160, 124);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(47, 38);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 14;
			this->pictureBox5->TabStop = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(552, 299);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 16);
			this->label7->TabIndex = 13;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(971, 188);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(102, 16);
			this->label8->TabIndex = 12;
			this->label8->Text = L"En el auto están";
			// 
			// txtCantPersona
			// 
			this->txtCantPersona->Location = System::Drawing::Point(975, 220);
			this->txtCantPersona->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtCantPersona->Name = L"txtCantPersona";
			this->txtCantPersona->Size = System::Drawing::Size(103, 22);
			this->txtCantPersona->TabIndex = 11;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(941, 240);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 16);
			this->label9->TabIndex = 10;
			// 
			// btnSolicitud
			// 
			this->btnSolicitud->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->btnSolicitud->Location = System::Drawing::Point(975, 102);
			this->btnSolicitud->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnSolicitud->Name = L"btnSolicitud";
			this->btnSolicitud->Size = System::Drawing::Size(163, 60);
			this->btnSolicitud->TabIndex = 9;
			this->btnSolicitud->Text = L"Solicitar Cantidad de Personas";
			this->btnSolicitud->UseVisualStyleBackColor = true;
			this->btnSolicitud->Click += gcnew System::EventHandler(this, &TripInCourse::btnSolicitud_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(1087, 229);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(76, 16);
			this->label10->TabIndex = 16;
			this->label10->Text = L"personas ...";
			// 
			// TripInCourse
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1252, 612);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->txtCantPersona);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->btnSolicitud);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->txt_CantPersonas);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtLong);
			this->Controls->Add(this->txtLat);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->btnTripApplication);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"TripInCourse";
			this->Text = L"Viaje en curso";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		double latTopLeft = -12.074135, lonTopLeft = -77.083166;   // Coordenadas de la esquina superior izquierda
		double latBottomRight = -12.064391, lonBottomRight = -77.077202; // Coordenadas de la esquina inferior derecha

		double latitude = -12.074135;
		double longitude = -77.079;//-77.083166;
		double latitudePas = -12.074135;
		double longitudePas = -77.079;//-77.083166;

	private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
	}
	private: System::Void btnTripApplication_Click(System::Object^ sender, System::EventArgs^ e) {
		if (User->solicitud->destino != "") { //LatLong, User
			TripRequest^ Application = gcnew TripRequest(LatLong,User);
			Application->Show();
			//this->Hide();
		}
	}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	List<String^>^ ubicacion = Service::ReadGPSData();
	if (ubicacion[0] != "1") {
		//Se leen los datos
		latitude = Convert::ToDouble(ubicacion[0]);
		longitude = Convert::ToDouble(ubicacion[1]);
		//Se imprimen los daotos
		txtLat->Text = Convert::ToString(latitude);
		txtLong->Text = Convert::ToString(longitude);

		if (latitude <= latBottomRight && latitude >= latTopLeft && longitude >= lonTopLeft && longitude <= lonBottomRight) {

			//se envian los datos para imprimirse
			latitudePas = latitude;
			longitudePas = longitude;
			//pictureBox1->Invalidate();

		}
		else {
			//se asignan los valores anteriores para imprimirse
			MessageBox::Show("fuera de rango");
			latitude = latitudePas;
			longitude = longitudePas;
			//pictureBox1->Invalidate();
		}
		//Se imprimen los datos enviados a imprmir
		//txtLat->Text = Convert::ToString(latitude);
		//txtLong->Text = Convert::ToString(longitude);
	}
	else {
		MessageBox::Show("llega con error " + Convert::ToString(latitude) + "   " + Convert::ToString(longitude));
		latitude = latitudePas;
		longitude = longitudePas;
		
	}
	pictureBox1->Invalidate();
}

private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	
		// Tamaño del PictureBox
		int width = pictureBox1->Width;
		int height = pictureBox1->Height;

		if (counter == 1) {
			counter++;
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
		else {
			// Convertir latitud y longitud a coordenadas de píxeles
			int x = (int)((latitude - latTopLeft) / (latBottomRight - latTopLeft) * width);
			int y = (int)((longitude - lonTopLeft) / (lonBottomRight - lonTopLeft) * height);

			// Dibujar el punto en el mapa
			//System::Drawing::Graphics^ g = pictureBox1->CreateGraphics();
			Graphics^ g = e->Graphics;
			int radius = 5; // Radio del punto
			g->FillEllipse(System::Drawing::Brushes::Blue, x - radius, y - radius, radius * 2, radius * 2);
		}

}
private: System::Void txtLat_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void txtLong_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void timer3_Tick(System::Object^ sender, System::EventArgs^ e) {
}
	   int ExecuteCantPeople(String^ text) {
		   try {
			   int leido = Service::SolicitudPersonas(text);
			   return leido;
		   }
		   catch (Exception^ ex) {
			   MessageBox::Show("Ha ocurrido un problema: " + ex->Message);
		   }
	   }
private: System::Void btnSolicitud_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ envio = "2";
	String^ cantidad = ExecuteCantPeople(envio).ToString();
	
	txtCantPersona->Text = cantidad;
}
};
}
