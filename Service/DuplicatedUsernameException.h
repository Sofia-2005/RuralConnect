
#pragma once
namespace RuralService {
	public ref class DuplicatedUsernameException : public System::Exception {
	public:
		DuplicatedUsernameException(System::String^ message) : Exception(message) {}
	};
}
