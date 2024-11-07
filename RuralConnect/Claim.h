/**
 * Project Untitled
 */

#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace RuralConnect {
    [Serializable] public ref class Claim {
    public:
        String^ Reason;

        Claim() {

        }
        Claim(String^ R) {
            Reason = R;
        }
    };
}

