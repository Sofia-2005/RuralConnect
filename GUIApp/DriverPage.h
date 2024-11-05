#pragma once
#include "SelectRouteDriver.h"
#include "PublicRouteDriver.h"

namespace GUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de DriverPage
	/// </summary>
	public ref class DriverPage : public System::Windows::Forms::Form
	{
	public:
		DriverPage(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~DriverPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnCreateRoute;

	private: System::Windows::Forms::Button^ btnMyRoutes;



	private: System::Windows::Forms::Button^ btnBack;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DriverPage::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnCreateRoute = (gcnew System::Windows::Forms::Button());
			this->btnMyRoutes = (gcnew System::Windows::Forms::Button());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(7, 48);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(242, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Marque los puntos en el mapa para definir su ruta:";
			this->label1->Click += gcnew System::EventHandler(this, &DriverPage::label1_Click);
			// 
			// btnCreateRoute
			// 
			this->btnCreateRoute->Location = System::Drawing::Point(47, 115);
			this->btnCreateRoute->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnCreateRoute->Name = L"btnCreateRoute";
			this->btnCreateRoute->Size = System::Drawing::Size(109, 41);
			this->btnCreateRoute->TabIndex = 1;
			this->btnCreateRoute->Text = L"CREAR RUTA";
			this->btnCreateRoute->UseVisualStyleBackColor = true;
			this->btnCreateRoute->Click += gcnew System::EventHandler(this, &DriverPage::btnCreateRoute_Click);
			// 
			// btnMyRoutes
			// 
			this->btnMyRoutes->Location = System::Drawing::Point(47, 308);
			this->btnMyRoutes->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnMyRoutes->Name = L"btnMyRoutes";
			this->btnMyRoutes->Size = System::Drawing::Size(109, 41);
			this->btnMyRoutes->TabIndex = 2;
			this->btnMyRoutes->Text = L"MIS RUTAS";
			this->btnMyRoutes->UseVisualStyleBackColor = true;
			this->btnMyRoutes->Click += gcnew System::EventHandler(this, &DriverPage::btnMyRoutes_Click);
			// 
			// btnBack
			// 
			this->btnBack->Location = System::Drawing::Point(9, 10);
			this->btnBack->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(59, 21);
			this->btnBack->TabIndex = 7;
			this->btnBack->Text = L"Volver";
			this->btnBack->UseVisualStyleBackColor = true;
			this->btnBack->Click += gcnew System::EventHandler(this, &DriverPage::btnBack_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(253, 19);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(734, 453);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &DriverPage::pictureBox1_Click);
			this->pictureBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &DriverPage::pictureBox1_MouseClick);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(34, 175);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(133, 101);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 9;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(34, 371);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(133, 101);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 10;
			this->pictureBox3->TabStop = false;
			// 
			// DriverPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1013, 483);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->btnMyRoutes);
			this->Controls->Add(this->btnCreateRoute);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"DriverPage";
			this->Text = L"Definir Ruta";
			this->Load += gcnew System::EventHandler(this, &DriverPage::DriverPage_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		bool primera = true;
		int i = 0;
		double latTopLeft = -12.074135, lonTopLeft = -77.083166;   // Coordenadas de la esquina superior izquierda
		double latBottomRight = -12.064391, lonBottomRight = -77.077202; // Coordenadas de la esquina inferior derecha

		List<array<int>^>^ listaXY = gcnew List<array<int>^>();

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnMyRoutes_Click(System::Object^ sender, System::EventArgs^ e) {
		SelectRouteDriver^ Myroutes = gcnew SelectRouteDriver();
		Myroutes->Show();
		this->Hide();
	}
	private: System::Void btnCreateRoute_Click(System::Object^ sender, System::EventArgs^ e) {
		PublicRouteDriver^ CreateRoute = gcnew PublicRouteDriver();
		CreateRoute->Show();
		this->Hide();
	}
	private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
	}
private: System::Void DriverPage_Load(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void pictureBox1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		int x = e->X;
		int y = e->Y;

		array<int>^ punto = {x, y};

		listaXY->Add(punto);

	// Tamaño del PictureBox
	int width = pictureBox1->Width;
	int height = pictureBox1->Height;

	// Convertir píxeles a coordenadas geográficas teniendo en cuenta la rotación
	double lat = latTopLeft + (latBottomRight - latTopLeft) * (static_cast<double>(x) / width);
	double lon = lonTopLeft + (lonBottomRight - lonTopLeft) * (static_cast<double>(y) / height);

	// Dibujar el punto en el mapa
	System::Drawing::Graphics^ g = pictureBox1->CreateGraphics();
	int radius = 5; // Radio del punto
	g->FillEllipse(System::Drawing::Brushes::Blue, x - radius, y - radius, radius * 2, radius * 2);

	
	MessageBox::Show("Datos ingresados"+lat.ToString() + "  " +lon.ToString());
	




	if (!primera) {
		Pen^ pen = gcnew Pen(Color::Black);
		array<int>^ a1 = listaXY[i - 1];
		array<int>^ a2 = listaXY[i ];
		g->DrawLine(pen, a1[0],a1[1], a2[0], a2[1]);
	}
	i++;
	primera = false;
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
