#include "pch.h"

using namespace System;
using namespace RuralConnect;
using namespace RuralService;

int main(array<System::String ^> ^args)
{
    Passenger^ p1 = gcnew Passenger("o", "o", "o", "o",1, "o");

    Service::AddPassenger(p1);

    Passenger^ p = gcnew Passenger("o", "o", "o", "o", 1, "o");

    Service::AddPassenger(p);

    Console::WriteLine("Se ha agregado un pasajero a la base de datos.");
    return 0;
}
