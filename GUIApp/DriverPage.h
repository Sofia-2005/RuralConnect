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



	private: System::Windows::Forms::Button^ btnBack;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
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
			this->btnCreateRoute->Location = System::Drawing::Point(63, 203);
			this->btnCreateRoute->Name = L"btnCreateRoute";
			this->btnCreateRoute->Size = System::Drawing::Size(145, 51);
			this->btnCreateRoute->TabIndex = 1;
			this->btnCreateRoute->Text = L"CREAR RUTA";
			this->btnCreateRoute->UseVisualStyleBackColor = true;
			this->btnCreateRoute->Click += gcnew System::EventHandler(this, &DriverPage::btnCreateRoute_Click);
			// 
			// btnMyRoutes
			// 
			this->btnMyRoutes->Location = System::Drawing::Point(63, 277);
			this->btnMyRoutes->Name = L"btnMyRoutes";
			this->btnMyRoutes->Size = System::Drawing::Size(145, 51);
			this->btnMyRoutes->TabIndex = 2;
			this->btnMyRoutes->Text = L"MIS RUTAS";
			this->btnMyRoutes->UseVisualStyleBackColor = true;
			this->btnMyRoutes->Click += gcnew System::EventHandler(this, &DriverPage::btnMyRoutes_Click);
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
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(317, -2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(979, 557);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// DriverPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1293, 549);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->btnMyRoutes);
			this->Controls->Add(this->btnCreateRoute);
			this->Controls->Add(this->label1);
			this->Name = L"DriverPage";
			this->Text = L"Definir Ruta";
			this->Load += gcnew System::EventHandler(this, &DriverPage::DriverPage_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
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
private: System::Void DriverPage_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
