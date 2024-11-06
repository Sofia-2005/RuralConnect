/**
 * Project Untitled
 */

#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace RuralConnect {
    [Serializable] public ref class Class {
    public:
        String^ Type;
        double Discount;
        int NumberOfTrips;

        void GetDiscount();
    };
}

