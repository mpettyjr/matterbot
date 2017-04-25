#pragma once
#include "Matterbot.h"
#include "Md5Utilities.h"

namespace lospi
{
	struct MakeMd5 : ICommand { //ICommand is the interface (aka pure virtual)
		std::wstring get_name() override { //override makes sure the command you're using is part of the interface "ICommand"
			return L"MD5";
		}

		std::wstring get_help() override {
			return L"`MD5 [MESSAGE]`: `echo` will respond with whatever message you give it.";
		}

		std::wstring handle_command(const std::wstring &team, const std::wstring &channel,
			const std::wstring &user, const std::wstring &command_text) override {
			//step 1
			std::wstring mD5 = command_text;
			//step 2
			auto string = wstring_to_string(mD5); 
			//step 3
			auto size = string.length();
			auto hash = string.c_str();
			//step 4
			auto newHash = compute_md5(hash, size);
			//step 5
			return L"The MD5 hash for is" + get_str_from_md5(newHash);
		}
	};
}

