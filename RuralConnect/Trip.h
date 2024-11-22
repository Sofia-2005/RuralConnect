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
        

        String^ Date="";

        int DepartureTime=0;
        int AvailableSeats = 0;
        
        int EstimatedPrice = 0;
        int TripState = 0;

        
        List<Passenger^>^ Passengers = gcnew List<Passenger^>();

        String^ Driver_Name = "";

        String^ puntos_X_viaje = "";
        String^ puntos_Y_viaje = "";
        



        void assignPassenger();

        void getAvailableSeats();

        void showRoute();

        void ValidatePassenger();

        void GetRealTimePosition();

    };
}

