#pragma once
namespace RuralService {
	public ref class DoesNotExistUsernameException : public System::Exception {
	public:
		DoesNotExistUsernameException(System::String^ message) : Exception(message) {}
	};
}
