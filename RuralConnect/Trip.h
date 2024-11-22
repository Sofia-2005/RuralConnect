/**
 * Project Untitled
 */

#pragma once
#include "Passenger.h"

using namespace System;
using namespace System::Collections::Generic;

namespace RuralConnect {
    [Serializable] public ref class Trip {
    public:
        

        String^ Date;

        int DepartureTime;
        int AvailableSeats;
        
        int EstimatedPrice;
        int TripState ;

        String^ Nombre_pasajeros_abordo = "";
        List<Passenger^>^ Passengers = gcnew List<Passenger^>();

        String^ Driver_Name;

        String^ ¨puntos_X_viaje = "";
        String^ ¨puntos_Y_viaje = "";
        



        void assignPassenger();

        void getAvailableSeats();

        void showRoute();

        void ValidatePassenger();

        void GetRealTimePosition();

    };
}

