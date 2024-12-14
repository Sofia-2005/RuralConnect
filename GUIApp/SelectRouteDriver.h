#pragma once
#include "ComboBoxItem.h"
#include "PublicRouteDriver.h"

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

	/// <summ
	/// </summary>
	public ref class SelectRouteDriver : public System::Windows::Forms::Form
	{
	public:
		static Driver^ User;
		int counter = 1;
		List<String^>^ RutasLat = gcnew List<String^>();;
		List<String^>^ RutasLon = gcnew List<String^>();;
		List<double>^ PuntosLat = gcnew List<double>();

	private: System::Windows::Forms::ComboBox^ cmbRutas;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	public:
	public:
		List<double>^ PuntosLong = gcnew List<double>();
		Form^ principal;
		Form^ f2;
		SelectRouteDriver(RuralConnect::Driver^ user, Form^ pp, Form^ ff2)
		{
			InitializeComponent();
			this->User = user;
			principal = pp;
			f2 = ff2;
			for (int i = 0; i < User->Rutasa->Puntos_x_fijo->Count;i++) {
				RutasLat->Add(User->Rutasa->Puntos_x_fijo[i]);
				RutasLon->Add(User->Rutasa->Puntos_y_fijo[i]);
			}
			pictureBox1->Invalidate();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~SelectRouteDriver()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:





	private: System::Windows::Forms::Button^ btnBack;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SelectRouteDriver::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->cmbRutas = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(51, 54);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(140, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Selecciona una ruta:";
			// 
			// btnBack
			// 
			this->btnBack->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBack->Location = System::Drawing::Point(12, 12);
			this->btnBack->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(79, 26);
			this->btnBack->TabIndex = 6;
			this->btnBack->Text = L"Volver";
			this->btnBack->UseVisualStyleBackColor = true;
			this->btnBack->Click += gcnew System::EventHandler(this, &SelectRouteDriver::btnBack_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(54, 82);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1066, 534);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &SelectRouteDriver::pictureBox1_Paint);
			// 
			// cmbRutas
			// 
			this->cmbRutas->FormattingEnabled = true;
			this->cmbRutas->Location = System::Drawing::Point(1175, 176);
			this->cmbRutas->Name = L"cmbRutas";
			this->cmbRutas->Size = System::Drawing::Size(121, 24);
			this->cmbRutas->TabIndex = 10;
			this->cmbRutas->SelectedIndexChanged += gcnew System::EventHandler(this, &SelectRouteDriver::cmbRutas_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(192, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(313, 16);
			this->label2->TabIndex = 11;
			this->label2->Text = L"La ruta seleccionada se muestra de color verde";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Elephant", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(1172, 140);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 20);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Rutas";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Elephant", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(1182, 267);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(110, 39);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Confirmar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SelectRouteDriver::button1_Click);
			// 
			// SelectRouteDriver
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1360, 628);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->cmbRutas);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"SelectRouteDriver";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Elegir Ruta";
			this->Load += gcnew System::EventHandler(this, &SelectRouteDriver::SelectRouteDriver_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		double latTopLeft = -12.074135, lonTopLeft = -77.083166;   // Coordenadas de la esquina superior izquierda
		double latBottomRight = -12.064391, lonBottomRight = -77.077202; // Coordenadas de la esquina inferior derecha
		bool cambioRuta = false;
		int indice=0;
	private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) {
		f2->Show();
		this->Close();
		
	}
private: System::Void btnRouteDetails_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void SelectRouteDriver_Load(System::Object^ sender, System::EventArgs^ e) {

	cmbRutas->Items->Clear();
	if (User->Rutasa->Puntos_x_fijo != nullptr) {
		for (int i = 0;i < User->Rutasa->Puntos_x_fijo->Count;i++) {
			cmbRutas->Items->Add(gcnew ComboBoxItem(i,"Ruta "+(i+1)));
		}
		cmbRutas->SelectedIndex = indice;
	}
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

	x = 50, y = 50, x2 = 0, y2 = 0;

	g = e->Graphics;
	pen = gcnew Pen(Color::Green);
	radius = 5; // Radio del punto

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
private: System::Void cmbRutas_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	indice= cmbRutas->SelectedIndex;
	cambioRuta = true;
	pictureBox1->Invalidate();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		User->Rutasa->Puntos_x_volatil = User->Rutasa->Puntos_x_fijo[indice];
		User->Rutasa->Puntos_y_volatil = User->Rutasa->Puntos_y_fijo[indice];
		Service::UpdateDriver(User);

		PuntosLat = Service::De_String_toDouble(RutasLat[indice]);
		PuntosLong = Service::De_String_toDouble(RutasLon[indice]);

		List<array<double>^>^ LatLong = gcnew List<array<double>^>();

		for (int i = 0; i < PuntosLat->Count;i++) {
			array<double>^ a = { PuntosLat[i],PuntosLong[i] };
			LatLong->Add(a);
		}

		PublicRouteDriver^ CreateRoute = gcnew PublicRouteDriver(LatLong, User, principal, this);
		CreateRoute->Show();
		this->Hide();
}
};
}
