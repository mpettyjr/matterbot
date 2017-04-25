#pragma once
#include "Matterbot.h"

namespace lospi
{
	struct EchoCommand : ICommand { //ICommand is the interface (aka pure virtual)
		std::wstring get_name() override { //override makes sure the command you're using is part of the interface "ICommand"
			return L"echo";
		}

		std::wstring get_help() override {
			return L"`echo [MESSAGE]`: `echo` will respond with whatever message you give it.";
		}

		std::wstring handle_command(const std::wstring &team, const std::wstring &channel,
			const std::wstring &user, const std::wstring &command_text) override {
			if (command_text == L"SlankBot, assemble")
			{
				return L"I have literally been here the entire time!";
			}
			else if (command_text == L"Athena")
			{
				return L"Arntz you glad I didn't say banana!?";
			}
			else if (command_text == L"Bivins")
			{
				return L"Jalapeno yo' face!";
			}
			else if (command_text == L"Joel")
			{
				return L"Are you related to Anjoelina Joelie?";
			}
			return command_text;
		}
	};
}
