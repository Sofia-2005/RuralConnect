
#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Xml::Serialization;

using namespace System::Data::SqlClient;

using namespace RuralConnect;



namespace RCPersistance {
	public ref class Persistance

	{
	public:
		// BASE DE DATOSSSSSSSSSSSS
		static SqlConnection^ GetConnection();


		static void AddPassenger(Passenger^ robot);
		static List<Passenger^>^ QueryAllPassengers();
		static void UpdatePassenger(Passenger^ robot);
		static void DeletePassenger(String^ UserNAme);
		static Passenger^ QueryPassengerByUserName(String^ Passsenger_username);

		static void AddUser(User^ robot);
		static List<User^>^ QueryAllUsers();
		static void UpdateUser(User^ robot);
		static void DeleteUser(String^ UserNAme);
		static User^ QueryUserByUserName(String^ User_username);

		static void AddClaim(Claim^ robot);
		static List<Claim^>^ QueryAllClaims();
		static void UpdateClaim(Claim^ robot);
		static void DeleteClaim(String^ UserNAme);
		static Claim^ QueryClaimByUserName(String^ User_username);

		static void AddPSolicitud(Solicitud^ robot);
		static List<Solicitud^>^ QueryAllSolicitudes();
		static void UpdateSolicitud(Solicitud^ robot);
		static void DeleteSolicitud(String^ UserNAme);
		static Solicitud^ QuerySolicitudByUserName(String^ Passsenger_username);

		static void AddPTrip(Trip^ robot);
		static List<Trip^>^ QueryAllTrips();
		static void UpdateTrip(Trip^ robot);
		static void DeleteTrip(String^ UserNAme);
		static Trip^ QueryTripByUserName(String^ Passsenger_username);



		// BASE DE DATOSSSSSSSSSSSS


		static void PersistXMLFile(String^ fileName, Object^ persistObject);
		static Object^ LoadBinaryFile(String^ fileName);


		static void PersistBinaryFile(String^ fileName, Object^ persistObject);
		static Object^ LoadPassengersXmlFile(String^ fileName);


		static void Persist_RUTA_XMLFile(String^ fileName, Object^ persistObject);
		static Object^ Load_RUTA_XmlFile(String^ fileName);


		static void PersistDriversFile(String^ fileName, Object^ persistObject);
		static Object^ LoadDriversXmlFile(String^ fileName);

		static void Persist_Ruta_Fija_XML_File(String^ fileName, Object^ persistObject);
		static Object^ Load_Ruta_Fija_XML_File(String^ fileName);

		static void Persist_Driver_XML_File(String^ fileName, Object^ persistObject);
		static Object^ Load_Driver_XML_File(String^ fileName);

		static void Persist_Passenger_XML_File(String^ fileName, Object^ persistObject);
		static Object^ Load_Passenger_XML_File(String^ fileName);

		static void Persist_Claim_XML_File(String^ fileName, Object^ persistObject);
		static Object^ Load_Claim_XML_File(String^ fileName);

	};
}
