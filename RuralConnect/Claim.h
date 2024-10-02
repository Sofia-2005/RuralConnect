/**
 * Project Untitled
 */


#ifndef _CLAIM_H
#define _CLAIM_H

using namespace System;
using namespace System::Collections::Generic;

namespace RuralConnect {
    public ref class Claim {
    public:
        String^ Reason;

        void ValidateClaim();
    };
}

#endif //_CLAIM_H