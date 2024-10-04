#include "pch.h"

#include "Service.h"
#include "DuplicatedUsernameException.h"
#include "DoesNotExistUsernameException.h"

int RuralService::Service::ShowListCount()
{
    return PassengerList->Count;
}

void RuralService::Service::AddPassenger(Passenger^ passenger)
{

    for each (Passenger^ k in PassengerList) {
        if (k->Username->Equals(passenger->Username))
            throw gcnew DuplicatedUsernameException("El usuario ya existe en la base de datos.");
    }
    PassengerList->Add(passenger);
}

void RuralService::Service::UpdatePassenger(Passenger^ p)
{
    for (int i = 0; i < PassengerList->Count; i++) {
        if (PassengerList[i]->Username == p->Username) {
            PassengerList[i] = p;
            return;
        }
    }
    throw gcnew DoesNotExistUsernameException("El usuario no existe en la base de datos.");
}

void RuralService::Service::DeletePassenger(String^ username)
{
    for (int i = 0; i < PassengerList->Count; i++) {
        if (PassengerList[i]->Username == username) {
            PassengerList->RemoveAt(i);
            return;
        }
    }
    throw gcnew DoesNotExistUsernameException("El usuario no existe en la base de datos.");
}

List<Passenger^>^ RuralService::Service::QueryAllPassengers()
{
    return PassengerList;
}

Passenger^ RuralService::Service::QueryPassengerbyUsername(String^ username)
{
    for (int i = 0; i < PassengerList->Count; i++) {
        if (PassengerList[i]->Username == username) {
            return PassengerList[i];
        }
    }
    throw gcnew DoesNotExistUsernameException("El usuario no existe en la base de datos.");
}

void RuralService::Service::UpdateDriver(Driver^ p)
{
    for (int i = 0; i < DriverList->Count; i++) {
        if (DriverList[i]->Username == p->Username) {
            DriverList[i] = p;
            return;
        }
    }
    throw gcnew DoesNotExistUsernameException("El usuario no existe en la base de datos.");
}

void RuralService::Service::DeleteDriver(String^ username)
{
    for (int i = 0; i < DriverList->Count; i++) {
        if (DriverList[i]->Username == username) {
            DriverList->RemoveAt(i);
            return;
        }
    }
    throw gcnew DoesNotExistUsernameException("El usuario no existe en la base de datos.");
}

List<Driver^>^ RuralService::Service::QueryAllDrivers()
{
    return DriverList;
}

Driver^ RuralService::Service::QueryDriverbyUsername(String^ username)
{
    for (int i = 0; i < DriverList->Count; i++) {
        if (DriverList[i]->Username == username) {
            return DriverList[i];
        }
    }
    throw gcnew DoesNotExistUsernameException("El usuario no existe en la base de datos.");
}

int RuralService::Service::QueryDriverPassengerbyUsername(String^ username, String^ password)
{
    
    for (int i = 0; i < DriverList->Count; i++) {
        if (DriverList[i]->Username == username) {
            
            if (DriverList[i]->Password == password) {
                return 1;
            }
            
        }
    }

    for (int i = 0; i < PassengerList->Count; i++) {
        if (PassengerList[i]->Username == username) {

            if (PassengerList[i]->Password == password) {
                return 1;
            }

        }
    }
    return 0;
}

void RuralService::Service::AddDriver(Driver^ driver)
{
    for each (Driver^ k in DriverList) {
        if (k->Username->Equals(driver->Username))
            throw gcnew DuplicatedUsernameException("El usuario ya existe en la base de datos.");
    }
    DriverList->Add(driver);
}