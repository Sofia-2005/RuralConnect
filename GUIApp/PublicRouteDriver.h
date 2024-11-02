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

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnPublishRoutes;

	private: System::Windows::Forms::Button^ btnBack;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PublicRouteDriver::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnPublishRoutes = (gcnew System::Windows::Forms::Button());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
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
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 214);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(305, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Cuando usted se encuentre en el punto de partida,";
			// 
			// btnPublishRoutes
			// 
			this->btnPublishRoutes->Location = System::Drawing::Point(65, 379);
			this->btnPublishRoutes->Name = L"btnPublishRoutes";
			this->btnPublishRoutes->Size = System::Drawing::Size(158, 48);
			this->btnPublishRoutes->TabIndex = 5;
			this->btnPublishRoutes->Text = L"EMPEZAR VIAJE";
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
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(9, 243);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(235, 16);
			this->label3->TabIndex = 9;
			this->label3->Text = L" presione el botón de \"Empezar viaje\" ";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(324, 10);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(925, 601);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			// 
			// PublicRouteDriver
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1257, 617);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->btnPublishRoutes);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"PublicRouteDriver";
			this->Text = L"Publicar ruta";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
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
