/**
 * Project Untitled
 */

#pragma once

#include "User.h"
#include "CreateRoute.h"


using namespace System;
using namespace System::Collections::Generic;

namespace RuralConnect {
    [Serializable]public ref class Passenger : public User{
    public:
        String^ Address;
        String^ DesiredDestination;
        String^ Level;

        void requestTrip();

        void CreateRoute();

        void CancelRoute();
        //constructor sin parametros
        Passenger() {

        }

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

