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
        List<String^>^ Route;
        String^ Date;
        int DepartureTime;
        int AvailableSeats;
        List<Passenger^>^ Passengers = gcnew List<Passenger^>();
        int EstimatedPrice;
        bool TripState;

        void assignPassenger();

        void getAvailableSeats();

        void showRoute();

        void ValidatePassenger();

        void GetRealTimePosition();

    };
}

