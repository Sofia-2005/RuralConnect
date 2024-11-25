#pragma once
#include "SelectRoutePassenger.h"

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
		Form^ Principal;

	private: System::Windows::Forms::Label^ label2;
	public:
		Passenger^ User;
		FindTrip(RuralConnect::Passenger^ user, Form^ p)
		{
			InitializeComponent();
			originalImage = gcnew Bitmap(pictureBox1->Image);
			//
			//TODO: agregar código de constructor aquí
			//
			this->User = user;
			User->UbiActual = "-12.071704 -77.080154";
			pictureBox1->Invalidate();
			Service::UpdatePassenger(User);
			Principal = p;
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




	private: System::Windows::Forms::Button^ btnFindTrip;

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
			this->btnFindTrip = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
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
			this->label1->Location = System::Drawing::Point(32, 154);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(126, 16);
			this->label1->TabIndex = 4;
			this->label1->Text = L"¿Cuál es tu destino\?";
			this->label1->Click += gcnew System::EventHandler(this, &FindTrip::label1_Click);
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
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &FindTrip::pictureBox1_Paint);
			this->pictureBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &FindTrip::pictureBox1_MouseClick);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(32, 190);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(259, 16);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Haz click en el mapa para elegir tu destino";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(32, 62);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(237, 16);
			this->label2->TabIndex = 17;
			this->label2->Text = L"El punto rojo indica su ubicación actual";
			// 
			// FindTrip
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1431, 743);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnFindTrip);
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

		double latitude=0;
		double longitude=0;

		public:
			int xClick = 0;
			int yClick = 0;

public :

private: System::Void btnFindTrip_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		if (latitude != 0 && longitude != 0) {

			MessageBox::Show("Se ha registrado su destino");

			User->DesiredDestination = latitude + " " + longitude;
			Service::UpdatePassenger(User);
			SelectRoutePassenger^ f = gcnew SelectRoutePassenger(User, Principal, this);
			f->Show();

			this->Hide();
		}
		else {
			MessageBox::Show("Debe elegir su destino");
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("No se ha podido agregar los datos de su destino por el siguiente motivo:\n" +
			ex->Message);
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Principal->Show();
	this->Close();
}
private: System::Void pictureBox1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	//cmabiamos coordenadas pues la imagen esta volteada
	// Obtener posición del clic en píxeles
	//pictureBox1->Image = originalImage;
	xClick = e->X;
	yClick = e->Y;
	pictureBox1->Invalidate();
}


private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {

	

}
private: System::Void DriverPage_Load(System::Object^ sender, System::EventArgs^ e) {
}

	   
private: System::Void FindTrip_Load(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void txtLatitude_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	int x = 50, y = 50;

	int width = pictureBox1->Width;
	int height = pictureBox1->Height;

	Graphics^ g = e->Graphics;
	Pen^ pen = gcnew Pen(Color::Blue);
	int radius = 5; // Radio del punto

	//Ubicacion actual
	List<double>^ latlong = gcnew List<double>();

	latlong = Service::De_String_toDouble(User->UbiActual);

	x = (int)((latlong[0] - latTopLeft) / (latBottomRight - latTopLeft) * width);
	y = (int)((latlong[1] - lonTopLeft) / (lonBottomRight - lonTopLeft) * height);

	g->FillEllipse(System::Drawing::Brushes::Red, x - radius, y - radius, radius * 2, radius * 2);

	//Destino

	if (xClick!=0 && yClick!=0) {
		// Convertir píxeles a coordenadas geográficas teniendo en cuenta la rotación
		latitude = latTopLeft + (latBottomRight - latTopLeft) * (static_cast<double>(xClick) / width);
		longitude = lonTopLeft + (lonBottomRight - lonTopLeft) * (static_cast<double>(yClick) / height);

		g->FillEllipse(System::Drawing::Brushes::Blue, xClick - radius, yClick - radius, radius * 2, radius * 2);
	}
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
