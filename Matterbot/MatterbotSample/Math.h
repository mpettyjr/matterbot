#pragma once
#include "Matterbot.h"

namespace lospi
{
	struct Math : ICommand {
		std::wstring get_name() override {
			return L"math";
		}

		std::wstring get_help() override {
			return L"`math [2 + 2]`:\n`a`: will add\n`s`: will substract\n`m`: will multiply\n`d`: will divide\n`o`: will calculate modulus.";
		}

		std::wstring handle_command(const std::wstring &team, const std::wstring &channel,
			const std::wstring &user, const std::wstring &command_text) override {
			
			std::wstring newString = command_text;
			std::wstring option = newString.substr(0, 1);

			if (option == L"a")
			{
				std::wstring firstInt = newString.substr(1, newString.find('+'));
				std::wstring secondInt = newString.substr(newString.find('+') + 1);
				int var1 = std::stoi(firstInt);
				int var2 = std::stoi(secondInt);
				int answer = var1 + var2;
				return std::to_wstring(answer);
			}
			else if (option == L"s")
			{
				std::wstring firstInt = newString.substr(1, newString.find('-'));
				std::wstring secondInt = newString.substr(newString.find('-') + 1);
				int var1 = std::stoi(firstInt);
				int var2 = std::stoi(secondInt);
				int answer = var1 - var2;
				return std::to_wstring(answer);
			}
			else if (option == L"m")
			{
				std::wstring firstInt = newString.substr(1, newString.find('*'));
				std::wstring secondInt = newString.substr(newString.find('*') + 1);
				int var1 = std::stoi(firstInt);
				int var2 = std::stoi(secondInt);
				int answer = var1 * var2;
				return std::to_wstring(answer);
			}
			else if (option == L"d")
			{
				std::wstring firstInt = newString.substr(1, newString.find('/'));
				std::wstring secondInt = newString.substr(newString.find('/') + 1);
				int var1 = std::stoi(firstInt);
				int var2 = std::stoi(secondInt);
				int answer = var1 / var2;
				if (var2 == 0)
				{
					return L"You can't divide by 0";
				}
				else
				{
					return std::to_wstring(answer);
				}
			}
			else if (option == L"o")
			{
				std::wstring firstInt = newString.substr(1, newString.find('%'));
				std::wstring secondInt = newString.substr(newString.find('%') + 1);
				int var1 = std::stoi(firstInt);
				int var2 = std::stoi(secondInt);
				int answer = var1 % var2;
				return std::to_wstring(answer);
			}
			else
			{
				return L"You broke me!";
			}
		}
	};
}
