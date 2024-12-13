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
			series1->Name = L"Cantidad de viajes completados";
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
			series2->Name = L"Ganancias obtenidas";
			series2->YValuesPerPoint = 2;
			this->DriverEarningChart->Series->Add(series2);
			this->DriverEarningChart->Size = System::Drawing::Size(518, 337);
			this->DriverEarningChart->TabIndex = 3;
			this->DriverEarningChart->Text = L"chart1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(889, 431);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(245, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Reporte sobre ganancias por conductor";
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
			series3->Name = L"Cantidad";
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
			series4->Name = L"Total de pasajeros";
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
		/*List<Trip^>^ tripList = Service::QueryAllTrips(); //Obtenemos los datos de todos los viajes
		List<String^>^ driverNames = gcnew List<String^>(); //Lista creada para los nombres de los cnoductores
		List<int>^ tripCounts = gcnew List<int>(); //Almacenamiento de viajes realizados por el conductor

		//Recorremos la lista de viajes
		for (int i = 0; i < tripList->Count; i++) {
			String^ driverName = tripList[i]->Driver_Name;

			//Verificación que el conductor está o no en la lista
			bool found = false;
			for (int j = 0; j < driverNames->Count; j++) {
				if (driverNames[j] == driverName) {
					tripCounts[j]++;
					found = true;
					break;
				}
			}

			//En caso el conductor no este en la lista todavía
			if (!found) {
				driverNames->Add(driverName);
				tripCounts->Add(1);
			}
		}

		//Agregamos los datos al gráfico
		for (int i = 0; i < driverNames->Count; i++) {
			AmountOfCompletedTripsByDriverChart->Series["Cantidad de viajes completados"]->Points->Add(tripCounts[i]);
			AmountOfCompletedTripsByDriverChart->Series["Cantidad de viajes completados"]->Points[i]->AxisLabel = "Conductor: \n" + driverNames[i];
			AmountOfCompletedTripsByDriverChart->Series["Cantidad de viajes completados"]->Points[i]->Label = "Viajes completados: " + tripCounts[i];
		}

		//GRÁFICO DE BARRAS PARA LA CANTIDAD DE PASAJEROS POR VIAJE
		List<Trip^>^ passengersList = Service::QueryAllTrips();

		// Crear listas para almacenar nombres de conductores y sus totales de pasajeros
		List<String^>^ Names = gcnew List<String^>();
		List<int>^ totalPassengers = gcnew List<int>();

		for (int i = 0; i < passengersList->Count; i++) {
			String^ driverName = passengersList[i]->Driver_Name;
			int passengerCount = passengersList[i]->PassengersTotal->Count;  // Obtener la cantidad total de pasajeros en el viaje

			// Buscar si el conductor ya está en la lista
			bool found = false;
			for (int j = 0; j < Names->Count; j++) {
				if (Names[j] == driverName) {
					totalPassengers[j] += passengerCount;  // Sumar la cantidad de pasajeros al conductor existente
					found = true;
					break;
				}
			}

			// Si el conductor no está en la lista, agregarlo con su total de pasajeros
			if (!found) {
				Names->Add(driverName);
				totalPassengers->Add(passengerCount);
			}
		}

		// Generar el gráfico
		for (int i = 0; i < Names->Count; i++) {
			AmountOfPassengersPerTripChart->Series["Total de pasajeros"]->Points->Add(totalPassengers[i]);
			AmountOfPassengersPerTripChart->Series["Total de pasajeros"]->Points[i]->AxisLabel = Names[i];
			AmountOfPassengersPerTripChart->Series["Total de pasajeros"]->Points[i]->Label = totalPassengers[i] + " pasajeros";
		}
	
	
		//GRÁFICO DE BARRAS PARA LA GANANCIA POR CONDUCTOR
		List<Trip^>^ earningList = Service::QueryAllTrips(); //Obtenemos los datos de todos los viajes
		List<String^>^ nombres = gcnew List<String^>(); //Lista creada para los nombres de los cnoductores
		List<int>^ totalEarnings = gcnew List<int>(); //Almacenamiento de viajes realizados por el conductor
		//Recorremos la lista de viajes	
		for (int i = 0; i < earningList->Count; i++) {
			String^ driverName = earningList[i]->Driver_Name;
			int earning = earningList[i]->EstimatedPrice;

			//Verificación que el conductor está o no en la lista
			bool found = false;
			for (int j = 0; j < nombres->Count; j++) {
				if (nombres[j] == driverName) {
					totalEarnings[j] += earning;
					found = true;
					break;
				}
			}

			//En caso el conductor no este en la lista todavía
			if (!found) {
				nombres->Add(driverName);
				tripCounts->Add(earning);
			}
		}

		//Agregamos los datos al gráfico
		for (int i = 0; i < driverNames->Count; i++) {
			DriverEarningChart->Series["Ganancias obtenidas"]->Points->Add(totalEarnings[i]);
			DriverEarningChart->Series["Ganancias obtenidas"]->Points[i]->AxisLabel = nombres[i];
			DriverEarningChart->Series["Ganancias obtenidas"]->Points[i]->Label = "S/." + totalEarnings[i];
		}
		
		//GRÁFICO CIRCULAR PARA LOS USUARIOS DE LA APLICACIÓN
		array<String^>^ userTypes = { "Conductor", "Pasajero" };
		Dictionary<String^, double>^ AmountOfUsersTypes = Service::QueryUserByUserType();
		for (int i = 0; i < userTypes->Length; i++) {
			TotalAmountReportChart->Series["Cantidad"]->Points->Add(AmountOfUsersTypes[userTypes[i]]);
			TotalAmountReportChart->Series["Cantidad"]->Points[i]->LegendText = userTypes[i];
			TotalAmountReportChart->Series["Cantidad"]->Points[i]->Label = "" + AmountOfUsersTypes[userTypes[i]];
		}*/

try {
	// GRÁFICO DE BARRAS SOBRE LA CANTIDAD DE VIAJES COMPLETADOS POR CONDUCTOR
	List<Trip^>^ tripList = Service::QueryAllTrips(); // Obtener lista de viajes
	if (tripList == nullptr || tripList->Count == 0) {
		MessageBox::Show("No se encontraron datos de viajes para generar el gráfico.");
		return;
	}

	List<String^>^ driverNames = gcnew List<String^>();
	List<int>^ tripCounts = gcnew List<int>();

	for (int i = 0; i < tripList->Count; i++) {
		String^ driverName = tripList[i]->Driver_Name;
		if (String::IsNullOrEmpty(driverName)) continue;

		bool found = false;
		for (int j = 0; j < driverNames->Count; j++) {
			if (driverNames[j] == driverName) {
				tripCounts[j]++;
				found = true;
				break;
			}
		}

		if (!found) {
			driverNames->Add(driverName);
			tripCounts->Add(1);
		}
	}

	// Agregar datos al gráfico
	AmountOfCompletedTripsByDriverChart->Series["Cantidad de viajes completados"]->Points->Clear();
	for (int i = 0; i < driverNames->Count; i++) {
		auto point = AmountOfCompletedTripsByDriverChart->Series["Cantidad de viajes completados"]->Points->Add(tripCounts[i]);
		point->AxisLabel = driverNames[i];
		point->Label = "Viajes: " + tripCounts[i];
	}

	// GRÁFICO DE BARRAS PARA LA CANTIDAD DE PASAJEROS POR VIAJE
	List<String^>^ Names = gcnew List<String^>();
	List<int>^ totalPassengers = gcnew List<int>();

	for (int i = 0; i < tripList->Count; i++) {
		String^ driverName = tripList[i]->Driver_Name;
		if (String::IsNullOrEmpty(driverName) || tripList[i]->PassengersTotal == nullptr) continue;

		int passengerCount = tripList[i]->PassengersTotal->Count;
		bool found = false;

		for (int j = 0; j < Names->Count; j++) {
			if (Names[j] == driverName) {
				totalPassengers[j] += passengerCount;
				found = true;
				break;
			}
		}

		if (!found) {
			Names->Add(driverName);
			totalPassengers->Add(passengerCount);
		}
	}

	AmountOfPassengersPerTripChart->Series["Total de pasajeros"]->Points->Clear();
	for (int i = 0; i < Names->Count; i++) {
		auto point = AmountOfPassengersPerTripChart->Series["Total de pasajeros"]->Points->Add(totalPassengers[i]);
		point->AxisLabel = Names[i];
		point->Label = totalPassengers[i] + " pasajeros";
	}

	// GRÁFICO DE BARRAS PARA LA GANANCIA POR CONDUCTOR
	List<String^>^ nombres = gcnew List<String^>();
	List<int>^ totalEarnings = gcnew List<int>();

	for (int i = 0; i < tripList->Count; i++) {
		String^ driverName = tripList[i]->Driver_Name;
		if (String::IsNullOrEmpty(driverName)) continue;

		int earning = tripList[i]->EstimatedPrice;
		bool found = false;

		for (int j = 0; j < nombres->Count; j++) {
			if (nombres[j] == driverName) {
				totalEarnings[j] += earning;
				found = true;
				break;
			}
		}

		if (!found) {
			nombres->Add(driverName);
			totalEarnings->Add(earning);
		}
	}

	DriverEarningChart->Series["Ganancias obtenidas"]->Points->Clear();
	for (int i = 0; i < nombres->Count; i++) {
		auto point = DriverEarningChart->Series["Ganancias obtenidas"]->Points->Add(totalEarnings[i]);
		point->AxisLabel = nombres[i];
		point->Label = "S/. " + totalEarnings[i];
	}

	// GRÁFICO CIRCULAR PARA LOS USUARIOS DE LA APLICACIÓN
	array<String^>^ userTypes = { "Conductor", "Pasajero" };
	Dictionary<String^, double>^ AmountOfUsersTypes = Service::QueryUserByUserType();

	if (AmountOfUsersTypes == nullptr || AmountOfUsersTypes->Count == 0) {
		MessageBox::Show("No se encontraron datos de usuarios para generar el gráfico.");
		return;
	}

	TotalAmountReportChart->Series["Cantidad"]->Points->Clear();
	for (int i = 0; i < userTypes->Length; i++) {
		if (!AmountOfUsersTypes->ContainsKey(userTypes[i])) continue;

		auto point = TotalAmountReportChart->Series["Cantidad"]->Points->Add(AmountOfUsersTypes[userTypes[i]]);
		point->LegendText = userTypes[i];
		point->Label = AmountOfUsersTypes[userTypes[i]].ToString();
	}
}
catch (Exception^ ex) {
	MessageBox::Show("Error: " + ex->Message);
}

	}
};
}
