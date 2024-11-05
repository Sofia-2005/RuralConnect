#include "pch.h"

using namespace System;
using namespace RuralConnect;
using namespace RuralService;
using namespace RCPersistance;

using namespace System::Collections::Generic;

int main(array<System::String ^> ^args)
{
    /*Passenger^ p1 = gcnew Passenger("o", "o", "o", "o", 1, "o");

    Service::AddPassenger(p1);

    Passenger^ p = gcnew Passenger("o", "o", "o", "o", 1, "o");

    Service::AddPassenger(p);

    Console::WriteLine("Se ha agregado un pasajero a la base de datos.");*/
    Service::rutas_x->Add ("3,5,6,4,5,6,6,7,7,8,8,7,6,5,5");
    Service::rutas_x->Add("4,35,5,546,65,54,5435,3,44,536,5,3,3,43,3,54,6,545");
    Service::rutas_x->Add("5,45,4,45,5,54,4,3,3,4,3,3,3,2,2,65,4,67,5");
    


    // Imprimir los elementos de la lista
    for each (String ^ ruta in Service::rutas_x)
    {
        Console::WriteLine(ruta);
    }

    Service::Add_Rute(Service::rutas_x);
    Console::WriteLine("GUARDADO");

    Service::rutas_x = Service::load_Rute();
    Console::WriteLine("RECUPERADOO");

    for each (String ^ ruta in Service::rutas_x)
    {
        Console::WriteLine(ruta);
    }

    List<Passenger^>^ Lista_pa = Service::AddDriver();
    for each (Passenger ^ ruta in Lista_pa)
    {
        Console::WriteLine("ola");
    }



    return 0;
}
