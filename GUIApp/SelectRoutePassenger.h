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
		/// Limpiar los recursos que se estén usando.
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
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ btnRouteDetails;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SelectRoutePassenger::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->btnRouteDetails = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
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
			// button5
			// 
			this->button5->Location = System::Drawing::Point(1086, 373);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(205, 42);
			this->button5->TabIndex = 16;
			this->button5->Text = L"BUSCAR OTRAS RUTAS";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// btnRouteDetails
			// 
			this->btnRouteDetails->Location = System::Drawing::Point(1080, 447);
			this->btnRouteDetails->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnRouteDetails->Name = L"btnRouteDetails";
			this->btnRouteDetails->Size = System::Drawing::Size(211, 42);
			this->btnRouteDetails->TabIndex = 15;
			this->btnRouteDetails->Text = L"VER DETALLES DE LA RUTA";
			this->btnRouteDetails->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(1137, 285);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(93, 38);
			this->button4->TabIndex = 14;
			this->button4->Text = L"Ruta D";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1137, 214);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(93, 38);
			this->button3->TabIndex = 13;
			this->button3->Text = L"Ruta C";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1137, 144);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(93, 38);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Ruta B";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1137, 74);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(93, 38);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Ruta A";
			this->button1->UseVisualStyleBackColor = true;
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
			// SelectRoutePassenger
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1303, 631);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->btnRouteDetails);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"SelectRoutePassenger";
			this->Text = L"SelectRoutePassenger";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
		double latTopLeft = -12.074135, lonTopLeft = -77.083166;   // Coordenadas de la esquina superior izquierda
		double latBottomRight = -12.064391, lonBottomRight = -77.077202; // Coordenadas de la esquina inferior derecha
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
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
}
};
}
