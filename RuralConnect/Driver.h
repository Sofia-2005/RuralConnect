/**
 * Project Untitled
 */
//waaaaaaaaaaaa

#ifndef _DRIVER_H
#define _DRIVER_H

#include "User.h"
#include "CreateRoute.h"
#include "Route.h"
#include "Vehicle.h"
#include "Route.h"

using namespace System;
using namespace System::Collections::Generic;

namespace RuralConnect {
    [Serializable]public ref class Driver : public User{
    public:
        int NumberOfCompletedTrips=0;
        //List<Route^> TypicalRoutes;
        Vehicle^ vehicle;

        Route^ Rutasa;
        void EndMyRoute();
        void CreateRoute();
        void OfferRoute();
        void StartPassengerRoute();
        void CancelRoute();
        void EndPassengerRoute();
        void AddTypicalRoute();

        //constructor sin parametros
        Driver() {
        }

        Driver(String^ name, String^ lastname, String^ username, String^ password, int phone, String^ dni) {
            Name = name;
            LastName = lastname;
            DNI = dni;
            PhoneNumber = phone;
            Username = username;
            Password = password;
        }
    };
}

#endif //_DRIVER_H