#pragma once
#include "TripDetailsForm.h"
#include "ComboBoxItem.h"

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
	/// Resumen de SelectRoutePassenger
	/// </summary>
	public ref class SelectRoutePassenger : public System::Windows::Forms::Form
	{
	public:
		int counter = 1;
		List<Driver^>^ Conductores = gcnew List<Driver^>();
		List<String^>^ RutasLat = gcnew List<String^>();;
		List<String^>^ RutasLon = gcnew List<String^>();;
		List<double>^ PuntosLat = gcnew List<double>();
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ cmbRutas;
	private: System::Windows::Forms::Label^ label2;
	public:
		List<double>^ PuntosLong = gcnew List<double>();
		SelectRoutePassenger(void)
		{
			InitializeComponent();
			Conductores = Service::QueryAllDrivers();
			for each (Driver ^ d in Conductores) {
				RutasLat->Add(d->Rutasa->Puntos_x_volatil);
				RutasLon->Add(d->Rutasa->Puntos_y_volatil);
			}
			timer1->Start();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~SelectRoutePassenger()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:






	private: System::Windows::Forms::Label^ label1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SelectRoutePassenger::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->cmbRutas = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(14, 62);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1066, 534);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 17;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &SelectRoutePassenger::pictureBox1_Paint);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(11, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(128, 16);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Selecciona una ruta:";
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &SelectRoutePassenger::timer1_Tick);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1127, 310);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(92, 39);
			this->button1->TabIndex = 20;
			this->button1->Text = L"Confirmar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SelectRoutePassenger::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(1113, 183);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(42, 16);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Rutas";
			// 
			// cmbRutas
			// 
			this->cmbRutas->FormattingEnabled = true;
			this->cmbRutas->Location = System::Drawing::Point(1116, 219);
			this->cmbRutas->Name = L"cmbRutas";
			this->cmbRutas->Size = System::Drawing::Size(121, 24);
			this->cmbRutas->TabIndex = 18;
			this->cmbRutas->SelectedIndexChanged += gcnew System::EventHandler(this, &SelectRoutePassenger::cmbRutas_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(145, 34);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(291, 16);
			this->label2->TabIndex = 21;
			this->label2->Text = L"La ruta seleccionada se muestra de color verde";
			// 
			// SelectRoutePassenger
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1303, 631);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->cmbRutas);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Name = L"SelectRoutePassenger";
			this->Text = L"SelectRoutePassenger";
			this->Load += gcnew System::EventHandler(this, &SelectRoutePassenger::SelectRoutePassenger_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
		double latTopLeft = -12.074135, lonTopLeft = -77.083166;   // Coordenadas de la esquina superior izquierda
		double latBottomRight = -12.064391, lonBottomRight = -77.077202; // Coordenadas de la esquina inferior derecha
		bool cambioRuta = false;
		int indice = 0;

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

	int width = pictureBox1->Width;
	int height = pictureBox1->Height;

	Graphics^ g = e->Graphics;
	Pen^ pen = gcnew Pen(Color::Blue);
	int radius = 5; // Radio del punto

	for (int i = 0;i < Conductores->Count;i++) {
		PuntosLat = Service::De_String_toDouble(RutasLat[i]);
		PuntosLong = Service::De_String_toDouble(RutasLon[i]);

		for (int j = 0;j < PuntosLat->Count;j++) {

			x = (int)((PuntosLat[j] - latTopLeft) / (latBottomRight - latTopLeft) * width);
			y = (int)((PuntosLong[j] - lonTopLeft) / (lonBottomRight - lonTopLeft) * height);

			g->FillEllipse(System::Drawing::Brushes::Blue, x - radius, y - radius, radius * 2, radius * 2);
		}


		for (int k = 0;k < PuntosLat->Count - 1;k++) {

			x = (int)((PuntosLat[k] - latTopLeft) / (latBottomRight - latTopLeft) * width);
			y = (int)((PuntosLong[k] - lonTopLeft) / (lonBottomRight - lonTopLeft) * height);

			x2 = (int)((PuntosLat[k+1] - latTopLeft) / (latBottomRight - latTopLeft) * width);
			y2 = (int)((PuntosLong[k+1] - lonTopLeft) / (lonBottomRight - lonTopLeft) * height);
			g->DrawLine(pen, x, y, x2, y2);
		}
	}

	if (cambioRuta) {
		int x = 50, y = 50, x2 = 0, y2 = 0;
		bool primera = true;

		int width = pictureBox1->Width;
		int height = pictureBox1->Height;

		Graphics^ g = e->Graphics;
		Pen^ pen = gcnew Pen(Color::Green);
		int radius = 5; // Radio del punto

			PuntosLat = Service::De_String_toDouble(RutasLat[indice]);
			PuntosLong = Service::De_String_toDouble(RutasLon[indice]);

			for (int j = 0;j < PuntosLat->Count;j++) {

				x = (int)((PuntosLat[j] - latTopLeft) / (latBottomRight - latTopLeft) * width);
				y = (int)((PuntosLong[j] - lonTopLeft) / (lonBottomRight - lonTopLeft) * height);

				g->FillEllipse(System::Drawing::Brushes::Green, x - radius, y - radius, radius * 2, radius * 2);
			}


			for (int k = 0;k < PuntosLat->Count - 1;k++) {

				x = (int)((PuntosLat[k] - latTopLeft) / (latBottomRight - latTopLeft) * width);
				y = (int)((PuntosLong[k] - lonTopLeft) / (lonBottomRight - lonTopLeft) * height);

				x2 = (int)((PuntosLat[k + 1] - latTopLeft) / (latBottomRight - latTopLeft) * width);
				y2 = (int)((PuntosLong[k + 1] - lonTopLeft) / (lonBottomRight - lonTopLeft) * height);
				g->DrawLine(pen, x, y, x2, y2);
			}
	}
}
private: System::Void cmbRutas_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	indice = cmbRutas->SelectedIndex;
	cambioRuta = true;
	pictureBox1->Invalidate();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cambioRuta) {

		Driver^ p = Conductores[indice];
		PuntosLat = Service::De_String_toDouble(RutasLat[indice]);
		PuntosLong = Service::De_String_toDouble(RutasLon[indice]);

		List<array<double>^>^ LatLong = gcnew List<array<double>^>();

		for (int i = 0; i < PuntosLat->Count;i++) {
			array<double>^ a = { PuntosLat[i],PuntosLong[i] };
			LatLong->Add(a);
		}

		TripDetailsForm^ CreateRoute = gcnew TripDetailsForm(LatLong,p);
		CreateRoute->Show();
		this->Hide();
	}
}
private: System::Void SelectRoutePassenger_Load(System::Object^ sender, System::EventArgs^ e) {
	cmbRutas->Items->Clear();
	for (int i = 0; i < Conductores->Count;i++) {
		cmbRutas->Items->Add(gcnew ComboBoxItem(i, "Ruta " + (i + 1)));
	}
}
};
}