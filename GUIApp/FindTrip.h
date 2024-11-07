#pragma once
#include "SelectRouteDriver.h"

namespace GUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace RuralConnect;
	using namespace RuralService;

	using namespace System::Collections::Generic;
	

	/// <summary>
	/// Resumen de FindTrip
	/// </summary>
	public ref class FindTrip : public System::Windows::Forms::Form
	{
	public:
		Bitmap^ originalImage;
		FindTrip(void)
		{
			InitializeComponent();
			originalImage = gcnew Bitmap(pictureBox1->Image);
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~FindTrip()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtLatitude;
	private: System::Windows::Forms::TextBox^ txtLongitudinal;
	private: System::Windows::Forms::Button^ btnFindTrip;
	private: System::Windows::Forms::Button^ btnSelectInMap;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label4;









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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FindTrip::typeid));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtLatitude = (gcnew System::Windows::Forms::TextBox());
			this->txtLongitudinal = (gcnew System::Windows::Forms::TextBox());
			this->btnFindTrip = (gcnew System::Windows::Forms::Button());
			this->btnSelectInMap = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 12);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Volver";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &FindTrip::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(32, 65);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(126, 16);
			this->label1->TabIndex = 4;
			this->label1->Text = L"¿Cuál es tu destino\?";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(59, 182);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 16);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Latitud:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(59, 231);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(61, 16);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Longitud:";
			// 
			// txtLatitude
			// 
			this->txtLatitude->Location = System::Drawing::Point(165, 176);
			this->txtLatitude->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtLatitude->Name = L"txtLatitude";
			this->txtLatitude->Size = System::Drawing::Size(124, 22);
			this->txtLatitude->TabIndex = 7;
			this->txtLatitude->TextChanged += gcnew System::EventHandler(this, &FindTrip::txtLatitude_TextChanged);
			// 
			// txtLongitudinal
			// 
			this->txtLongitudinal->Location = System::Drawing::Point(165, 225);
			this->txtLongitudinal->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txtLongitudinal->Name = L"txtLongitudinal";
			this->txtLongitudinal->Size = System::Drawing::Size(124, 22);
			this->txtLongitudinal->TabIndex = 8;
			// 
			// btnFindTrip
			// 
			this->btnFindTrip->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFindTrip->Location = System::Drawing::Point(81, 384);
			this->btnFindTrip->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnFindTrip->Name = L"btnFindTrip";
			this->btnFindTrip->Size = System::Drawing::Size(152, 48);
			this->btnFindTrip->TabIndex = 13;
			this->btnFindTrip->Text = L"Confirmar destino";
			this->btnFindTrip->UseVisualStyleBackColor = true;
			this->btnFindTrip->Click += gcnew System::EventHandler(this, &FindTrip::btnFindTrip_Click);
			// 
			// btnSelectInMap
			// 
			this->btnSelectInMap->Location = System::Drawing::Point(61, 286);
			this->btnSelectInMap->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnSelectInMap->Name = L"btnSelectInMap";
			this->btnSelectInMap->Size = System::Drawing::Size(192, 38);
			this->btnSelectInMap->TabIndex = 14;
			this->btnSelectInMap->Text = L"Seleccionar en el mapa";
			this->btnSelectInMap->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(329, -2);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1107, 743);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 15;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &FindTrip::pictureBox1_Click);
			this->pictureBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &FindTrip::pictureBox1_MouseClick);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(29, 113);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(259, 16);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Haz click en el mapa para elegir tu destino";
			// 
			// FindTrip
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1431, 743);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnSelectInMap);
			this->Controls->Add(this->btnFindTrip);
			this->Controls->Add(this->txtLongitudinal);
			this->Controls->Add(this->txtLatitude);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"FindTrip";
			this->Text = L"FindTrip";
			this->Load += gcnew System::EventHandler(this, &FindTrip::FindTrip_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// Guardar la imagen original

		double latTopLeft = -12.074135, lonTopLeft = -77.083166;   // Coordenadas de la esquina superior izquierda
		double latBottomRight = -12.064391, lonBottomRight = -77.077202; // Coordenadas de la esquina inferior derecha

public :
	List<double>^ De_String_toDouble(String^ listasa) {
		List<String^>^ lista = gcnew List<String^>(listasa->Split('.'));
		List<double>^ lista_d = gcnew List<double>();

		for each (String ^ i in lista) {
			double value;
			if (!String::IsNullOrEmpty(i) && Double::TryParse(i, value)) {
				lista_d->Add(value);
			}
		}

		return lista_d;
	}

private: System::Void btnFindTrip_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		double latitude = Convert::ToDouble(txtLatitude->Text);
		double longitude = Convert::ToDouble(txtLongitudinal->Text);
		Route^ newtrip = gcnew Route(latitude, longitude);

		MessageBox::Show("Se ha agregado los datos de su destino con latitud " + newtrip->Latitude + " y longitud " + " " + newtrip->Longitude);
		this->Close();

		SelectRouteDriver^ f = gcnew SelectRouteDriver();
		f->Show();
	}
	catch (Exception^ ex) {
		MessageBox::Show("No se ha podido agregar los datos de su destino por el siguiente motivo:\n" +
			ex->Message);
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
private: System::Void pictureBox1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	//cmabiamos coordenadas pues la imagen esta volteada
	// Obtener posición del clic en píxeles
	//pictureBox1->Image = originalImage;

	int x = e->X;
	int y = e->Y;
	MessageBox::Show("click " + x.ToString() + "  " + y.ToString());
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

	x = 400;  // Coordenada X (puedes cambiarla para mover el punto)
	y = 300; // Coordenada Y (puedes cambiarla para mover el punto)

	// Dibujar el punto en la posición deseada
	g->FillEllipse(System::Drawing::Brushes::Red, x - radius, y - radius, radius * 2, radius * 2);
	// Mostrar las coordenadas en un label o textbox
	txtLatitude->Text = lat.ToString();
	txtLongitudinal->Text = lon.ToString();



	Service::Conductor_actual = Service::QueryDriverbyUsername("luis");
	List<String^>^ lista_x = Service::Conductor_actual->Rutasa->Puntos_x_fijo;
	List<String^>^ lista_y = Service::Conductor_actual->Rutasa->Puntos_y_fijo;

	String^ punto_x = lista_x[0];
	String^ punto_y = lista_y[0];

	List <double>^ puntos_x = De_String_toDouble(punto_x);
	List <double>^ puntos_y = De_String_toDouble(punto_y);
	

	for (int i = 0; i < puntos_x->Count - 1; i++) {

		double pX = puntos_x[i];
		double pY = puntos_y[i];

		pX = width * (pX - lonTopLeft) / (lonBottomRight - lonTopLeft);
		pY = height * (pY - latTopLeft) / (latBottomRight - latTopLeft);

		int radius = 5; // Radio del punto
		g->FillEllipse(System::Drawing::Brushes::Blue, pX - radius, pY - radius, radius * 2, radius * 2);


	}

}


private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {

	

}private: System::Void DriverPage_Load(System::Object^ sender, System::EventArgs^ e) {
}

	   
private: System::Void FindTrip_Load(System::Object^ sender, System::EventArgs^ e) {
	
	double latTopLeft = -12.074135, lonTopLeft = -77.083166;   // Coordenadas de la esquina superior izquierda
	double latBottomRight = -12.064391, lonBottomRight = -77.077202; // Coordenadas de la esquina inferior derecha


	Service::Conductor_actual = Service::QueryDriverbyUsername("luis");
	List<String^>^ lista_x = Service::Conductor_actual->Rutasa->Puntos_x_fijo;
	List<String^>^ lista_y = Service::Conductor_actual->Rutasa->Puntos_y_fijo;

	String^ punto_x = lista_x[0];
	String^ punto_y = lista_y[0];

	List <double>^ puntos_x = De_String_toDouble(punto_x);
	List <double>^ puntos_y = De_String_toDouble(punto_y);
	MessageBox::Show("tenemos " + punto_x + "  " + punto_y);

	// Dibujar el punto en el mapa
	System::Drawing::Graphics^ g = pictureBox1->CreateGraphics();
	// Tamaño del PictureBox
	int width = pictureBox1->Width;
	int height = pictureBox1->Height;

	int radius = 5; // Radio del punto
	// Coordenadas para dibujar el punto dentro del cuadro
	int x = 400;  // Coordenada X (puedes cambiarla para mover el punto)
	int y = 300; // Coordenada Y (puedes cambiarla para mover el punto)

	// Dibujar el punto en la posición deseada
	g->FillEllipse(System::Drawing::Brushes::Blue, x - radius, y - radius, radius * 2, radius * 2);

	for (int i = 0; i < puntos_x->Count - 1; i++) {

		double pX = puntos_x[i];
		double pY = puntos_y[i];

		int pixelX = (int)((pX - lonBottomRight) / (latBottomRight- latTopLeft));
		int pixelY = (int)((pY - lonTopLeft) / (lonBottomRight - lonTopLeft));

		int radius = 5; // Radio del punto
		g->FillEllipse(System::Drawing::Brushes::Red, pX - radius, pY - radius, radius * 2, radius * 2);


	}

}
private: System::Void txtLatitude_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
