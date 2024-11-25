#pragma once


namespace GUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Collections::Generic;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace RuralConnect;
	using namespace RuralService;

	/// <summary>
	/// Resumen de ReportPasajerosAbordo
	/// </summary>
	public ref class ReportPasajerosAbordo : public System::Windows::Forms::Form
	{
	public:
		Driver^ User;


	public:

		ReportPasajerosAbordo(Driver^ user)
		{
			InitializeComponent();
			this->User = user;
			
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ReportPasajerosAbordo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;




	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Apellido;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Phone;
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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Apellido = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Phone = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Id, this->Nombre,
					this->Apellido, this->Phone
			});
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ActiveBorder;
			this->dataGridView1->Location = System::Drawing::Point(3, 107);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(553, 111);
			this->dataGridView1->TabIndex = 18;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ReportPasajerosAbordo::dataGridView1_CellClick);
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ReportPasajerosAbordo::dataGridView1_CellContentClick);
			// 
			// Id
			// 
			this->Id->HeaderText = L"Id";
			this->Id->MinimumWidth = 6;
			this->Id->Name = L"Id";
			this->Id->Width = 50;
			// 
			// Nombre
			// 
			this->Nombre->HeaderText = L"Nombre";
			this->Nombre->MinimumWidth = 6;
			this->Nombre->Name = L"Nombre";
			this->Nombre->Width = 150;
			// 
			// Apellido
			// 
			this->Apellido->HeaderText = L"Apellido";
			this->Apellido->MinimumWidth = 6;
			this->Apellido->Name = L"Apellido";
			this->Apellido->Width = 150;
			// 
			// Phone
			// 
			this->Phone->HeaderText = L"Phone";
			this->Phone->MinimumWidth = 6;
			this->Phone->Name = L"Phone";
			this->Phone->Width = 145;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cooper Black", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(32, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(420, 23);
			this->label1->TabIndex = 19;
			this->label1->Text = L"Lista de pasajeros abordo en el AutoBus:";
			this->label1->Click += gcnew System::EventHandler(this, &ReportPasajerosAbordo::label1_Click);
			// 
			// ReportPasajerosAbordo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(571, 442);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"ReportPasajerosAbordo";
			this->Text = L"ReportPasajerosAbordo";
			this->Load += gcnew System::EventHandler(this, &ReportPasajerosAbordo::ReportPasajerosAbordo_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
		void ShowPasajeros() {
			
			List<Passenger^>^ mList = User->viaje->Passengers;
			if (mList != nullptr) {
				dataGridView1->Rows->Clear();
				for (int i = 0; i < mList->Count; i++) {
					dataGridView1->Rows->Add(gcnew array<String^> {"" + Convert::ToString(i+1), mList[i]->Name,
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

	private: System::Void ReportPasajerosAbordo_Load(System::Object^ sender, System::EventArgs^ e) {
		ShowPasajeros();
	}
	private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
