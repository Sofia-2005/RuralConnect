#pragma once

namespace GUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace RuralConnect;
	using namespace RuralService;

	/// <summary>
	/// Summary for ReportForm
	/// </summary>
	public ref class ReportForm : public System::Windows::Forms::Form
	{
	public:
		ReportForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ReportForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ GeneralReportChart;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ TotalAmountReportChart;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ ChartPassengersByLevel;


	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->GeneralReportChart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->TotalAmountReportChart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->ChartPassengersByLevel = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GeneralReportChart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TotalAmountReportChart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ChartPassengersByLevel))->BeginInit();
			this->SuspendLayout();
			// 
			// GeneralReportChart
			// 
			chartArea1->Name = L"ChartArea1";
			this->GeneralReportChart->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->GeneralReportChart->Legends->Add(legend1);
			this->GeneralReportChart->Location = System::Drawing::Point(765, 41);
			this->GeneralReportChart->Name = L"GeneralReportChart";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Cantidad de viajes completados";
			this->GeneralReportChart->Series->Add(series1);
			this->GeneralReportChart->Size = System::Drawing::Size(518, 337);
			this->GeneralReportChart->TabIndex = 0;
			this->GeneralReportChart->Text = L"chart1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(938, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(196, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Reporte de viajes completados";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(179, 22);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(322, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Reporte de la cantidad total de personas registradas";
			// 
			// TotalAmountReportChart
			// 
			chartArea2->Name = L"ChartArea1";
			this->TotalAmountReportChart->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->TotalAmountReportChart->Legends->Add(legend2);
			this->TotalAmountReportChart->Location = System::Drawing::Point(80, 41);
			this->TotalAmountReportChart->Name = L"TotalAmountReportChart";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Cantidad de usuarios";
			series2->YValuesPerPoint = 2;
			this->TotalAmountReportChart->Series->Add(series2);
			this->TotalAmountReportChart->Size = System::Drawing::Size(518, 337);
			this->TotalAmountReportChart->TabIndex = 3;
			this->TotalAmountReportChart->Text = L"chart1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(600, 428);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(223, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Reporte sobre niveles de pasajeros";
			this->label3->Click += gcnew System::EventHandler(this, &ReportForm::label3_Click);
			// 
			// ChartPassengersByLevel
			// 
			chartArea3->Name = L"ChartArea1";
			this->ChartPassengersByLevel->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->ChartPassengersByLevel->Legends->Add(legend3);
			this->ChartPassengersByLevel->Location = System::Drawing::Point(450, 447);
			this->ChartPassengersByLevel->Name = L"ChartPassengersByLevel";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series3->Legend = L"Legend1";
			series3->Name = L"ChartLevelsPassengers";
			this->ChartPassengersByLevel->Series->Add(series3);
			this->ChartPassengersByLevel->Size = System::Drawing::Size(518, 337);
			this->ChartPassengersByLevel->TabIndex = 5;
			this->ChartPassengersByLevel->Text = L"chart1";
			// 
			// ReportForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1348, 834);
			this->Controls->Add(this->ChartPassengersByLevel);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->TotalAmountReportChart);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->GeneralReportChart);
			this->Name = L"ReportForm";
			this->Text = L"Reportes ";
			this->Load += gcnew System::EventHandler(this, &ReportForm::ReportForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GeneralReportChart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TotalAmountReportChart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ChartPassengersByLevel))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ReportForm_Load(System::Object^ sender, System::EventArgs^ e) {
		//GRÁFICO DE BARRAS SOBRE LA CANTIDAD DE VIAJES COMPLETADOS DE LOS CONDUCTORES
		List<Driver^>^ driversList = Service::QueryAllDrivers();

		Random^ rnd = gcnew Random();

		GeneralReportChart->Series["Cantidad de viajes completados"]->Points->Clear();
		for (int i = 0; i < driversList->Count; i++) {
			driversList[i]->NumberOfCompletedTrips = rnd->Next(5, 50);
			GeneralReportChart->Series["Cantidad de viajes completados"]->Points->Add(driversList[i]->NumberOfCompletedTrips);
			GeneralReportChart->Series["Cantidad de viajes completados"]->Points[i]->AxisLabel = " " + driversList[i]->Username + "\n" +
				driversList[i]->DNI;
			GeneralReportChart->Series["Cantidad de viajes completados"]->Points[i]->Label = "Viajes: " + driversList[i]->NumberOfCompletedTrips;
		}

		//GRÁFICO DE BARRAS PARA LA CANTIDAD DE USUARIOS POR PASAJERO Y CONDUCTOR
		List<Passenger^>^ passengersList = Service::QueryAllPassengers();

		//Contamos la cantidad de conductores y pasajeros
		//int numDrivers = driversList->Count;
		//int numPassengers = passengersList->Count;
		int numDrivers = rnd->Next(10, 100);     
		int numPassengers = rnd->Next(10, 100);

		//Agregamos la cantidad de usuarios conductores
		TotalAmountReportChart->Series["Cantidad de usuarios"]->Points->Add(numDrivers);
		TotalAmountReportChart->Series["Cantidad de usuarios"]->Points[0]->AxisLabel = "Conductores";
		TotalAmountReportChart->Series["Cantidad de usuarios"]->Points[0]->Label = "Cantidad: " + numDrivers;

		//Agregamos la cantidad de usuarios pasajeros
		TotalAmountReportChart->Series["Cantidad de usuarios"]->Points->Add(numPassengers);
		TotalAmountReportChart->Series["Cantidad de usuarios"]->Points[1]->AxisLabel = "Pasajeros";
		TotalAmountReportChart->Series["Cantidad de usuarios"]->Points[1]->Label = "Cantidad: " + numPassengers;

		
		//GRÁFICO CIRCULAR
		// Definir los niveles de pasajeros
		array<String^>^ passengerLevels = { "Bronce", "Plata", "Oro", "Diamante" };

		// Crear un diccionario para simular la cantidad de pasajeros por nivel
		Dictionary<String^, int>^ passengersByLevel = gcnew Dictionary<String^, int>();

		// Crear un generador de números aleatorios
		Random^ rand = gcnew Random();

		// Simulación de conteos aleatorios para cada nivel
		for (int i = 0; i < passengerLevels->Length; i++) {
			String^ level = passengerLevels[i];

			// Generar un número aleatorio entre 1 y 100 (puedes ajustar el rango)
			int count = rand->Next(1, 101);  // Por ejemplo, de 1 a 100

			// Almacenar el conteo aleatorio en el diccionario
			passengersByLevel[level] = count;
		}


		// Agregar puntos al gráfico circular con los datos simulados
		for (int i = 0; i < passengerLevels->Length; i++) {
			String^ level = passengerLevels[i];

			// Verificamos si el nivel existe en el diccionario
			if (passengersByLevel->ContainsKey(level)) {
				int count = passengersByLevel[level];

				// Añadir punto en el gráfico para el nivel actual
				ChartPassengersByLevel->Series["ChartLevelsPassengers"]->Points->Add(count);
				ChartPassengersByLevel->Series["ChartLevelsPassengers"]->Points[i]->LegendText = level;
				ChartPassengersByLevel->Series["ChartLevelsPassengers"]->Points[i]->Label = "Cantidad: " + count;
			}
		}
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
