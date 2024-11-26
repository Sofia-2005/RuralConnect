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
	public:
		Form^ principal;
		CalificacionDriver(Driver^ d, Form^ pp)
		{
			InitializeComponent();
			User = d;
			principal = pp;
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~CalificacionDriver()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;




	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ txtCantPersona;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ N;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Apellido;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ calificacion;
	protected:





	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->N = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Apellido = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->calificacion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->txtCantPersona = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->N, this->Nombre,
					this->Apellido, this->calificacion
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 311);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(533, 217);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CalificacionDriver::dataGridView1_CellContentClick);
			// 
			// N
			// 
			this->N->HeaderText = L"N� DNI";
			this->N->MinimumWidth = 6;
			this->N->Name = L"N";
			this->N->Width = 130;
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
			this->calificacion->HeaderText = L"Calificacion";
			this->calificacion->MinimumWidth = 6;
			this->calificacion->Name = L"calificacion";
			this->calificacion->Width = 125;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(66, 65);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Nombre";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(66, 113);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Apellido";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(47, 203);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 16);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Calificacion";
			this->label3->Click += gcnew System::EventHandler(this, &CalificacionDriver::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(66, 156);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(30, 16);
			this->label4->TabIndex = 4;
			this->label4->Text = L"DNI";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(336, 65);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(158, 194);
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &CalificacionDriver::pictureBox1_Click);
			// 
			// txtCantPersona
			// 
			this->txtCantPersona->Location = System::Drawing::Point(143, 59);
			this->txtCantPersona->Margin = System::Windows::Forms::Padding(4);
			this->txtCantPersona->Name = L"txtCantPersona";
			this->txtCantPersona->Size = System::Drawing::Size(103, 22);
			this->txtCantPersona->TabIndex = 12;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(143, 153);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(103, 22);
			this->textBox1->TabIndex = 13;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(143, 197);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(103, 22);
			this->textBox2->TabIndex = 14;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(143, 107);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(103, 22);
			this->textBox3->TabIndex = 15;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(101, 244);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(166, 34);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Modificar calificai�n";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CalificacionDriver::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->button2->Location = System::Drawing::Point(27, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(78, 25);
			this->button2->TabIndex = 17;
			this->button2->Text = L"Terminar";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &CalificacionDriver::button2_Click);
			// 
			// CalificacionDriver
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(555, 540);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->txtCantPersona);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"CalificacionDriver";
			this->Text = L"CalificacionDriver";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
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
							dataGridView1->Rows->Add(gcnew array<String^> {"" + Convert::ToString(i + 1), mList[i]->Name,
								mList[i]->LastName});

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
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	principal->Show();
	this->Close();
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}