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


	private: System::Windows::Forms::WebBrowser^ webBrowser1;
	private: System::Windows::Forms::Button^ btnBack;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnCreateRoute = (gcnew System::Windows::Forms::Button());
			this->btnMyRoutes = (gcnew System::Windows::Forms::Button());
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 59);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(302, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Marque los puntos en el mapa para definir su ruta:";
			this->label1->Click += gcnew System::EventHandler(this, &DriverPage::label1_Click);
			// 
			// btnCreateRoute
			// 
			this->btnCreateRoute->Location = System::Drawing::Point(190, 325);
			this->btnCreateRoute->Name = L"btnCreateRoute";
			this->btnCreateRoute->Size = System::Drawing::Size(145, 51);
			this->btnCreateRoute->TabIndex = 1;
			this->btnCreateRoute->Text = L"CREAR RUTA";
			this->btnCreateRoute->UseVisualStyleBackColor = true;
			this->btnCreateRoute->Click += gcnew System::EventHandler(this, &DriverPage::btnCreateRoute_Click);
			// 
			// btnMyRoutes
			// 
			this->btnMyRoutes->Location = System::Drawing::Point(190, 399);
			this->btnMyRoutes->Name = L"btnMyRoutes";
			this->btnMyRoutes->Size = System::Drawing::Size(145, 51);
			this->btnMyRoutes->TabIndex = 2;
			this->btnMyRoutes->Text = L"MIS RUTAS";
			this->btnMyRoutes->UseVisualStyleBackColor = true;
			this->btnMyRoutes->Click += gcnew System::EventHandler(this, &DriverPage::btnMyRoutes_Click);
			// 
			// webBrowser1
			// 
			this->webBrowser1->Location = System::Drawing::Point(12, 87);
			this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->Size = System::Drawing::Size(571, 214);
			this->webBrowser1->TabIndex = 4;
			// 
			// btnBack
			// 
			this->btnBack->Location = System::Drawing::Point(12, 12);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(79, 26);
			this->btnBack->TabIndex = 7;
			this->btnBack->Text = L"Volver";
			this->btnBack->UseVisualStyleBackColor = true;
			this->btnBack->Click += gcnew System::EventHandler(this, &DriverPage::btnBack_Click);
			// 
			// DriverPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(610, 462);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->webBrowser1);
			this->Controls->Add(this->btnMyRoutes);
			this->Controls->Add(this->btnCreateRoute);
			this->Controls->Add(this->label1);
			this->Name = L"DriverPage";
			this->Text = L"Definir Ruta";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
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
};
}
