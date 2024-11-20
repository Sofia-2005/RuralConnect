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
	/// Resumen de VehicleForm
	/// </summary>
	public ref class VehicleForm : public System::Windows::Forms::Form
	{
	public:

		String^ conductorName;
		String^ conductorLastName;
		String^ conductorUsername;
		String^ conductorPassword;
		int conductorPhone;
	private: System::Windows::Forms::Label^ label5;
	public:
		String^ conductorDni;

		VehicleForm(String^ name, String^ lastname, String^ username, String^ password, int phone, String^ dni) {
			InitializeComponent();
			conductorName = name;
			conductorLastName = lastname;
			conductorUsername = username;
			conductorPassword = password;
			conductorPhone = phone;
			conductorDni = dni;
		}

		VehicleForm(void)
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
		~VehicleForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ txtModel;
	private: System::Windows::Forms::TextBox^ txtNumber;
	private: System::Windows::Forms::TextBox^ txtPlateNumber;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ pbVehicle;



	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txtModel = (gcnew System::Windows::Forms::TextBox());
			this->txtNumber = (gcnew System::Windows::Forms::TextBox());
			this->txtPlateNumber = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pbVehicle = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbVehicle))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(38, 64);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Modelo";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(38, 102);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(156, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Número de asientos disponibles";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(38, 147);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(89, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Número de Placa";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(38, 193);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(47, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Licencia";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(138, 313);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(230, 24);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Agregue una imagen de su licencia de conducir";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &VehicleForm::button1_Click);
			// 
			// txtModel
			// 
			this->txtModel->Location = System::Drawing::Point(217, 64);
			this->txtModel->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtModel->Name = L"txtModel";
			this->txtModel->Size = System::Drawing::Size(76, 20);
			this->txtModel->TabIndex = 5;
			// 
			// txtNumber
			// 
			this->txtNumber->Location = System::Drawing::Point(217, 102);
			this->txtNumber->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtNumber->Name = L"txtNumber";
			this->txtNumber->Size = System::Drawing::Size(76, 20);
			this->txtNumber->TabIndex = 6;
			// 
			// txtPlateNumber
			// 
			this->txtPlateNumber->Location = System::Drawing::Point(217, 147);
			this->txtPlateNumber->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtPlateNumber->Name = L"txtPlateNumber";
			this->txtPlateNumber->Size = System::Drawing::Size(76, 20);
			this->txtPlateNumber->TabIndex = 7;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(156, 362);
			this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(89, 39);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Aceptar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &VehicleForm::button2_Click);
			// 
			// pbVehicle
			// 
			this->pbVehicle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pbVehicle->Location = System::Drawing::Point(199, 193);
			this->pbVehicle->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pbVehicle->Name = L"pbVehicle";
			this->pbVehicle->Size = System::Drawing::Size(111, 103);
			this->pbVehicle->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbVehicle->TabIndex = 9;
			this->pbVehicle->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(38, 30);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(164, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Ingrese los datos de su vehículo:";
			// 
			// VehicleForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(406, 432);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->pbVehicle);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->txtPlateNumber);
			this->Controls->Add(this->txtNumber);
			this->Controls->Add(this->txtModel);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"VehicleForm";
			this->Text = L"VehicleForm";
			this->Load += gcnew System::EventHandler(this, &VehicleForm::VehicleForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbVehicle))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ ofd = gcnew OpenFileDialog();
		ofd->Filter = "Image Files (*.jpg;*.jpeg;)|*.jpg;*.jpeg;";
		if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			pbVehicle->Image = gcnew Bitmap(ofd->FileName);
		}
	}
		   bool IsNumberInRange(String^ text) {
			   // Verificar si el texto es numérico
			   try {
				   int number = Int32::Parse(text);
				   // Verificar si el número está entre 2 y 10
				   if (number >= 2 && number <= 100) {
					   return true;
				   }
			   }
			   catch (FormatException^) {

				   return false;
			   }
			   return false;
		   }
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ errores = "";
		if (!IsNumberInRange(txtNumber->Text)) {
			errores = errores + "Cantidad de asientos incorrectos\n";
		}
		if (txtModel->Text->Length == 0 || txtPlateNumber->Text->Length == 0) {
			errores = errores + "Faltan completar Datos\n";
		}
		if (pbVehicle->Image == nullptr) {
			errores = errores + "Necesita ingresar su licencia\n";
		}


		try {
			if (errores == "") {


				Vehicle^ v = gcnew Vehicle();
				v->Model = txtModel->Text;
				v->Seats = Convert::ToInt32(txtNumber->Text);
				v->PlateNumber = txtPlateNumber->Text;


				System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
				pbVehicle->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
				v->License = ms->ToArray();


				Driver^ a = gcnew Driver(conductorName, conductorLastName, conductorUsername, conductorPassword, conductorPhone, conductorDni);
				a->vehicle = v;
				Service::AddDriver(a);
				MessageBox::Show("Se ha agregado al conductor " + a->Name + " " + a->LastName);

				


				this->Close();
			}
			else {
				MessageBox::Show("Se encontraron los siguientes errores : \n\n" + errores);
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("No se ha podido agregar al usuario por el siguiente motivo:\n" +
				ex->Message);
		}
	}
	private: System::Void VehicleForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
