#pragma once

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
	private: System::Windows::Forms::Button^ button1;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(83, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Esta es su ruta: ";
			// 
			// webBrowser1
			// 
			this->webBrowser1->Location = System::Drawing::Point(136, 93);
			this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->Size = System::Drawing::Size(399, 187);
			this->webBrowser1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(63, 305);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(591, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Cuando ya este en el punto de partida, presione \"publicar ruta\" para mostar su ru"
				L"ta a los pasajeros";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(288, 369);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(128, 35);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Publicar Ruta";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// PublicRouteDriver
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(700, 482);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->webBrowser1);
			this->Controls->Add(this->label1);
			this->Name = L"PublicRouteDriver";
			this->Text = L"Publicar ruta";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
