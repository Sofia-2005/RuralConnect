#include "pch.h"

using namespace System;
using namespace RuralConnect;
using namespace RuralService;
using namespace RCPersistance;

using namespace System::Collections::Generic;

int main(array<System::String^>^ args)
{
    
    //RuralConnect::Solicitud^ usuario = gcnew RuralConnect::Solicitud();

    //usuario->inicio = "noooo mi compaaa";
    //usuario->destino = "Feo";
    //usuario->UserName = "Luis Muñoz";
    

    //Persistance::DeleteSolicitud(usuario->UserName);
    //Console::WriteLine(pasajera->UserName);

    //List<RuralConnect::Solicitud^>^ pasajera = Persistance::QueryAllSolicitudes();
    //Console::WriteLine(pasajera->Count);

    RuralConnect::Passenger^ pasajero1 = gcnew RuralConnect::Passenger();
    pasajero1->Username = "Luis abla Muñoz";
    RuralConnect::Passenger^ pasajero2 = gcnew RuralConnect::Passenger();
    pasajero2->Username = "Pepito josi Jose";

    
    String^ ruta_1 = "nomre 1";
    
    String^ ruta_2 = "neim rutaa 2";

    

    RuralConnect::Trip^ viajesaso = gcnew RuralConnect::Trip();
    //List<String^>^ Route = gcnew List<String^>();
    viajesaso->Date = "actualizadoo";
    viajesaso->DepartureTime = 9;
    viajesaso->AvailableSeats =4;

    viajesaso->Passengers->Add(pasajero1);
    viajesaso->Passengers->Add(pasajero2);

    viajesaso->Route->Add(ruta_1);
    viajesaso->Route->Add(ruta_2);


    //List<Passenger^>^ Passengers = gcnew List<Passenger^>();
    viajesaso->EstimatedPrice=45;
    viajesaso->TripState = true;

    viajesaso->UserName ="otro pe caumsa";


    Trip^ tripsaso = Persistance::QueryTripByUserName(viajesaso->UserName);
    Console::WriteLine(tripsaso->Route->Count);
    Console::WriteLine(tripsaso->Nombre_pasajeros_abordo->Count);
    Console::WriteLine("Agregado");


    return 0;
}
