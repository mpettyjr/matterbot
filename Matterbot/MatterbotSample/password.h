#pragma once
#include "Matterbot.h"
#include "Md5Utilities.h"


namespace lospi
{
	std::string pass;
	struct password : ICommand { //ICommand is the interface (aka pure virtual)
		std::wstring get_name() override { //override makes sure the command you're using is part of the interface "ICommand"
			return L"password";
		}

		std::wstring get_help() override {
			return L"`password [MESSAGE]`: `password` will have rivestment send you a password.";
		}

		std::wstring handle_command(const std::wstring &team, const std::wstring &channel,
			const std::wstring &user, const std::wstring &command_text) override {
			std::wstring mD5 = command_text;
			if (user == L"pettyc22")
			{
				"See user option in SlankBot help menu";
			}
			else if (user == L"rivestment")
			{
				pass = wstring_to_string(command_text);
			}
		return L" ";
		}
	};
}

