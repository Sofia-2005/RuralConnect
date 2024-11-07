#pragma once

#include "User.h"

using namespace System;
using namespace System::Collections::Generic;

namespace RuralConnect {
    [Serializable] public ref class Administrator : public User {
    public:
        
        String^ AccessLevel; //Nivel de acceso completo o restringido
        int QuantityOfReportsGenerated;
        bool CanEditReports;


        //constructor 
        Administrator() {
        }

        Administrator(String^ name, String^ lastname, String^ username, String^ password, int phone, String^ dni) {
            Name = name;
            LastName = lastname;
            DNI = dni;
            PhoneNumber = phone;
            Username = username;
            Password = password;
        }
    };
}

