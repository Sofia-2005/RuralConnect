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
    Persistance::PersistBinaryFile(BIN_DRIVER_FILE_NAME, DriverList);

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
    Persistance::PersistBinaryFile(BIN_PASSENGER_FILE_NAME, PassengerList);
}

void RuralService::Service::UpdatePassenger(Passenger^ p)
{
    for (int i = 0; i < PassengerList->Count; i++) {
        if (PassengerList[i]->Username == p->Username) {
            PassengerList[i] = p;
            //Persistance::PersistXMLFile(XML_PASSENGER_FILE_NAME, PassengerList);
            Persistance::PersistBinaryFile(BIN_PASSENGER_FILE_NAME, PassengerList);
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
            Persistance::PersistBinaryFile(BIN_PASSENGER_FILE_NAME, PassengerList);
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
        PassengerList = (List<Passenger^>^)Persistance::LoadBinaryFile(BIN_PASSENGER_FILE_NAME);
        if(PassengerList == nullptr)
            PassengerList = gcnew List<Passenger^>();
    }
    catch (FileNotFoundException^ ex) {
    }
    return PassengerList;
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
    for (int i = 0; i < DriverList->Count; i++) {
        if (DriverList[i]->Username == p->Username) {
            DriverList[i] = p;
            Persistance::PersistBinaryFile(BIN_DRIVER_FILE_NAME, DriverList);
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
            Persistance::PersistBinaryFile(BIN_DRIVER_FILE_NAME, DriverList);
            return;
        }
    }
    throw gcnew DoesNotExistUsernameException("El usuario no existe en la base de datos.");
}

List<Driver^>^ RuralService::Service::QueryAllDrivers()
{
    DriverList = gcnew List<Driver^>();
    try {
        //robotsList = (List<RobotWaiter^>^)Persistance::LoadRobotWaitersTextFile(TXT_ROBOT_FILE_NAME);
        //PassengerList = (List<Passenger^>^)Persistance::LoadPassengersXmlFile(XML_PASSENGER_FILE_NAME);
        DriverList = (List<Driver^>^)Persistance::LoadBinaryFile(BIN_DRIVER_FILE_NAME);
        if (DriverList == nullptr)
            DriverList = gcnew List<Driver^>();
    }
    catch (FileNotFoundException^ ex) {
    }
   
    return DriverList;
    
}

Driver^ RuralService::Service::QueryDriverbyUsername(String^ username)
{
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
    return 0;
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

String^ RuralService::Service::ReadGPSData()
{
    String^ result;
    try {
        // Asegúrate de que el puerto esté abierto antes de leer
        if (!ArduinoPort->IsOpen) {
            OpenPort();
        }

        String^ nmeaSentence = ArduinoPort->ReadLine();  // Leer una línea completa del puerto serial
        
        array<String^>^ data = nmeaSentence->Split(',');
        String^ latitude = data[0];
        String^ longitude = data[1];
        result = latitude + " " + longitude; 
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

