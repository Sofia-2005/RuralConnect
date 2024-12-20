#pragma once
#include "TripRequest.h"
#include "ReportPasajerosAbordo.h"
#include "CalificacionDriver.h"

//#include "PrincipalFormDriver.h"



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

	public:


	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;



	public:
		List<array<double>^>^ LatLong = gcnew List<array<double>^>();
		Form^ principal;
		List<Passenger^>^ PPList = gcnew List<Passenger^>();
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	public:
		Form^ f4;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label4;
	public:
	public: System::Windows::Forms::Label^ label14;
		   
	
	public:
		TripInCourse(List<array<double>^>^ a, Driver^ p, Form^ pp, Form^ ff4)
		{
			
			InitializeComponent();
			LatLong = a;
			this->User = p;
			int x = 0, y = 0;
			principal = pp;
			f4 = ff4;
			
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
			//timer1->Start();
			//
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
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







	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
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
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtCantPersona = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->btnSolicitud = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Elephant", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(7, 70);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(152, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"VIAJE EN CURSO";
			// 
			// btnTripApplication
			// 
			this->btnTripApplication->Font = (gcnew System::Drawing::Font(L"Elephant", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTripApplication->Location = System::Drawing::Point(720, 22);
			this->btnTripApplication->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnTripApplication->Name = L"btnTripApplication";
			this->btnTripApplication->Size = System::Drawing::Size(181, 52);
			this->btnTripApplication->TabIndex = 2;
			this->btnTripApplication->Text = L"Solicitudes de viaje";
			this->btnTripApplication->UseVisualStyleBackColor = true;
			this->btnTripApplication->Click += gcnew System::EventHandler(this, &TripInCourse::btnTripApplication_Click);
			// 
			// btnBack
			// 
			this->btnBack->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
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
			this->txtLat->Location = System::Drawing::Point(298, 21);
			this->txtLat->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtLat->Name = L"txtLat";
			this->txtLat->Size = System::Drawing::Size(100, 22);
			this->txtLat->TabIndex = 5;
			this->txtLat->TextChanged += gcnew System::EventHandler(this, &TripInCourse::txtLat_TextChanged);
			// 
			// txtLong
			// 
			this->txtLong->Location = System::Drawing::Point(298, 65);
			this->txtLong->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtLong->Name = L"txtLong";
			this->txtLong->Size = System::Drawing::Size(100, 22);
			this->txtLong->TabIndex = 6;
			this->txtLong->TextChanged += gcnew System::EventHandler(this, &TripInCourse::txtLong_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(228, 25);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(42, 16);
			this->label2->TabIndex = 7;
			this->label2->Text = L"latitud";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(228, 69);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 16);
			this->label3->TabIndex = 8;
			this->label3->Text = L"longitud";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(975, 286);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(232, 126);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 15;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(1160, 138);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(4);
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
			this->label8->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(971, 205);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(98, 15);
			this->label8->TabIndex = 12;
			this->label8->Text = L"En el auto est�n";
			// 
			// txtCantPersona
			// 
			this->txtCantPersona->Location = System::Drawing::Point(975, 234);
			this->txtCantPersona->Margin = System::Windows::Forms::Padding(4);
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
			this->btnSolicitud->Font = (gcnew System::Drawing::Font(L"Elephant", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSolicitud->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->btnSolicitud->Location = System::Drawing::Point(975, 116);
			this->btnSolicitud->Margin = System::Windows::Forms::Padding(4);
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
			this->label10->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(1087, 239);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(75, 15);
			this->label10->TabIndex = 16;
			this->label10->Text = L"personas ...";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Elephant", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(979, 438);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(218, 48);
			this->button2->TabIndex = 18;
			this->button2->Text = L"Reporte de pasajeros a bordo";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &TripInCourse::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Elephant", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(1019, 510);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(131, 48);
			this->button3->TabIndex = 19;
			this->button3->Text = L"Terminar Viaje";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &TripInCourse::button3_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::SystemColors::Control;
			this->label11->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(958, 41);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(157, 15);
			this->label11->TabIndex = 20;
			this->label11->Text = L"Monto recaudado en total:";
			this->label11->Click += gcnew System::EventHandler(this, &TripInCourse::label11_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label12->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(1153, 41);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(27, 15);
			this->label12->TabIndex = 21;
			this->label12->Text = L"0.0";
			this->label12->Click += gcnew System::EventHandler(this, &TripInCourse::label12_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label13->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(958, 72);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(143, 15);
			this->label13->TabIndex = 22;
			this->label13->Text = L"Cantidad de pasajeros: ";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label14->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(1137, 72);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(15, 15);
			this->label14->TabIndex = 23;
			this->label14->Text = L"0";
			this->label14->Click += gcnew System::EventHandler(this, &TripInCourse::label14_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label4->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(1180, 41);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(36, 15);
			this->label4->TabIndex = 24;
			this->label4->Text = L"soles";
			this->label4->Click += gcnew System::EventHandler(this, &TripInCourse::label4_Click);
			// 
			// TripInCourse
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1279, 612);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->txtCantPersona);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->btnSolicitud);
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
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Viaje en curso";
			this->Load += gcnew System::EventHandler(this, &TripInCourse::TripInCourse_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
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
		User = Service::QueryDriverbyUsername(User->Username);
		label12->Text = "" + User->viaje->EstimatedPrice;
		label14->Text = "" + User->viaje->Passengers->Count;
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
	
		// Tama�o del PictureBox
		int width = pictureBox1->Width;
		int height = pictureBox1->Height;

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

			// Convertir latitud y longitud a coordenadas de p�xeles
			x = (int)((latitude - latTopLeft) / (latBottomRight - latTopLeft) * width);
			y = (int)((longitude - lonTopLeft) / (lonBottomRight - lonTopLeft) * height);

			// Dibujar el punto en el mapa
			//System::Drawing::Graphics^ g = pictureBox1->CreateGraphics();
			g = e->Graphics;
			radius = 5; // Radio del punto
			g->FillEllipse(System::Drawing::Brushes::Blue, x - radius, y - radius, radius * 2, radius * 2);
	

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
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

//aca de debe poner los pasajeros del driver 
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	ReportPasajerosAbordo^ newform = gcnew ReportPasajerosAbordo(User);
	newform->Show();
}
private: System::Void TripInCourse_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	User->NumberOfCompletedTrips = User->NumberOfCompletedTrips + 1;
	User->Rutasa->Puntos_x_volatil = "";
	User->Rutasa->Puntos_y_volatil = "";
	Service::UpdateDriver(User);
	Trip^ viaje = User->viaje;
	viaje->Driver_Name = User->Username;
	viaje->PassengersTotal = Service::PasajerosTotal;
	Service::AddTrip(viaje);
	CalificacionDriver^ newp = gcnew CalificacionDriver(User, principal);
	//tadavia no se enviara el principal
	newp->Show();
	
	this->Close();

}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
