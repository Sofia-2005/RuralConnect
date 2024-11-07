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
	/// Summary for driversReportForm
	/// </summary>
	public ref class driversReportForm : public System::Windows::Forms::Form
	{
	public:
		driversReportForm(void)
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
		~driversReportForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ GeneralReportChart;
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
			this->GeneralReportChart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GeneralReportChart))->BeginInit();
			this->SuspendLayout();
			// 
			// GeneralReportChart
			// 
			chartArea1->Name = L"ChartArea1";
			this->GeneralReportChart->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->GeneralReportChart->Legends->Add(legend1);
			this->GeneralReportChart->Location = System::Drawing::Point(12, 65);
			this->GeneralReportChart->Name = L"GeneralReportChart";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Cantidad de viajes completados";
			this->GeneralReportChart->Series->Add(series1);
			this->GeneralReportChart->Size = System::Drawing::Size(676, 427);
			this->GeneralReportChart->TabIndex = 0;
			this->GeneralReportChart->Text = L"chart1";
			// 
			// driversReportForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(735, 557);
			this->Controls->Add(this->GeneralReportChart);
			this->Name = L"driversReportForm";
			this->Text = L"Reporte de viajes completados";
			this->Load += gcnew System::EventHandler(this, &driversReportForm::driversReportForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GeneralReportChart))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void driversReportForm_Load(System::Object^ sender, System::EventArgs^ e) {
		List<Driver^>^ driversList = Service::QueryAllDrivers();
		Random^ rnd = gcnew Random();
		for (int i = 0; i < driversList->Count; i++) {
			driversList[i]->NumberOfCompletedTrips = rnd->Next(5, 50);
			GeneralReportChart->Series["Cantidad de viajes completados"]->Points->Add(driversList[i]->NumberOfCompletedTrips);
			GeneralReportChart->Series["Cantidad de viajes completados"]->Points[i]->AxisLabel = " " + driversList[i]->Username + "\n" +
				driversList[i]->DNI;
			GeneralReportChart->Series["Cantidad de viajes completados"]->Points[i]->Label = "Viajes: " + driversList[i]->NumberOfCompletedTrips;
		}

	}
	};
}
