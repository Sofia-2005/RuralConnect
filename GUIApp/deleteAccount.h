#pragma once

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
	/// Resumen de deleteAccount
	/// </summary>
	public ref class deleteAccount : public System::Windows::Forms::Form
	{
	public:
		Driver^ driver = gcnew Driver();
		Passenger^ pas = gcnew Passenger();
		Form^ form;
		Form^ main;
		deleteAccount(Driver^p,Passenger^a, Form^ f, Form^ principal)
		{
			InitializeComponent();
			driver = p;
			pas = a;
			form = f;
			main = principal;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~deleteAccount()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(41, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(242, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"¿Seguro que quiere eliminar su cuenta\?";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(53, 65);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(64, 34);
			this->button1->TabIndex = 1;
			this->button1->Text = L"SI";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &deleteAccount::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(192, 65);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(64, 34);
			this->button2->TabIndex = 2;
			this->button2->Text = L"NO";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &deleteAccount::button2_Click);
			// 
			// deleteAccount
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(329, 137);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"deleteAccount";
			this->Text = L"Eliminar cuenta";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (driver == nullptr) {
			form->Close();
			Service::DeletePassenger(pas->Username);
		}
		if (pas == nullptr) {
			form->Close();
			Service::DeleteDriver(driver->Username);
		}
		main->Show();
		this->Close();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}
