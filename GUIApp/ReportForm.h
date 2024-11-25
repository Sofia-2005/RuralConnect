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
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ AmountOfCompletedTripsByDriverChart;
	protected:

	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ DriverEarningChart;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ TotalAmountReportChart;


	private: System::Windows::Forms::DataVisualization::Charting::Chart^ AmountOfPassengersPerTripChart;
	private: System::Windows::Forms::Label^ label4;




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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->AmountOfCompletedTripsByDriverChart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->DriverEarningChart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->TotalAmountReportChart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->AmountOfPassengersPerTripChart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AmountOfCompletedTripsByDriverChart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DriverEarningChart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TotalAmountReportChart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AmountOfPassengersPerTripChart))->BeginInit();
			this->SuspendLayout();
			// 
			// AmountOfCompletedTripsByDriverChart
			// 
			chartArea1->Name = L"ChartArea1";
			this->AmountOfCompletedTripsByDriverChart->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->AmountOfCompletedTripsByDriverChart->Legends->Add(legend1);
			this->AmountOfCompletedTripsByDriverChart->Location = System::Drawing::Point(765, 41);
			this->AmountOfCompletedTripsByDriverChart->Name = L"AmountOfCompletedTripsByDriverChart";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Cantidad de viajes completados por conductor";
			this->AmountOfCompletedTripsByDriverChart->Series->Add(series1);
			this->AmountOfCompletedTripsByDriverChart->Size = System::Drawing::Size(518, 337);
			this->AmountOfCompletedTripsByDriverChart->TabIndex = 0;
			this->AmountOfCompletedTripsByDriverChart->Text = L"chart1";
			this->AmountOfCompletedTripsByDriverChart->Click += gcnew System::EventHandler(this, &ReportForm::ReportForm_Load);
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
			this->label2->Location = System::Drawing::Point(180, 431);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(322, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Reporte de la cantidad total de personas registradas";
			// 
			// DriverEarningChart
			// 
			chartArea2->Name = L"ChartArea1";
			this->DriverEarningChart->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->DriverEarningChart->Legends->Add(legend2);
			this->DriverEarningChart->Location = System::Drawing::Point(765, 450);
			this->DriverEarningChart->Name = L"DriverEarningChart";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Ganancias por conductor";
			series2->YValuesPerPoint = 2;
			this->DriverEarningChart->Series->Add(series2);
			this->DriverEarningChart->Size = System::Drawing::Size(518, 337);
			this->DriverEarningChart->TabIndex = 3;
			this->DriverEarningChart->Text = L"chart1";
			//this->DriverEarningChart->Click += gcnew System::EventHandler(this, &ReportForm::TotalAmountReportChart_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(889, 431);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(245, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Reporte sobre ganancias por conductor";
			//this->label3->Click += gcnew System::EventHandler(this, &ReportForm::label3_Click);
			// 
			// TotalAmountReportChart
			// 
			chartArea3->Name = L"ChartArea1";
			this->TotalAmountReportChart->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->TotalAmountReportChart->Legends->Add(legend3);
			this->TotalAmountReportChart->Location = System::Drawing::Point(80, 450);
			this->TotalAmountReportChart->Name = L"TotalAmountReportChart";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series3->Legend = L"Legend1";
			series3->Name = L"DriverEarnings";
			this->TotalAmountReportChart->Series->Add(series3);
			this->TotalAmountReportChart->Size = System::Drawing::Size(518, 337);
			this->TotalAmountReportChart->TabIndex = 5;
			this->TotalAmountReportChart->Text = L"chart1";
			// 
			// AmountOfPassengersPerTripChart
			// 
			chartArea4->Name = L"ChartArea1";
			this->AmountOfPassengersPerTripChart->ChartAreas->Add(chartArea4);
			legend4->Name = L"Legend1";
			this->AmountOfPassengersPerTripChart->Legends->Add(legend4);
			this->AmountOfPassengersPerTripChart->Location = System::Drawing::Point(80, 41);
			this->AmountOfPassengersPerTripChart->Name = L"AmountOfPassengersPerTripChart";
			series4->ChartArea = L"ChartArea1";
			series4->Legend = L"Legend1";
			series4->Name = L"Cantidad de pasajeros por viaje";
			this->AmountOfPassengersPerTripChart->Series->Add(series4);
			this->AmountOfPassengersPerTripChart->Size = System::Drawing::Size(518, 337);
			this->AmountOfPassengersPerTripChart->TabIndex = 6;
			this->AmountOfPassengersPerTripChart->Text = L"chart1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(180, 22);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(268, 16);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Reporte de cantidad de pasajeros por viaje";
			// 
			// ReportForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1348, 834);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->AmountOfPassengersPerTripChart);
			this->Controls->Add(this->TotalAmountReportChart);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->DriverEarningChart);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->AmountOfCompletedTripsByDriverChart);
			this->Name = L"ReportForm";
			this->Text = L"Reportes ";
			this->Load += gcnew System::EventHandler(this, &ReportForm::ReportForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AmountOfCompletedTripsByDriverChart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DriverEarningChart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TotalAmountReportChart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AmountOfPassengersPerTripChart))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ReportForm_Load(System::Object^ sender, System::EventArgs^ e) {
		
		//GRÁFICO DE BARRAS SOBRE LA CANTIDAD DE VIAJES COMPLETADOS POR CONDUCTOR
		/*List<Driver^>^ driversList = Service::QueryAllDrivers();

		Random^ rnd = gcnew Random();

		GeneralReportChart->Series["Cantidad de viajes completados"]->Points->Clear();
		for (int i = 0; i < driversList->Count; i++) {
			driversList[i]->NumberOfCompletedTrips = rnd->Next(5, 50);
			GeneralReportChart->Series["Cantidad de viajes completados"]->Points->Add(driversList[i]->NumberOfCompletedTrips);
			GeneralReportChart->Series["Cantidad de viajes completados"]->Points[i]->AxisLabel = " " + driversList[i]->Username + "\n" +
				driversList[i]->DNI;
			GeneralReportChart->Series["Cantidad de viajes completados"]->Points[i]->Label = "Viajes: " + driversList[i]->NumberOfCompletedTrips;
		}*/

		List<Driver^>^ AmountOfTripsList = Service::QueryAllDrivers();
		for (int i = 0; i < AmountOfTripsList->Count; i++) {
			AmountOfCompletedTripsByDriverChart->Series["Cantidad de viajes completados"]->Points->Add(AmountOfTripsList[i]->NumberOfCompletedTrips);
			AmountOfCompletedTripsByDriverChart->Series["Cantidad de viajes completados"]->Points[i]->AxisLabel = "Viajes completados \n" + AmountOfTripsList[i]->Name + "\n" + AmountOfTripsList[i]->LastName;
			AmountOfCompletedTripsByDriverChart->Series["Cantidad de viajes completados"]->Points[i]->Label = " " + AmountOfTripsList[i]->NumberOfCompletedTrips;
		}

		//GRÁFICO DE BARRAS PARA LA CANTIDAD DE PASAJEROS POR VIAJE
		/*List<Passenger^>^ passengersList = Service::QueryAllPassengers();

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
		TotalAmountReportChart->Series["Cantidad de usuarios"]->Points[1]->Label = "Cantidad: " + numPassengers;*/
		List<Driver^>^ passengersList = Service::QueryAllDrivers();
		AmountOfPassengersPerTripChart->Series["Cantidad de pasajeros"]->Points->Clear();
		for (int i = 0; i < passengersList->Count; i++) {
			if (passengersList[i]->viaje != nullptr) {
				int totalPassengers = passengersList[i]->viaje->Passengers->Count;
				AmountOfPassengersPerTripChart->Series["Cantidad de pasajeros"]->Points->Add(totalPassengers);
				AmountOfPassengersPerTripChart->Series["Cantidad de pasajeros"]->Points[i]->AxisLabel = passengersList[i]->Name + " " + passengersList[i]->LastName;
				AmountOfPassengersPerTripChart->Series["Cantidad de pasajeros"]->Points[i]->Label = "Total pasajeros: " + totalPassengers;
			}
			else {
				AmountOfPassengersPerTripChart->Series["Cantidad de pasajeros"]->Points->Add(0);
				AmountOfPassengersPerTripChart->Series["Cantidad de pasajeros"]->Points[i]->AxisLabel = passengersList[i]->Name + " " + passengersList[i]->LastName;
				AmountOfPassengersPerTripChart->Series["Cantidad de pasajeros"]->Points[i]->Label = "Sin viajes";
			}
		}

		//GRÁFICO DE BARRAS PARA LA GANANCIA POR CONDUCTOR
		List<Driver^>^ driversList = Service::QueryAllDrivers();
		for (int i = 0; i < driversList->Count; i++) {
			AmountOfCompletedTripsByDriverChart->Series["Ganancia obtenida"]->Points->Add(driversList[i]->viaje->EstimatedPrice);
			AmountOfCompletedTripsByDriverChart->Series["Ganancia obtenida"]->Points[i]->AxisLabel = driversList[i]->Name + " " + driversList[i]->LastName;
			AmountOfCompletedTripsByDriverChart->Series["Ganancia obtenida"]->Points[i]->Label = "S/." + driversList[i]->viaje->EstimatedPrice;
		}
		
		//GRÁFICO CIRCULAR PARA LOS USUARIOS DE LA APLICACIÓN
		/*// Definir los niveles de pasajeros
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
		}*/
		array<String^>^ userTypes = { "Conductor", "Pasajero" };
		Dictionary<String^, double>^ AmountOfUsersTypes = Service::QueryUserByUserType();
		for (int i = 0; i < userTypes->Length; i++) {
			TotalAmountReportChart->Series["Cantidad"]->Points->Add(AmountOfUsersTypes[userTypes[i]]);
			TotalAmountReportChart->Series["Ganancia obtenida"]->Points[i]->LegendText = userTypes[i];
			TotalAmountReportChart->Series["Ganancia obtenida"]->Points[i]->Label = "" + AmountOfUsersTypes[userTypes[i]];
		}
	}
};
}
