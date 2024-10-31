#pragma once
#include "TripRequestToDriver.h"


namespace GUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace RuralService;

	/// <summary>
	/// Resumen de TripInCourse
	/// </summary>
	public ref class TripInCourse : public System::Windows::Forms::Form
	{
	public:
		TripInCourse(void)
		{
			InitializeComponent();
			timer1->Start();
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
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
			this->btnTripApplication->Location = System::Drawing::Point(1099, 38);
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
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(81, 24);
			this->btnBack->TabIndex = 3;
			this->btnBack->Text = L"Volver";
			this->btnBack->UseVisualStyleBackColor = true;
			this->btnBack->Click += gcnew System::EventHandler(this, &TripInCourse::btnBack_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 102);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1266, 654);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &TripInCourse::pictureBox1_Click);
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &TripInCourse::pictureBox1_Paint);
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &TripInCourse::timer1_Tick);
			// 
			// TripInCourse
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1263, 754);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->btnTripApplication);
			this->Controls->Add(this->label1);
			this->Name = L"TripInCourse";
			this->Text = L"Viaje en curso";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		double latTopLeft = -12.074135, lonTopLeft = -77.083166;   // Coordenadas de la esquina superior izquierda
		double latBottomRight = -12.064391, lonBottomRight = -77.077202; // Coordenadas de la esquina inferior derecha

		double latitude = -12.074135;
		double longitude = -77.079;//-77.083166;

	private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
	}
	private: System::Void btnTripApplication_Click(System::Object^ sender, System::EventArgs^ e) {
		TripRequestToDriverh^ Application = gcnew TripRequestToDriverh();
		Application -> Show();
		this->Hide();

	}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (latitude<=latBottomRight && latitude>=latTopLeft && longitude>=lonTopLeft && longitude<=lonBottomRight) {
		List<String^>^ ubicacion = Service::ReadGPSData();
		
		if (ubicacion -> Count >= 2){
			if (ubicacion[0] != __nullptr || ubicacion[1] != nullptr) {
				latitude = Convert::ToDouble(ubicacion[0]);
				longitude = Convert::ToDouble(ubicacion[1]);
				pictureBox1->Invalidate();
			}
		}
		
	}
	else {
		timer1->Stop();
		timer1->Enabled = false;
	}
}

private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

	// Tamaño del PictureBox
	int width = pictureBox1->Width;
	int height = pictureBox1->Height;

	// Convertir latitud y longitud a coordenadas de píxeles
	int x = (int)((latitude- latTopLeft) / (latBottomRight- latTopLeft) * width);
	int y = (int)((longitude-lonTopLeft) / (lonBottomRight - lonTopLeft) * height);

	// Dibujar el punto en el mapa
	//System::Drawing::Graphics^ g = pictureBox1->CreateGraphics();
	Graphics^ g = e->Graphics;
	int radius = 5; // Radio del punto
	g->FillEllipse(System::Drawing::Brushes::Blue, x - radius, y - radius, radius * 2, radius * 2);
}
};
}
