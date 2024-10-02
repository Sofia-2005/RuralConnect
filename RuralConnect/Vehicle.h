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
        String^ License;
    };
}

#endif //_VEHICLE_H