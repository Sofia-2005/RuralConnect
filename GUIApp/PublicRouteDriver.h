#pragma once
#include "TripInCourse.h"

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

	/// <summary>
	/// Resumen de PublicRouteDriver
	/// </summary>
	public ref class PublicRouteDriver : public System::Windows::Forms::Form
	{
	public:
		int counter = 1;
		Driver^ User;
		List<array<double>^>^ LatLong = gcnew List<array<double>^>();
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Timer^ timer2;
	public:
		List<array<int>^>^ ListaXY = gcnew List<array<int>^>();
		Form^ principal;
		Form^ f3;
		PublicRouteDriver(List<array<double>^>^ a, Driver^ p, Form^ pp, Form^ ff3)
		{
			InitializeComponent();
			LatLong = a;
			this->User = p;
			int x = 0, y = 0;
			principal = pp;
			f3 = ff3;
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
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~PublicRouteDriver()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnPublishRoutes;

	private: System::Windows::Forms::Button^ btnBack;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PublicRouteDriver::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnPublishRoutes = (gcnew System::Windows::Forms::Button());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(7, 64);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(342, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"A continuación, se muestran los detalles se su ruta:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(7, 114);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(333, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Cuando usted se encuentre en el punto de partida,";
			// 
			// btnPublishRoutes
			// 
			this->btnPublishRoutes->Font = (gcnew System::Drawing::Font(L"Elephant", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPublishRoutes->Location = System::Drawing::Point(85, 212);
			this->btnPublishRoutes->Name = L"btnPublishRoutes";
			this->btnPublishRoutes->Size = System::Drawing::Size(158, 48);
			this->btnPublishRoutes->TabIndex = 5;
			this->btnPublishRoutes->Text = L"EMPEZAR VIAJE";
			this->btnPublishRoutes->UseVisualStyleBackColor = true;
			this->btnPublishRoutes->Click += gcnew System::EventHandler(this, &PublicRouteDriver::btnPublishRoutes_Click);
			// 
			// btnBack
			// 
			this->btnBack->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBack->Location = System::Drawing::Point(12, 12);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(79, 26);
			this->btnBack->TabIndex = 8;
			this->btnBack->Text = L"Volver";
			this->btnBack->UseVisualStyleBackColor = true;
			this->btnBack->Click += gcnew System::EventHandler(this, &PublicRouteDriver::btnBack_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(5, 143);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(248, 16);
			this->label3->TabIndex = 9;
			this->label3->Text = L" presione el botón de \"Empezar viaje\" ";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(420, 13);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(925, 601);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &PublicRouteDriver::pictureBox1_Paint);
			// 
			// timer1
			// 
			this->timer1->Interval = 10;
			this->timer1->Tick += gcnew System::EventHandler(this, &PublicRouteDriver::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Tick += gcnew System::EventHandler(this, &PublicRouteDriver::timer2_Tick);
			// 
			// PublicRouteDriver
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1348, 626);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->btnPublishRoutes);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"PublicRouteDriver";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Publicar ruta";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		double latTopLeft = -12.074135, lonTopLeft = -77.083166;   // Coordenadas de la esquina superior izquierda
		double latBottomRight = -12.064391, lonBottomRight = -77.077202; // Coordenadas de la esquina inferior derecha

private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnPublishRoutes_Click(System::Object^ sender, System::EventArgs^ e) {

	Trip^ v = gcnew Trip();
	v->AvailableSeats = User->vehicle->Seats;
	User->viaje = v;
	Service::UpdateDriver(User);
	TripInCourse^ PublishRoutes = gcnew TripInCourse(LatLong, User, this, principal);
	PublishRoutes->Show();
	this->Hide();
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
private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) {
	f3->Show();
	this->Close();
}
};
}
