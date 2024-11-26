#include "pch.h"

#include "Service.h"
#include "DuplicatedUsernameException.h"
#include "DoesNotExistUsernameException.h"
using namespace System::IO;
using namespace RuralConnect;


int RuralService::Service::ShowListCount()
{
    return PassengerList->Count;
}
void RuralService::Service::AddDriver(Driver^ driver)
{
    /*for each (Driver ^ k in DriverList) {
        if (k->Username->Equals(driver->Username))
            throw gcnew DuplicatedUsernameException("El usuario ya existe en la base de datos.");
    }
    for each (Passenger ^ k in PassengerList) {
        if (k->Username->Equals(driver->Username))
            throw gcnew DuplicatedUsernameException("El usuario ya existe en la base de datos.");
    }
    DriverList = Service::QueryAllDrivers();
    DriverList->Add(driver);
    Persistance::Persist_Driver_XML_File(XML_DRIVER_FILE_NAME, DriverList);*/
    Persistance::AddDriverTable(driver);

}
void RuralService::Service::AddPassenger(Passenger^ passenger)
{
    /*
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
    Persistance::Persist_Passenger_XML_File(XML_PASSENGER_FILE_NAME, PassengerList); */

    // se agrega el pasajero a la base de datos, que serian todas sus tablas
    
    Persistance::AddPassenger(passenger);

}

void RuralService::Service::UpdatePassenger(Passenger^ passenger)
{
    /*
    for (int i = 0; i < PassengerList->Count; i++) {
        if (PassengerList[i]->Username == p->Username) {
            PassengerList[i] = p;
            //Persistance::PersistXMLFile(XML_PASSENGER_FILE_NAME, PassengerList);
            Persistance::Persist_Passenger_XML_File(XML_PASSENGER_FILE_NAME, PassengerList);
            return;
        }
    }
    throw gcnew DoesNotExistUsernameException("El usuario no existe en la base de datos."); */
    

    Persistance::UpdatePassenger(passenger);






}

void RuralService::Service::DeletePassenger(String^ username)
{   /*
    for (int i = 0; i < PassengerList->Count; i++) {
        if (PassengerList[i]->Username == username) {
            PassengerList->RemoveAt(i);
            
            //Persistance::PersistXMLFile(XML_PASSENGER_FILE_NAME, PassengerList);
            Persistance::Persist_Passenger_XML_File(XML_PASSENGER_FILE_NAME, PassengerList);
            return;
        }
    }
    throw gcnew DoesNotExistUsernameException("El usuario no existe en la base de datos.");*/




    Persistance::DeletePassenger(username);
    


}

List<Passenger^>^ RuralService::Service::QueryAllPassengers()
{
    List<Passenger^>^ PassengerList = gcnew List<Passenger^>();
    /*try {
        //robotsList = (List<RobotWaiter^>^)Persistance::LoadRobotWaitersTextFile(TXT_ROBOT_FILE_NAME);
        //PassengerList = (List<Passenger^>^)Persistance::LoadPassengersXmlFile(XML_PASSENGER_FILE_NAME);
        PassengerList = (List<Passenger^>^)Persistance::Load_Passenger_XML_File(XML_PASSENGER_FILE_NAME);
        if(PassengerList == nullptr)
            PassengerList = gcnew List<Passenger^>();
    }
    catch (FileNotFoundException^ ex) {
    }*/
    PassengerList = Persistance::QueryAllPassengers();
    


    return PassengerList;
}

void RuralService::Service::AddAdvert(Claim^ p)
{/*
    Lista_reclamos = Service::QueryAllAdvertisements();
    Lista_reclamos->Add(p);
    Persistance::Persist_Claim_XML_File(XML_CLAIM_FILE_NAME, Lista_reclamos);
    */
    Persistance::AddClaim(p);
}

List<Claim^>^ RuralService::Service::QueryAllAdvertisements()
{

    //////
    List <Claim^>^ Lista_reclamos = gcnew List<Claim^>();/*
    try {
        //robotsList = (List<RobotWaiter^>^)Persistance::LoadRobotWaitersTextFile(TXT_ROBOT_FILE_NAME);
        //PassengerList = (List<Passenger^>^)Persistance::LoadPassengersXmlFile(XML_PASSENGER_FILE_NAME);
        Lista_reclamos = (List<Claim^>^)Persistance::Load_Claim_XML_File(XML_CLAIM_FILE_NAME);
        if (Lista_reclamos == nullptr)
            Lista_reclamos = gcnew List<Claim^>();
    }
    catch (FileNotFoundException^ ex) {
    }///*/
    Lista_reclamos = Persistance::QueryAllClaims();

    return Lista_reclamos;
    


}


Passenger^ RuralService::Service::QueryPassengerbyUsername(String^ username)
{
    Passenger^ pasajero_requerido = Persistance::QueryPassengerByUserName(username);


    
    //throw gcnew DoesNotExistUsernameException("El usuario no existe en la base de datos.");
    return pasajero_requerido;
}

void RuralService::Service::AddTrip(Trip^t)
{
    Persistance::AddPTrip(t);
}

void RuralService::Service::UpdateTrip(Trip^t)
{
    Persistance::UpdateTrip(t);
}

void RuralService::Service::DeleteTrip(String^ username)
{
    Persistance::DeleteTrip(username);
}

List<Trip^>^ RuralService::Service::QueryAllTrips()
{
    return Persistance::QueryAllTrips();
}

Trip^ RuralService::Service::QueryTripbyUsername(String^ username)
{
    return Persistance::QueryTripByUserName(username);
}


void RuralService::Service::UpdateDriver(Driver^ p)
{
    /*DriverList = QueryAllDrivers();
    for (int i = 0; i < DriverList->Count; i++) {
        
        if (DriverList[i]->Username == p->Username) {
            DriverList[i] = p;
            Persistance::Persist_Driver_XML_File(XML_DRIVER_FILE_NAME, DriverList);
            return;
        }
    }
    throw gcnew DoesNotExistUsernameException("El usuario no existe en la base de datos.");*/

    Persistance::UpdateDriverTable(p);
}

void RuralService::Service::DeleteDriver(String^ username)
{
    /*for (int i = 0; i < DriverList->Count; i++) {
        if (DriverList[i]->Username == username) {
            DriverList->RemoveAt(i);
            Persistance::Persist_Driver_XML_File(XML_DRIVER_FILE_NAME, DriverList);
            return;
        }
    }
    throw gcnew DoesNotExistUsernameException("El usuario no existe en la base de datos.");*/

    Persistance::DeleteDriverTable(username);
}

List<Driver^>^ RuralService::Service::QueryAllDrivers()
{
    List<Driver^>^ lista_conduc = Persistance::QueryAllDriversTable();
   
    return lista_conduc;
    
}

Driver^ RuralService::Service::QueryDriverbyUsername(String^ username)
{
    Driver^ conductor;
    conductor = Persistance::QueryDriverTableByUsername(username);

    //throw gcnew DoesNotExistUsernameException("El usuario no existe en la base de datos.");
    return conductor;
}

Dictionary<String^, double>^ RuralService::Service::QueryUserByUserType()
{
    Dictionary<String^, double>^ dict = gcnew Dictionary<String^, double>();
    dict->Add("Pasajero", 0);
    dict->Add("Conductor", 0);

    // Obtener las listas de conductores y pasajeros
    List<Driver^>^ driversList = QueryAllDrivers();  // Consulta la lista de conductores
    List<Passenger^>^ passengersList = QueryAllPassengers();  // Consulta la lista de pasajeros

    // Contar la cantidad de conductores
    dict["Conductor"] = driversList->Count;

    // Contar la cantidad de pasajeros
    dict["Pasajero"] = passengersList->Count;

    /*List<Driver^>^ usersList = QueryAllDrivers();
    for (int i = 0; i < usersList->Count; i++) {
        for (int j = 0; j < usersList[i]->Count; j++) {
            if (ordersList[i]->OrderDishes[j]->Dish->GetType() == EntranceDish::typeid)
                dict["Entradas"] += ordersList[i]->OrderDishes[j]->SubTotal;
            if (ordersList[i]->OrderDishes[j]->Dish->GetType() == MainDish::typeid)
                dict["Platos principales"] += ordersList[i]->OrderDishes[j]->SubTotal;
        }
    }*/
    return dict;
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
            //OpenPort();
       // }

        /*String^ nmeaSentence = ArduinoPort->ReadLine();  // Leer una línea completa del puerto serial
        if (nmeaSentence->Length > 1 && nmeaSentence->Contains(",")) {
            array<String^>^ data = nmeaSentence->Split(',');
  
            String^ latitude = data[0];
            String^ longitude = data[1];
            result->Add(latitude);
            result->Add(longitude);
        }
        else {
            result->Add("1");
        }*/
        
 

    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        //ClosePort();
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

List<double>^ RuralService::Service::De_String_toDouble(String^ listasa)
{
    List<String^>^ lista = gcnew List<String^>(listasa->Split(' '));
    List<double>^ lista_d = gcnew List<double>();

    for each (String ^ i in lista) {
        double value;
        if (!String::IsNullOrEmpty(i) && Double::TryParse(i, value)) {
            lista_d->Add(value);
        }
    }

    return lista_d;
}

int RuralService::Service::SolicitudPersonas(String^ text)
{
    int result;
    try {
        OpenPort_Camera();
        ArduinoPort_Camera->Write(text);
        ArduinoPort_Camera->BaseStream->Flush(); // Asegura que los datos se envíen
        result = Convert::ToInt32(ArduinoPort_Camera->ReadLine());

    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        ClosePort_Camera();
    }
    return result;
}

void RuralService::Service::OpenPort_Camera()
{
    try {
        ArduinoPort_Camera = gcnew SerialPort();
        ArduinoPort_Camera->PortName = "COM7";
        ArduinoPort_Camera->BaudRate = 115200;
        ArduinoPort_Camera->ReadTimeout = 17000;
        if (!ArduinoPort_Camera->IsOpen) {
            ArduinoPort_Camera->Open();

        }

    }
    catch (Exception^ ex) {
        throw ex;
    }
}

void RuralService::Service::ClosePort_Camera()
{
    try {
        if (ArduinoPort_Camera->IsOpen)
            ArduinoPort_Camera->Close();
        delete ArduinoPort_Camera;  // Liberar los recursos del puerto
        ArduinoPort_Camera = nullptr;
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

