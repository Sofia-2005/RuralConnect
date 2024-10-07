/**
 * Project Untitled
 */


#ifndef _VEHICLE_H
#define _VEHICLE_H

using namespace System;
using namespace System::Collections::Generic;

namespace RuralConnect {
    public ref class Vehicle {
    public:
        String^ Model;
        int Seats;
        String^ PlateNumber;
        array<Byte>^ License;
    };
}

#endif //_VEHICLE_H