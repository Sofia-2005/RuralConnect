/**
 * Project Untitled
 */


#ifndef _PASSENGER_H
#define _PASSENGER_H

#include "User.h"
#include "CreateRoute.h"


using namespace System;
using namespace System::Collections::Generic;

namespace RuralConnect {
    public ref class Passenger : public User{
    public:
        String^ Address;
        String^ DesiredDestination;

        void requestTrip();

        void CreateRoute();

        void CancelRoute();

        Passenger(String^ name, String^ lastname, String^ username, String^ password, int phone, String^ dni) {
            Name = name;
            LastName = lastname;
            DNI = dni;
            PhoneNumber = phone;
            Username = username;
            Password = password;
        }

    };
}

#endif //_PASSENGER_H