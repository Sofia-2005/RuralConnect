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

    

    

    RuralConnect::Trip^ viaje = gcnew RuralConnect::Trip();
    viaje->Passengers->Add(pasajero1);
    viaje->Passengers->Add(pasajero2);

    Persistance::AddPTrip(viaje);


    Console::WriteLine("Agregado");


    return 0;
}
