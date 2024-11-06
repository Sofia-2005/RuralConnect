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
        LinkedList<String^>^ Route;
        String^ Date;
        int DepartureTime;
        int AvailableSeats;
        LinkedList<Passenger^>^ Passengers;
        int EstimatedPrice;
        LinkedList<array<int>^>^ StopLocations;
        bool TripState;

        void assignPassenger();

        void getAvailableSeats();

        void showRoute();

        void ValidatePassenger();

        void GetRealTimePosition();

    };
}

