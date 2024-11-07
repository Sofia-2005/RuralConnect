
#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Xml::Serialization;




namespace RCPersistance {
	public ref class Persistance

	{
	public:
		
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
