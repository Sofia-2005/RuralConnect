#pragma once

#include "Passenger.h"

using namespace System;
using namespace System::Collections::Generic;

namespace RuralConnect {
	public ref class Solicitud
	{
	public:
		String^ inicio;
		String^ destino;
		Passenger^ pasajero;
	};

}