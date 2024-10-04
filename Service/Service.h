#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace RuralConnect;
//using namespace RuralPersistance;

namespace RuralService {
	public ref class Service
	{
	public:
		static String^ TXT_PASSENGER_FILE = "passengers.txt";
	public:
		static List<Passenger^>^ PassengerList = gcnew List<Passenger^>();
		static List<Driver^>^ DriverList = gcnew List<Driver^>();

	public:
		static int ShowListCount();
		static void AddDriver(Driver^);
		static void AddPassenger(Passenger^);
		//Operaciones CRUD (Create, Request, Update, Delete) se utilizan para los mantenimientos de las entidades del sistema
		static void UpdatePassenger(Passenger^);
		static void DeletePassenger(String^ username);
		static List<Passenger^>^ QueryAllPassengers();
		static Passenger^ QueryPassengerbyUsername(String^ username);

		static void UpdateDriver(Driver^);
		static void DeleteDriver(String^ username);
		static List<Driver^>^ QueryAllDrivers();
		static Driver^ QueryDriverbyUsername(String^ username);

		static int QueryDriverPassengerbyUsername(String^ username, String^ password);
	};
}