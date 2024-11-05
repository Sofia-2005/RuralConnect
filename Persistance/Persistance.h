#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Xml::Serialization;
using namespace RuralConnect;


namespace RCPersistance {
	public ref class Persistance

	{
	public:
		// TODO: Agregue aquí los métodos de esta clase.
		//static void PersistTextFile(String^ fileName, Object^ persistObject);
		static void PersistXMLFile(String^ fileName, Object^ persistObject);
		static void PersistBinaryFile(String^ fileName, Object^ persistObject);
		//static Object^ LoadRobotWaitersTextFile(String^ fileName);
		static Object^ LoadPassengersXmlFile(String^ fileName);
		static Object^ LoadBinaryFile(String^ fileName);

		static void Persist_RUTA_XMLFile(String^ fileName, Object^ persistObject);
		static Object^ Load_RUTA_XmlFile(String^ fileName);

		static void PersistDriversFile(String^ fileName, Object^ persistObject);
		static Object^ LoadDriversXmlFile(String^ fileName);


	};
}
