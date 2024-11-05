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
        double Distance;
        double Duration;
        double Latitude;
        double Longitude;

        String^ Puntos_x;
        String^ Puntos_y;

        void GetEstimatedTime();

        void GetEstimatedPrice();

        Route() {

        }
        Route(double latitude, double longitude) {
            Latitude = latitude;
            Longitude = longitude;
        }
        

    };
}

#endif //_ROUTE_H