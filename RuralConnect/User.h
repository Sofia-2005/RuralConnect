/**
 * Project Untitled
 */


#ifndef _USER_H
#define _USER_H

using namespace System;
using namespace System::Collections::Generic;

namespace RuralConnect{
    public ref class User {
    public:
        static String^ Name;
        static String^ LastName;
        static String^ DNI;
        static int PhoneNumber;
        static String^ Username;
        static String^ Password;
        static int Qualification;

        void Register();

        void Login();
    };
}

#endif //_USER_H