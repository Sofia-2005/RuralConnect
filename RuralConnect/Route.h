/**
 * Project Untitled
 */


#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace RuralConnect {
    [Serializable] public ref class Route {
    public:
        double Latitude;
        double Longitude;

        property List< String^>^ Puntos_x_fijo ;
        property List< String^>^ Puntos_y_fijo ;

        String^ Puntos_x_volatil="";
        String^ Puntos_y_volatil="";

        void GetEstimatedTime();

        void GetEstimatedPrice();

        String^ UserName;

        Route() {
            Puntos_x_fijo = gcnew List<String^>();
            Puntos_y_fijo = gcnew List<String^>(); 
        }
        Route(double latitude, double longitude) {
            Latitude = latitude;
            Longitude = longitude;
        }
        

    };
}

