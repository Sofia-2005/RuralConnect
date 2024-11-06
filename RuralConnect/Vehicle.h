/**
 * Project Untitled
 */

#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace RuralConnect {
    [Serializable]public ref class Vehicle {
    public:
        String^ Model;
        int Seats;
        String^ PlateNumber;
        array<Byte>^ License;
    };
}

