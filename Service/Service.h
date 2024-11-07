#pragma once

using namespace System;
//using namespace System::IO;
using namespace System::Collections::Generic;
using namespace RuralConnect;
using namespace RCPersistance;
//using namespace RuralPersistance;
using namespace System::IO::Ports;


namespace RuralService {
	public ref class Service
	{
	public:
		//static String^ XML_PASSENGER_FILE_NAME = "passengers.xml";


		static String^ XML_PASSENGER_FILE_NAME = "passengers.xml";
		static String^ XML_DRIVER_FILE_NAME = "driver.xml";
	public:
		static List<Passenger^>^ PassengerList = gcnew List<Passenger^>();
		static List<Driver^>^ DriverList = gcnew List<Driver^>();
		static SerialPort^ ArduinoPort;

		static Driver^ Conductor_actual;
		static Passenger^ PasajeroActual;

		static List<double>^ Puntos_rutas_x =  gcnew List<double>();
		static List<double>^ Puntos_rutas_y = gcnew List<double>();

		static List<String^>^ Lista_rutas_x = gcnew List<String^>();
		static List<String^>^ Lista_rutas_y = gcnew List<String^>();

		static String^ XML_RUTA_FILE_NAME = "RUTA.xml";

	public:





		static int ShowListCount();


		static void AddDriver(Driver^);
		static void UpdateDriver(Driver^);
		static void DeleteDriver(String^ username);
		static List<Driver^>^ QueryAllDrivers();
		static Driver^ QueryDriverbyUsername(String^ username);

		static int QueryDriverPassengerbyUsername(String^ username, String^ password);
		static int PassengerOrDriver(String^ username);



		static void AddPassenger(Passenger^);
		static void UpdatePassenger(Passenger^);
		static void DeletePassenger(String^ username);
		static List<Passenger^>^ QueryAllPassengers();
		static Passenger^ QueryPassengerbyUsername(String^ username);




		

		

		//static String^ SendRobotToTable( int robotId, int tableNumber);
		static void ActivateSecurityProtocol();
		static List<String^>^ ReadGPSData();
		static void OpenPort();
		static void ClosePort();

		/*static void Add_Rute(List<String^>^ ruta_x);
		static List<String^>^ load_Rute(); */

		static List<double>^ De_String_toDouble(String^ listasa);
	};
}