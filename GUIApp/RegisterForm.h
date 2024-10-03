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
	/// Resumen de RegisterForm
	/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		RegisterForm(void)
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
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ btnPassenger;
	private: System::Windows::Forms::Button^ btnDriver;
	private: System::Windows::Forms::Button^ btnRegister;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::TextBox^ txtLastname;
	private: System::Windows::Forms::TextBox^ txtDNI;
	private: System::Windows::Forms::TextBox^ txtPhone;
	private: System::Windows::Forms::TextBox^ txtUsername;
	private: System::Windows::Forms::TextBox^ txtPassword;
	private: System::Windows::Forms::Button^ btn_back;




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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->btnPassenger = (gcnew System::Windows::Forms::Button());
			this->btnDriver = (gcnew System::Windows::Forms::Button());
			this->btnRegister = (gcnew System::Windows::Forms::Button());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->txtLastname = (gcnew System::Windows::Forms::TextBox());
			this->txtDNI = (gcnew System::Windows::Forms::TextBox());
			this->txtPhone = (gcnew System::Windows::Forms::TextBox());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->btn_back = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(42, 43);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre";
			this->label1->Click += gcnew System::EventHandler(this, &RegisterForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(42, 76);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Apellido";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(42, 114);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(26, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"DNI";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(42, 149);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(39, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Celular";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(42, 184);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(43, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Usuario";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(42, 219);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(61, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Contraseña";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(42, 252);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(23, 13);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Rol";
			// 
			// btnPassenger
			// 
			this->btnPassenger->Location = System::Drawing::Point(111, 247);
			this->btnPassenger->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnPassenger->Name = L"btnPassenger";
			this->btnPassenger->Size = System::Drawing::Size(56, 27);
			this->btnPassenger->TabIndex = 7;
			this->btnPassenger->Text = L"Pasajero";
			this->btnPassenger->UseVisualStyleBackColor = true;
			this->btnPassenger->Click += gcnew System::EventHandler(this, &RegisterForm::btnPassenger_Click);
			// 
			// btnDriver
			// 
			this->btnDriver->Location = System::Drawing::Point(197, 247);
			this->btnDriver->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnDriver->Name = L"btnDriver";
			this->btnDriver->Size = System::Drawing::Size(64, 27);
			this->btnDriver->TabIndex = 8;
			this->btnDriver->Text = L"Conductor";
			this->btnDriver->UseVisualStyleBackColor = true;
			this->btnDriver->Click += gcnew System::EventHandler(this, &RegisterForm::btnDriver_Click);
			// 
			// btnRegister
			// 
			this->btnRegister->Location = System::Drawing::Point(142, 296);
			this->btnRegister->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnRegister->Name = L"btnRegister";
			this->btnRegister->Size = System::Drawing::Size(76, 28);
			this->btnRegister->TabIndex = 9;
			this->btnRegister->Text = L"Registrarse";
			this->btnRegister->UseVisualStyleBackColor = true;
			this->btnRegister->Click += gcnew System::EventHandler(this, &RegisterForm::btnRegister_Click);
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(118, 43);
			this->txtName->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(76, 20);
			this->txtName->TabIndex = 10;
			// 
			// txtLastname
			// 
			this->txtLastname->Location = System::Drawing::Point(118, 76);
			this->txtLastname->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtLastname->Name = L"txtLastname";
			this->txtLastname->Size = System::Drawing::Size(76, 20);
			this->txtLastname->TabIndex = 11;
			// 
			// txtDNI
			// 
			this->txtDNI->Location = System::Drawing::Point(118, 114);
			this->txtDNI->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtDNI->Name = L"txtDNI";
			this->txtDNI->Size = System::Drawing::Size(76, 20);
			this->txtDNI->TabIndex = 12;
			// 
			// txtPhone
			// 
			this->txtPhone->Location = System::Drawing::Point(118, 149);
			this->txtPhone->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtPhone->Name = L"txtPhone";
			this->txtPhone->Size = System::Drawing::Size(76, 20);
			this->txtPhone->TabIndex = 13;
			// 
			// txtUsername
			// 
			this->txtUsername->Location = System::Drawing::Point(118, 184);
			this->txtUsername->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(76, 20);
			this->txtUsername->TabIndex = 14;
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(118, 219);
			this->txtPassword->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(76, 20);
			this->txtPassword->TabIndex = 15;
			// 
			// btn_back
			// 
			this->btn_back->Location = System::Drawing::Point(272, 7);
			this->btn_back->Name = L"btn_back";
			this->btn_back->Size = System::Drawing::Size(82, 20);
			this->btn_back->TabIndex = 16;
			this->btn_back->Text = L"VOLVER";
			this->btn_back->UseVisualStyleBackColor = true;
			this->btn_back->Click += gcnew System::EventHandler(this, &RegisterForm::btn_back_Click);
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(363, 346);
			this->Controls->Add(this->btn_back);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->txtUsername);
			this->Controls->Add(this->txtPhone);
			this->Controls->Add(this->txtDNI);
			this->Controls->Add(this->txtLastname);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->btnRegister);
			this->Controls->Add(this->btnDriver);
			this->Controls->Add(this->btnPassenger);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"RegisterForm";
			this->Text = L"RegisterForm";
			this->Load += gcnew System::EventHandler(this, &RegisterForm::RegisterForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	static int pasajero = 0;

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnRegister_Click(System::Object^ sender, System::EventArgs^ e) {
		if (pasajero != 0) {
			try {
				String^ name = txtName->Text;
				String^ lastname = txtLastname->Text;
				String^ username = txtUsername->Text;
				String^ password = txtPassword->Text;
				int phone = Convert::ToInt32(txtPhone->Text);
				String^ dni = txtDNI->Text;

				if (pasajero == 1) {
					Passenger^ p = gcnew Passenger(name, lastname, username, password, phone, dni);
					Service::AddPassenger(p);
					MessageBox::Show("Se ha agregado al pasajero " + p->Name + " " + p->LastName);
				}
				else {
					Driver^ p = gcnew Driver(name, lastname, username, password, phone, dni);
					Service::AddDriver(p);
					MessageBox::Show("Se ha agregado al conductor " + p->Name + " " + p->LastName);
				}
				pasajero = 0;
				this->Close();
			}
			catch (Exception^ ex) {
				MessageBox::Show("No se ha podido agregar al usuario por el siguiente motivo:\n" +
					ex->Message);
			}
		}
	}
	private: System::Void btn_back_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();  // Ocultar el formulario actual
		//LoginForm^ waa = gcnew LoginForm();
		//waa->Show();

	}
	private: System::Void btnPassenger_Click(System::Object^ sender, System::EventArgs^ e) {
		pasajero = 1;
	}
	private: System::Void btnDriver_Click(System::Object^ sender, System::EventArgs^ e) {
		pasajero = 2;
	}
private: System::Void RegisterForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
