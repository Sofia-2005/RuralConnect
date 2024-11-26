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

		// USUARIOS ACTUALES -------------------
		Driver^ Conductor_Actual = gcnew Driver();
		Passenger^ Pasajero_Actual = gcnew Passenger();
		// -----------------------------------
		
		static String^ XML_PASSENGER_FILE_NAME = "passengers.xml";
		static String^ XML_DRIVER_FILE_NAME = "driver.xml";

	public:
		static List<Passenger^>^ PassengerList = gcnew List<Passenger^>();
		static List<Driver^>^ DriverList = gcnew List<Driver^>();
		static SerialPort^ ArduinoPort;

		

		static List<double>^ Puntos_rutas_x =  gcnew List<double>();
		static List<double>^ Puntos_rutas_y = gcnew List<double>();

		static List<String^>^ Lista_rutas_x = gcnew List<String^>();
		static List<String^>^ Lista_rutas_y = gcnew List<String^>();
		static List<Claim^>^ Lista_reclamos = gcnew List<Claim^>();

		static String^ XML_RUTA_FILE_NAME = "RUTA.xml";
		static String^ XML_CLAIM_FILE_NAME = "Claim.xml";

	public:  





		static int ShowListCount();


		static void AddDriver(Driver^);
		static void UpdateDriver(Driver^);
		static void DeleteDriver(String^ username);
		static List<Driver^>^ QueryAllDrivers();
		static Driver^ QueryDriverbyUsername(String^ username);
		static Dictionary<String^, double>^ QueryUserByUserType();



		static int QueryDriverPassengerbyUsername(String^ username, String^ password);
		static int PassengerOrDriver(String^ username);


		//PERSISTENCIA PASAJERO
		static void AddPassenger(Passenger^);
		static void UpdatePassenger(Passenger^);
		static void DeletePassenger(String^ username);
		static List<Passenger^>^ QueryAllPassengers();
		static Passenger^ QueryPassengerbyUsername(String^ username);





		
		//PERSISTENCIA PARA LOS RECLAMOS
		static void AddAdvert(Claim^ p );
		//static void DeleteAdvert(String^ username);
		static List<Claim^>^ QueryAllAdvertisements();
				
		//static String^ SendRobotToTable( int robotId, int tableNumber);
		static void ActivateSecurityProtocol();
		static List<String^>^ ReadGPSData();
		static void OpenPort();
		static void ClosePort();



		static List<double>^ De_String_toDouble(String^ listasa);

		static SerialPort^ ArduinoPort_Camera;
		static int SolicitudPersonas(String^ text);
		static void OpenPort_Camera();
		static void ClosePort_Camera();

	};
}