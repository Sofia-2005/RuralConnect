#pragma once

namespace GUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Collections::Generic;
	using namespace System::Drawing;
	using namespace RuralConnect;
	using namespace RuralService;

	/// <summary>
	/// Resumen de CalificacionPassenger
	/// </summary>
	public ref class CalificacionPassenger : public System::Windows::Forms::Form
	{
	public:
		Driver^ User;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ txtDNI;
	private: System::Windows::Forms::Label^ txtcalificacion;
	private: System::Windows::Forms::Label^ txtapellido;
	private: System::Windows::Forms::Label^ txtnombre;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	public:
		Form^ principal;
		CalificacionPassenger(Driver^ U, Form^ pp)
		{
			InitializeComponent();
			User = U;
			principal = pp;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~CalificacionPassenger()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ txt_Usuario;
	protected:

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ PhotoConductor;





	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CalificacionPassenger::typeid));
			this->txt_Usuario = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->PhotoConductor = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtDNI = (gcnew System::Windows::Forms::Label());
			this->txtcalificacion = (gcnew System::Windows::Forms::Label());
			this->txtapellido = (gcnew System::Windows::Forms::Label());
			this->txtnombre = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PhotoConductor))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->SuspendLayout();
			// 
			// txt_Usuario
			// 
			this->txt_Usuario->AutoSize = true;
			this->txt_Usuario->Location = System::Drawing::Point(42, 102);
			this->txt_Usuario->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->txt_Usuario->Name = L"txt_Usuario";
			this->txt_Usuario->Size = System::Drawing::Size(0, 13);
			this->txt_Usuario->TabIndex = 31;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(311, 338);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(87, 45);
			this->button1->TabIndex = 29;
			this->button1->Text = L"Calificar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &CalificacionPassenger::button1_Click);
			// 
			// PhotoConductor
			// 
			this->PhotoConductor->Location = System::Drawing::Point(272, 98);
			this->PhotoConductor->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->PhotoConductor->Name = L"PhotoConductor";
			this->PhotoConductor->Size = System::Drawing::Size(111, 132);
			this->PhotoConductor->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PhotoConductor->TabIndex = 24;
			this->PhotoConductor->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(41, 213);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(34, 17);
			this->label4->TabIndex = 23;
			this->label4->Text = L"DNI";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(41, 246);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(137, 17);
			this->label3->TabIndex = 22;
			this->label3->Text = L"Calificación Actual";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(41, 171);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 17);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Apellido";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(42, 131);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(64, 17);
			this->label1->TabIndex = 20;
			this->label1->Text = L"Nombre";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Headline R", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->label5->Location = System::Drawing::Point(26, 53);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(382, 13);
			this->label5->TabIndex = 32;
			this->label5->Text = L"CALIFICA TU EXPERIENCIA CON EL CONDUCTOR";
			this->label5->Click += gcnew System::EventHandler(this, &CalificacionPassenger::label5_Click);
			// 
			// txtDNI
			// 
			this->txtDNI->AutoSize = true;
			this->txtDNI->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDNI->Location = System::Drawing::Point(154, 213);
			this->txtDNI->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->txtDNI->Name = L"txtDNI";
			this->txtDNI->Size = System::Drawing::Size(33, 18);
			this->txtDNI->TabIndex = 36;
			this->txtDNI->Text = L"DNI";
			// 
			// txtcalificacion
			// 
			this->txtcalificacion->AutoSize = true;
			this->txtcalificacion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtcalificacion->Location = System::Drawing::Point(185, 246);
			this->txtcalificacion->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->txtcalificacion->Name = L"txtcalificacion";
			this->txtcalificacion->Size = System::Drawing::Size(128, 18);
			this->txtcalificacion->TabIndex = 35;
			this->txtcalificacion->Text = L"Calificación Actual";
			// 
			// txtapellido
			// 
			this->txtapellido->AutoSize = true;
			this->txtapellido->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtapellido->Location = System::Drawing::Point(154, 171);
			this->txtapellido->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->txtapellido->Name = L"txtapellido";
			this->txtapellido->Size = System::Drawing::Size(59, 18);
			this->txtapellido->TabIndex = 34;
			this->txtapellido->Text = L"Apellido";
			// 
			// txtnombre
			// 
			this->txtnombre->AutoSize = true;
			this->txtnombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtnombre->Location = System::Drawing::Point(154, 131);
			this->txtnombre->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->txtnombre->Name = L"txtnombre";
			this->txtnombre->Size = System::Drawing::Size(62, 18);
			this->txtnombre->TabIndex = 33;
			this->txtnombre->Text = L"Nombre";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(42, 294);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(332, 15);
			this->label6->TabIndex = 37;
			this->label6->Text = L"Escoge la cantidad de estrellas que se merece el conductor";
			this->label6->Click += gcnew System::EventHandler(this, &CalificacionPassenger::label6_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(53, 338);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(41, 45);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 38;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &CalificacionPassenger::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(236, 338);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(41, 45);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 39;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &CalificacionPassenger::pictureBox2_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(191, 338);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(41, 45);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 40;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &CalificacionPassenger::pictureBox3_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(145, 338);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(41, 45);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 41;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &CalificacionPassenger::pictureBox4_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(99, 338);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(41, 45);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 42;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &CalificacionPassenger::pictureBox5_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(65, 399);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(13, 13);
			this->label7->TabIndex = 43;
			this->label7->Text = L"1";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(113, 399);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(13, 13);
			this->label8->TabIndex = 44;
			this->label8->Text = L"2";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(157, 399);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(13, 13);
			this->label9->TabIndex = 45;
			this->label9->Text = L"3";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(208, 399);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(13, 13);
			this->label10->TabIndex = 46;
			this->label10->Text = L"4";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(251, 399);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(13, 13);
			this->label11->TabIndex = 47;
			this->label11->Text = L"5";
			// 
			// CalificacionPassenger
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(430, 427);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txtDNI);
			this->Controls->Add(this->txtcalificacion);
			this->Controls->Add(this->txtapellido);
			this->Controls->Add(this->txtnombre);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txt_Usuario);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->PhotoConductor);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"CalificacionPassenger";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CalificacionPassenger";
			this->Load += gcnew System::EventHandler(this, &CalificacionPassenger::CalificacionPassenger_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PhotoConductor))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
		static int val = 0;
	private: System::Void CalificacionPassenger_Load(System::Object^ sender, System::EventArgs^ e) {

		//Mostrar datos del pasajero
		txtDNI->Text = User->DNI;
		txt_Usuario->Text = User->Username;
		txtnombre->Text = User->Name;
		txtapellido->Text = User->LastName;
		txtcalificacion->Text = Convert::ToString(User->Qualification);
		//Codigoo para establecer la imagene en el form
		if (User->Photo != nullptr && User->Photo->Length > 0) {
			// Convertir el array<Byte>^ en una imagen
			System::IO::MemoryStream^ memoryStream = gcnew System::IO::MemoryStream(User->Photo);
			try {

				PhotoConductor->Image = System::Drawing::Image::FromStream(memoryStream);
			}
			catch (System::Exception^ ex) {
				MessageBox::Show("Error al cargar la imagen: " + ex->Message);
			}
			finally {
				delete memoryStream; // Liberar recursos
			}
		}
		else {
			PhotoConductor->Image = nullptr; // Opcional: Establecer imagen predeterminada

		}
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (val == 0) {
		MessageBox::Show("Debes calificar al conductor");
	}
	else {
		User = Service::QueryDriverbyUsername(User->Username);
		User->Qualification = (User->Qualification+val)/2;
		Service::UpdateDriver(User);
		MessageBox::Show("Gracias por tu opinion");
		this->Close();
		principal->Show();
	}

}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	val = 1;
}
private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
	val = 2;
}
private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
	val = 3;
}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	val = 4;
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	val = 5;
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
