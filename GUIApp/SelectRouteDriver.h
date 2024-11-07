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
	private: System::Windows::Forms::Timer^ timer1;
	public:
	public:
		List<double>^ PuntosLong = gcnew List<double>();
		SelectRouteDriver(RuralConnect::Driver^ user)
		{
			InitializeComponent();
			this->User = user;
			for (int i = 0; i < User->Rutasa->Puntos_x_fijo->Count;i++) {
				RutasLat->Add(User->Rutasa->Puntos_x_fijo[i]);
				RutasLon->Add(User->Rutasa->Puntos_y_fijo[i]);
			}
			timer1->Start();
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

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ btnBack;
	private: System::Windows::Forms::Button^ btnRouteDetails;
	private: System::Windows::Forms::Button^ button5;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SelectRouteDriver::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->btnRouteDetails = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(51, 54);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(128, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Selecciona una ruta:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1177, 94);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(93, 38);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Ruta A";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1177, 164);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(93, 38);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Ruta B";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1177, 234);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(93, 38);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Ruta C";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(1177, 305);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(93, 38);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Ruta D";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// btnBack
			// 
			this->btnBack->Location = System::Drawing::Point(12, 12);
			this->btnBack->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(79, 26);
			this->btnBack->TabIndex = 6;
			this->btnBack->Text = L"Volver";
			this->btnBack->UseVisualStyleBackColor = true;
			this->btnBack->Click += gcnew System::EventHandler(this, &SelectRouteDriver::btnBack_Click);
			// 
			// btnRouteDetails
			// 
			this->btnRouteDetails->Location = System::Drawing::Point(1120, 467);
			this->btnRouteDetails->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnRouteDetails->Name = L"btnRouteDetails";
			this->btnRouteDetails->Size = System::Drawing::Size(211, 42);
			this->btnRouteDetails->TabIndex = 7;
			this->btnRouteDetails->Text = L"VER DETALLES DE LA RUTA";
			this->btnRouteDetails->UseVisualStyleBackColor = true;
			this->btnRouteDetails->Click += gcnew System::EventHandler(this, &SelectRouteDriver::btnRouteDetails_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(1126, 393);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(205, 42);
			this->button5->TabIndex = 8;
			this->button5->Text = L"BUSCAR OTRAS RUTAS";
			this->button5->UseVisualStyleBackColor = true;
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
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &SelectRouteDriver::timer1_Tick);
			// 
			// SelectRouteDriver
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1360, 628);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->btnRouteDetails);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"SelectRouteDriver";
			this->Text = L"Elegir Ruta";
			this->Load += gcnew System::EventHandler(this, &SelectRouteDriver::SelectRouteDriver_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		double latTopLeft = -12.074135, lonTopLeft = -77.083166;   // Coordenadas de la esquina superior izquierda
		double latBottomRight = -12.064391, lonBottomRight = -77.077202; // Coordenadas de la esquina inferior derecha
	private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
	}
private: System::Void btnRouteDetails_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void SelectRouteDriver_Load(System::Object^ sender, System::EventArgs^ e) {
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

	for (int i = 0;i < RutasLat->Count;i++) {
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

			x2 = (int)((PuntosLat[k + 1] - latTopLeft) / (latBottomRight - latTopLeft) * width);
			y2 = (int)((PuntosLong[k + 1] - lonTopLeft) / (lonBottomRight - lonTopLeft) * height);
			g->DrawLine(pen, x, y, x2, y2);
		}
	}
}
};
}
