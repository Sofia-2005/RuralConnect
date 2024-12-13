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
	/// Resumen de CalificacionDriver
	/// </summary>
	public ref class CalificacionDriver : public System::Windows::Forms::Form
	{
	public:
		Driver^ User;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ txt_Usuario;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtDNI;





	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ N;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Username;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Apellido;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ calificacion;






	public:
		Form^ principal;
		CalificacionDriver(Driver^ d, Form^ pp)
		{
			InitializeComponent();
			User = d;
			principal = pp;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~CalificacionDriver()
		{
			if (components)
			{
				delete components;
			}
		}





	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::PictureBox^ PhotoPasajero;


	private: System::Windows::Forms::TextBox^ txtNombre;

	private: System::Windows::Forms::TextBox^ txtCalificacion;



	private: System::Windows::Forms::TextBox^ txtApellido;


	private: System::Windows::Forms::Button^ button1;




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
			this->PhotoPasajero = (gcnew System::Windows::Forms::PictureBox());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->txtCalificacion = (gcnew System::Windows::Forms::TextBox());
			this->txtApellido = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->txt_Usuario = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtDNI = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->N = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Username = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Apellido = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->calificacion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PhotoPasajero))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(79, 133);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Nombre:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(78, 176);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Apellido:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(78, 256);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 16);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Calificación:";
			this->label3->Click += gcnew System::EventHandler(this, &CalificacionDriver::label3_Click);
			// 
			// PhotoPasajero
			// 
			this->PhotoPasajero->Location = System::Drawing::Point(418, 23);
			this->PhotoPasajero->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PhotoPasajero->Name = L"PhotoPasajero";
			this->PhotoPasajero->Size = System::Drawing::Size(157, 194);
			this->PhotoPasajero->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PhotoPasajero->TabIndex = 5;
			this->PhotoPasajero->TabStop = false;
			this->PhotoPasajero->Click += gcnew System::EventHandler(this, &CalificacionDriver::pictureBox1_Click);
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(177, 129);
			this->txtNombre->Margin = System::Windows::Forms::Padding(4);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(103, 22);
			this->txtNombre->TabIndex = 12;
			// 
			// txtCalificacion
			// 
			this->txtCalificacion->Location = System::Drawing::Point(177, 256);
			this->txtCalificacion->Margin = System::Windows::Forms::Padding(4);
			this->txtCalificacion->Name = L"txtCalificacion";
			this->txtCalificacion->Size = System::Drawing::Size(103, 22);
			this->txtCalificacion->TabIndex = 14;
			// 
			// txtApellido
			// 
			this->txtApellido->Location = System::Drawing::Point(177, 168);
			this->txtApellido->Margin = System::Windows::Forms::Padding(4);
			this->txtApellido->Name = L"txtApellido";
			this->txtApellido->Size = System::Drawing::Size(103, 22);
			this->txtApellido->TabIndex = 15;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(410, 245);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(165, 34);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Modificar calificación";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CalificacionDriver::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button2->Location = System::Drawing::Point(12, 11);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(77, 25);
			this->button2->TabIndex = 17;
			this->button2->Text = L"Terminar";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &CalificacionDriver::button2_Click);
			// 
			// txt_Usuario
			// 
			this->txt_Usuario->AutoSize = true;
			this->txt_Usuario->Location = System::Drawing::Point(79, 91);
			this->txt_Usuario->Name = L"txt_Usuario";
			this->txt_Usuario->Size = System::Drawing::Size(57, 16);
			this->txt_Usuario->TabIndex = 18;
			this->txt_Usuario->Text = L"Usuario:";
			this->txt_Usuario->Click += gcnew System::EventHandler(this, &CalificacionDriver::label5_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(78, 217);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(33, 16);
			this->label4->TabIndex = 4;
			this->label4->Text = L"DNI:";
			// 
			// txtDNI
			// 
			this->txtDNI->Location = System::Drawing::Point(177, 213);
			this->txtDNI->Margin = System::Windows::Forms::Padding(4);
			this->txtDNI->Name = L"txtDNI";
			this->txtDNI->Size = System::Drawing::Size(103, 22);
			this->txtDNI->TabIndex = 13;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->N, this->Username,
					this->Nombre, this->Apellido, this->calificacion
			});
			this->dataGridView1->Location = System::Drawing::Point(6, 312);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(646, 217);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CalificacionDriver::dataGridView1_CellClick);
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CalificacionDriver::dataGridView1_CellContentClick);
			// 
			// N
			// 
			this->N->HeaderText = L"N° DNI";
			this->N->MinimumWidth = 6;
			this->N->Name = L"N";
			this->N->Width = 125;
			// 
			// Username
			// 
			this->Username->HeaderText = L"Nombre de Usuario";
			this->Username->MinimumWidth = 6;
			this->Username->Name = L"Username";
			this->Username->Width = 120;
			// 
			// Nombre
			// 
			this->Nombre->HeaderText = L"Nombre";
			this->Nombre->MinimumWidth = 6;
			this->Nombre->Name = L"Nombre";
			this->Nombre->Width = 125;
			// 
			// Apellido
			// 
			this->Apellido->HeaderText = L"Apellido";
			this->Apellido->MinimumWidth = 6;
			this->Apellido->Name = L"Apellido";
			this->Apellido->Width = 125;
			// 
			// calificacion
			// 
			this->calificacion->HeaderText = L"Calificación";
			this->calificacion->MinimumWidth = 6;
			this->calificacion->Name = L"calificacion";
			this->calificacion->Width = 120;
			// 
			// CalificacionDriver
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(664, 540);
			this->Controls->Add(this->txt_Usuario);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txtApellido);
			this->Controls->Add(this->txtCalificacion);
			this->Controls->Add(this->txtDNI);
			this->Controls->Add(this->txtNombre);
			this->Controls->Add(this->PhotoPasajero);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"CalificacionDriver";
			this->Text = L"Formulario de calificación del conductor";
			this->Load += gcnew System::EventHandler(this, &CalificacionDriver::CalificacionDriver_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PhotoPasajero))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
			public:
				void ShowPasajeros() {

					List<Passenger^>^ mList = User->viaje->PassengersTotal;
					if (mList != nullptr) {
						dataGridView1->Rows->Clear();
						for (int i = 0; i < mList->Count; i++) {
							dataGridView1->Rows->Add(gcnew array<String^> {"" + mList[i]->DNI, mList[i]->Username, mList[i]->Name,
								mList[i]->LastName, Convert::ToString(mList[i]->Qualification) });

						}
					}

				}

				void ClearControls() {
					for each (Control ^ control in this->Controls) {
						if (control->GetType() == TextBox::typeid) {
							dynamic_cast<TextBox^>(control)->Text = "";
						}
					}
				}

	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) { // AQUI SE REALIZA LA CALIFICACION


	
	if (txt_Usuario->Text != "") {

		Passenger^ p_actualizar = Service::QueryPassengerbyUsername(txt_Usuario->Text);
		int calificacion = (p_actualizar->Qualification + Convert::ToInt32(txtCalificacion->Text) )/2;
		p_actualizar->Qualification = calificacion;
		Service::UpdatePassenger(p_actualizar);
		MessageBox::Show("Se ha modificado la calificación");
	}
	else {
		MessageBox::Show("Debe elegir un usuario ");
	}
	


}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	principal->Show();
	this->Close();
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {


	String^ pas = dataGridView1->Rows[dataGridView1->SelectedCells[0]->RowIndex]->Cells[1]->Value->ToString();
	Passenger^ p = Service::QueryPassengerbyUsername(pas);

		//---------------------------------------------------------------------------------
	txtDNI->Text = p->DNI;
	txt_Usuario->Text = p->Username;
	txtNombre->Text = p->Name;
	txtApellido->Text = p->LastName;
	txtCalificacion->Text = Convert::ToString( p->Qualification);
	//Codigoo para establecer la imagene en el form
	if (p->Photo != nullptr && p->Photo->Length > 0) {
		// Convertir el array<Byte>^ en una imagen
		System::IO::MemoryStream^ memoryStream = gcnew System::IO::MemoryStream(p->Photo);
		try {

			PhotoPasajero->Image = System::Drawing::Image::FromStream(memoryStream);
		}
		catch (System::Exception^ ex) {
			MessageBox::Show("Error al cargar la imagen: " + ex->Message);
		}
		finally {
			delete memoryStream; // Liberar recursos
		}
	}
	else {
		PhotoPasajero->Image = nullptr; // Opcional: Establecer imagen predeterminada
		
	}
	//**********************************************************

}
private: System::Void CalificacionDriver_Load(System::Object^ sender, System::EventArgs^ e) {
	ShowPasajeros();
}
};
}
