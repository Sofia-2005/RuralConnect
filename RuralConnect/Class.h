/**
 * Project Untitled
 */


#ifndef _CLASS_H
#define _CLASS_H

using namespace System;
using namespace System::Collections::Generic;

namespace RuralConnect {
    public ref class Class {
    public:
        String^ Type;
        double Discount;
        int NumberOfTrips;

        void GetDiscount();
    };
}

#endif //_CLASS_H