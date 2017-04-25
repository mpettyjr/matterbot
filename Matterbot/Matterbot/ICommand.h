#pragma once
#include <string>

namespace lospi {
	class ICommand {
	public:
		virtual ~ICommand() {}; //virtual keywork means: when a class implements "ICommand" you the implementation's version
		virtual std::wstring get_name() = 0; // =0; will always need a virtual 
		virtual std::wstring get_help() = 0; // =0; guarantees implementation's version must occur
		virtual std::wstring handle_command(std::wstring team, std::wstring channel, std::wstring user, std::wstring command_text) = 0;
	};
} //this is how to make an interface
//every virtual get's a =0; except the destructor (~ICommand)
