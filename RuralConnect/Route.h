/**
 * Project Untitled
 */


#ifndef _ROUTE_H
#define _ROUTE_H

using namespace System;
using namespace System::Collections::Generic;

namespace RuralConnect {
    public ref class Route {
    public:
        array<int>^ EndPoint;
        array<int>^ StartPoint;
        int Distance;
        int Duration;

        void GetEstimatedTime();

        void GetEstimatedPrice();

    };
}

#endif //_ROUTE_H