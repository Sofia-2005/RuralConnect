#pragma once

namespace GUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de SelectRouteDriver
	/// </summary>
	public ref class SelectRouteDriver : public System::Windows::Forms::Form
	{
	public:
		SelectRouteDriver(void)
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
		~SelectRouteDriver()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::WebBrowser^ webBrowser1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ btnBack;
	private: System::Windows::Forms::Button^ btnRouteDetails;
	private: System::Windows::Forms::Button^ button5;



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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->btnRouteDetails = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(38, 44);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(105, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Selecciona una ruta:";
			// 
			// webBrowser1
			// 
			this->webBrowser1->Location = System::Drawing::Point(36, 64);
			this->webBrowser1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->webBrowser1->MinimumSize = System::Drawing::Size(15, 16);
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->Size = System::Drawing::Size(231, 203);
			this->webBrowser1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(329, 64);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(70, 31);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Ruta A";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(329, 121);
			this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(70, 31);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Ruta B";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(329, 178);
			this->button3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(70, 31);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Ruta C";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(329, 236);
			this->button4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(70, 31);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Ruta D";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// btnBack
			// 
			this->btnBack->Location = System::Drawing::Point(9, 10);
			this->btnBack->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(59, 21);
			this->btnBack->TabIndex = 6;
			this->btnBack->Text = L"Volver";
			this->btnBack->UseVisualStyleBackColor = true;
			this->btnBack->Click += gcnew System::EventHandler(this, &SelectRouteDriver::btnBack_Click);
			// 
			// btnRouteDetails
			// 
			this->btnRouteDetails->Location = System::Drawing::Point(55, 304);
			this->btnRouteDetails->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnRouteDetails->Name = L"btnRouteDetails";
			this->btnRouteDetails->Size = System::Drawing::Size(158, 34);
			this->btnRouteDetails->TabIndex = 7;
			this->btnRouteDetails->Text = L"VER DETALLES DE LA RUTA";
			this->btnRouteDetails->UseVisualStyleBackColor = true;
			this->btnRouteDetails->Click += gcnew System::EventHandler(this, &SelectRouteDriver::btnRouteDetails_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(252, 304);
			this->button5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(154, 34);
			this->button5->TabIndex = 8;
			this->button5->Text = L"BUSCAR OTRAS RUTAS";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// SelectRouteDriver
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(486, 373);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->btnRouteDetails);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->webBrowser1);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"SelectRouteDriver";
			this->Text = L"Elegir Ruta";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
	}
private: System::Void btnRouteDetails_Click(System::Object^ sender, System::EventArgs^ e) {

}
};
}
