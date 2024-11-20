/**
 * Project Untitled
 */
#include "Claim.h"

#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace RuralConnect{
    [Serializable]public ref class User {
    public:
        String^ Name;
        String^ LastName;
        String^ DNI;
        int PhoneNumber;
        String^ Username;
        String^ Password;
        Claim^ claim = gcnew Claim();
        int Qualification;
        String^ UbiActual;

        void Register();

        void Login();
    };
}

