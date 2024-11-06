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
    

    List<Driver^>^ lista = Service::QueryAllDrivers();
    for each (Driver ^ punto in lista) {
        Console::WriteLine(punto->Username);
        Console::WriteLine(punto->Rutasa->Puntos_x_fijo->Count);
    }

    return 0;
}
