#pragma once
#include "TripInCourse.h"

namespace GUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de PublicRouteDriver
	/// </summary>
	public ref class PublicRouteDriver : public System::Windows::Forms::Form
	{
	public:
		PublicRouteDriver(void)
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
		~PublicRouteDriver()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::WebBrowser^ webBrowser1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnPublishRoutes;

	private: System::Windows::Forms::Button^ btnBack;




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
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnPublishRoutes = (gcnew System::Windows::Forms::Button());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 64);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(308, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"A continuación, se muestran los detalles se su ruta:";
			// 
			// webBrowser1
			// 
			this->webBrowser1->Location = System::Drawing::Point(12, 92);
			this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->Size = System::Drawing::Size(693, 250);
			this->webBrowser1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 357);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(696, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Cuando usted se encuentre en el punto de partida, presione el botón de \"publicar "
				L"ruta\" para mostrarlo a los usuarios.";
			// 
			// btnPublishRoutes
			// 
			this->btnPublishRoutes->Location = System::Drawing::Point(240, 404);
			this->btnPublishRoutes->Name = L"btnPublishRoutes";
			this->btnPublishRoutes->Size = System::Drawing::Size(158, 48);
			this->btnPublishRoutes->TabIndex = 5;
			this->btnPublishRoutes->Text = L"PUBLICAR RUTA";
			this->btnPublishRoutes->UseVisualStyleBackColor = true;
			this->btnPublishRoutes->Click += gcnew System::EventHandler(this, &PublicRouteDriver::btnPublishRoutes_Click);
			// 
			// btnBack
			// 
			this->btnBack->Location = System::Drawing::Point(12, 12);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(79, 26);
			this->btnBack->TabIndex = 8;
			this->btnBack->Text = L"Volver";
			this->btnBack->UseVisualStyleBackColor = true;
			// 
			// PublicRouteDriver
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(710, 482);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->btnPublishRoutes);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->webBrowser1);
			this->Controls->Add(this->label1);
			this->Name = L"PublicRouteDriver";
			this->Text = L"Publicar ruta";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnPublishRoutes_Click(System::Object^ sender, System::EventArgs^ e) {
	TripInCourse^ PublishRoutes = gcnew TripInCourse();
	PublishRoutes->Show();
	this->Hide();
}
};
}
