#include "pch.h"

#include "Service.h"
#include "DuplicatedUsernameException.h"
#include "DoesNotExistUsernameException.h"
using namespace System::IO;


int RuralService::Service::ShowListCount()
{
    return PassengerList->Count;
}
void RuralService::Service::AddDriver(Driver^ driver)
{
    for each (Driver ^ k in DriverList) {
        if (k->Username->Equals(driver->Username))
            throw gcnew DuplicatedUsernameException("El usuario ya existe en la base de datos.");
    }
    for each (Passenger ^ k in PassengerList) {
        if (k->Username->Equals(driver->Username))
            throw gcnew DuplicatedUsernameException("El usuario ya existe en la base de datos.");
    }
    DriverList = Service::QueryAllDrivers();
    DriverList->Add(driver);
    Persistance::Persist_Driver_XML_File(XML_DRIVER_FILE_NAME, DriverList);

}
void RuralService::Service::AddPassenger(Passenger^ passenger)
{

    for each (Passenger^ k in PassengerList) {
        if (k->Username->Equals(passenger->Username))
            throw gcnew DuplicatedUsernameException("El usuario ya existe en la base de datos.");
    }
    for each (Driver ^ k in DriverList) {
        if (k->Username->Equals(passenger->Username))
            throw gcnew DuplicatedUsernameException("El usuario ya existe en la base de datos.");
    }
    PassengerList = Service::QueryAllPassengers();
    PassengerList->Add(passenger);
    //Persistance::PersistXMLFile(XML_PASSENGER_FILE_NAME, PassengerList);
    Persistance::Persist_Passenger_XML_File(XML_PASSENGER_FILE_NAME, PassengerList);
}

void RuralService::Service::UpdatePassenger(Passenger^ p)
{
    for (int i = 0; i < PassengerList->Count; i++) {
        if (PassengerList[i]->Username == p->Username) {
            PassengerList[i] = p;
            //Persistance::PersistXMLFile(XML_PASSENGER_FILE_NAME, PassengerList);
            Persistance::Persist_Passenger_XML_File(XML_PASSENGER_FILE_NAME, PassengerList);
            return;
        }
    }
    throw gcnew DoesNotExistUsernameException("El usuario no existe en la base de datos.");
}

void RuralService::Service::DeletePassenger(String^ username)
{
    for (int i = 0; i < PassengerList->Count; i++) {
        if (PassengerList[i]->Username == username) {
            PassengerList->RemoveAt(i);
            
            //Persistance::PersistXMLFile(XML_PASSENGER_FILE_NAME, PassengerList);
            Persistance::Persist_Passenger_XML_File(XML_PASSENGER_FILE_NAME, PassengerList);
            return;
        }
    }
    throw gcnew DoesNotExistUsernameException("El usuario no existe en la base de datos.");
}

List<Passenger^>^ RuralService::Service::QueryAllPassengers()
{
    PassengerList = gcnew List<Passenger^>();
    try {
        //robotsList = (List<RobotWaiter^>^)Persistance::LoadRobotWaitersTextFile(TXT_ROBOT_FILE_NAME);
        //PassengerList = (List<Passenger^>^)Persistance::LoadPassengersXmlFile(XML_PASSENGER_FILE_NAME);
        PassengerList = (List<Passenger^>^)Persistance::Load_Passenger_XML_File(XML_PASSENGER_FILE_NAME);
        if(PassengerList == nullptr)
            PassengerList = gcnew List<Passenger^>();
    }
    catch (FileNotFoundException^ ex) {
    }
    return PassengerList;
}

void RuralService::Service::AddAdvert(Claim^ p)
{
    Lista_reclamos = Service::QueryAllAdvertisements();
    Lista_reclamos->Add(p);
    Persistance::Persist_Claim_XML_File(XML_CLAIM_FILE_NAME, Lista_reclamos);
}

List<Claim^>^ RuralService::Service::QueryAllAdvertisements()
{

    //////
    Lista_reclamos = gcnew List<Claim^>();
    try {
        //robotsList = (List<RobotWaiter^>^)Persistance::LoadRobotWaitersTextFile(TXT_ROBOT_FILE_NAME);
        //PassengerList = (List<Passenger^>^)Persistance::LoadPassengersXmlFile(XML_PASSENGER_FILE_NAME);
        Lista_reclamos = (List<Claim^>^)Persistance::Load_Claim_XML_File(XML_CLAIM_FILE_NAME);
        if (Lista_reclamos == nullptr)
            Lista_reclamos = gcnew List<Claim^>();
    }
    catch (FileNotFoundException^ ex) {
    }
    return Lista_reclamos;
    ///
}


Passenger^ RuralService::Service::QueryPassengerbyUsername(String^ username)
{
    for (int i = 0; i < PassengerList->Count; i++) {
        if (PassengerList[i]->Username == username) {
            return PassengerList[i];
        }
    }
    throw gcnew DoesNotExistUsernameException("El usuario no existe en la base de datos.");
}

void RuralService::Service::UpdateDriver(Driver^ p)
{
    DriverList = QueryAllDrivers();
    for (int i = 0; i < DriverList->Count; i++) {
        
        if (DriverList[i]->Username == p->Username) {
            DriverList[i] = p;
            Persistance::Persist_Driver_XML_File(XML_DRIVER_FILE_NAME, DriverList);
            return;
        }
    }
    throw gcnew DoesNotExistUsernameException("El usuario no existe en la base de datos.");
}

void RuralService::Service::DeleteDriver(String^ username)
{
    for (int i = 0; i < DriverList->Count; i++) {
        if (DriverList[i]->Username == username) {
            DriverList->RemoveAt(i);
            Persistance::Persist_Driver_XML_File(XML_DRIVER_FILE_NAME, DriverList);
            return;
        }
    }
    throw gcnew DoesNotExistUsernameException("El usuario no existe en la base de datos.");
}

List<Driver^>^ RuralService::Service::QueryAllDrivers()
{
    List<Driver^>^ lista_conduc = gcnew List<Driver^>();
    try {
        
        lista_conduc = (List<Driver^>^)Persistance::Load_Driver_XML_File(XML_DRIVER_FILE_NAME);
        if (lista_conduc == nullptr)
            lista_conduc = gcnew List<Driver^>();
    }
    catch (FileNotFoundException^ ex) {
        throw ex;
    }
   
    return lista_conduc;
    
}

Driver^ RuralService::Service::QueryDriverbyUsername(String^ username)
{
    DriverList = QueryAllDrivers();
    for (int i = 0; i < DriverList->Count; i++) {
        if (DriverList[i]->Username == username) {
            
            return DriverList[i];
        }
    }
    throw gcnew DoesNotExistUsernameException("El usuario no existe en la base de datos.");
}

int RuralService::Service::QueryDriverPassengerbyUsername(String^ username, String^ password)
{
    DriverList = Service::QueryAllDrivers();
    PassengerList = Service::QueryAllPassengers();
    for (int i = 0; i < DriverList->Count; i++) {
       
        if (DriverList[i]->Username == username) {
            
            if (DriverList[i]->Password == password) {
                return 1;
            }
            
        }
    }

    for (int i = 0; i < PassengerList->Count; i++) {
        if (PassengerList[i]->Username == username) {

            if (PassengerList[i]->Password == password) {
                return 1;
            }

        }
    }
    return 1;
}

int RuralService::Service::PassengerOrDriver(String^ username)
{
    DriverList = Service::QueryAllDrivers();
    PassengerList = Service::QueryAllPassengers();
    for (int i = 0; i < DriverList->Count; i++) {

        if (DriverList[i]->Username == username) {
            return 1;
        }
    }

    for (int i = 0; i < PassengerList->Count; i++) {
        if (PassengerList[i]->Username == username) {
            return 0;

        }
    }
    return 2;
}
//metodo que cuando se invoque activara el protocolo de seguridad que hará parpadear un led y sonar un buzer
void RuralService::Service::ActivateSecurityProtocol()
{
    String^ result;
    try {
        OpenPort();
        String^ message = "SOS";

        ArduinoPort->Write(message);
        result = ArduinoPort->ReadLine();
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        ClosePort();
    }

}

List<String^>^ RuralService::Service::ReadGPSData()
{
    List<String^>^ result = gcnew List<String^>();  // Inicializar la lista;
    try {
        // Asegúrate de que el puerto esté abierto antes de leer
        //if (!ArduinoPort->IsOpen) {
            OpenPort();
       // }

        String^ nmeaSentence = ArduinoPort->ReadLine();  // Leer una línea completa del puerto serial
        if (nmeaSentence->Length > 1 && nmeaSentence->Contains(",")) {
            array<String^>^ data = nmeaSentence->Split(',');
  
            String^ latitude = data[0];
            String^ longitude = data[1];
            result->Add(latitude);
            result->Add(longitude);
        }
        else {
            result->Add("1");
        }
        
 

    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        ClosePort();
    }
    
    return result;
}

void RuralService::Service::OpenPort()
{
    try {
        ArduinoPort = gcnew SerialPort();
        ArduinoPort->PortName = "COM5";
        ArduinoPort->BaudRate = 115200;
        ArduinoPort->Open();
    }
    catch (Exception^ ex) {
        throw ex;
    }
}

void RuralService::Service::ClosePort()
{
    try {
        if (ArduinoPort->IsOpen)
            ArduinoPort->Close();
    }
    catch (Exception^ ex) {
        throw ex;
    }
}


/*
void RuralService::Service::Add_Rute(List<String^>^ ruta_x)
{
    Persistance::Persist_RUTA_XMLFile(XML_RUTA_FILE_NAME, ruta_x);
}

List<String^>^ RuralService::Service::load_Rute()
{
    Lista_rutas_x = gcnew List<String^>();
    try {
        
        Lista_rutas_x = (List<String^>^)Persistance::Load_RUTA_XmlFile(XML_RUTA_FILE_NAME);
        if (Lista_rutas_x == nullptr)
            Lista_rutas_x = gcnew List<String^>();
    }
    catch (FileNotFoundException^ ex) {
    }
    return Lista_rutas_x;
}*/

