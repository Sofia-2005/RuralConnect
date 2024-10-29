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

	/// <summary>
	/// Resumen de FindTrip
	/// </summary>
	public ref class FindTrip : public System::Windows::Forms::Form
	{
	public:
		FindTrip(void)
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
		~FindTrip()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::WebBrowser^ webBrowser1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtLatitude;
	private: System::Windows::Forms::TextBox^ txtLongitudinal;
	private: System::Windows::Forms::Button^ btnFindTrip;
	private: System::Windows::Forms::Button^ btnSelectInMap;









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
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtLatitude = (gcnew System::Windows::Forms::TextBox());
			this->txtLongitudinal = (gcnew System::Windows::Forms::TextBox());
			this->btnFindTrip = (gcnew System::Windows::Forms::Button());
			this->btnSelectInMap = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// webBrowser1
			// 
			this->webBrowser1->Location = System::Drawing::Point(342, 76);
			this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->Size = System::Drawing::Size(357, 363);
			this->webBrowser1->TabIndex = 0;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 12);
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
			this->label1->Location = System::Drawing::Point(95, 120);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(126, 16);
			this->label1->TabIndex = 4;
			this->label1->Text = L"¿Cuál es tu destino\?";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(58, 182);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 16);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Latitud:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(58, 231);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(61, 16);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Longitud:";
			// 
			// txtLatitude
			// 
			this->txtLatitude->Location = System::Drawing::Point(165, 176);
			this->txtLatitude->Name = L"txtLatitude";
			this->txtLatitude->Size = System::Drawing::Size(124, 22);
			this->txtLatitude->TabIndex = 7;
			// 
			// txtLongitudinal
			// 
			this->txtLongitudinal->Location = System::Drawing::Point(165, 225);
			this->txtLongitudinal->Name = L"txtLongitudinal";
			this->txtLongitudinal->Size = System::Drawing::Size(124, 22);
			this->txtLongitudinal->TabIndex = 8;
			// 
			// btnFindTrip
			// 
			this->btnFindTrip->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFindTrip->Location = System::Drawing::Point(238, 492);
			this->btnFindTrip->Name = L"btnFindTrip";
			this->btnFindTrip->Size = System::Drawing::Size(152, 48);
			this->btnFindTrip->TabIndex = 13;
			this->btnFindTrip->Text = L"Buscar Viaje";
			this->btnFindTrip->UseVisualStyleBackColor = true;
			this->btnFindTrip->Click += gcnew System::EventHandler(this, &FindTrip::btnFindTrip_Click);
			// 
			// btnSelectInMap
			// 
			this->btnSelectInMap->Location = System::Drawing::Point(61, 286);
			this->btnSelectInMap->Name = L"btnSelectInMap";
			this->btnSelectInMap->Size = System::Drawing::Size(192, 38);
			this->btnSelectInMap->TabIndex = 14;
			this->btnSelectInMap->Text = L"Seleccionar en el mapa";
			this->btnSelectInMap->UseVisualStyleBackColor = true;
			// 
			// FindTrip
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(735, 576);
			this->Controls->Add(this->btnSelectInMap);
			this->Controls->Add(this->btnFindTrip);
			this->Controls->Add(this->txtLongitudinal);
			this->Controls->Add(this->txtLatitude);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->webBrowser1);
			this->Name = L"FindTrip";
			this->Text = L"FindTrip";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

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
};
}
