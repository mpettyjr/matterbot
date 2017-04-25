#pragma once
#include "Matterbot.h"

namespace lospi
{
	struct StringPlay : ICommand {
		std::wstring get_name() override {
			return L"string";
		}

		std::wstring get_help() override {
			return L"`string [your string]`:\n`1string`: creates a string and counts characters\n`2string`: creates string and UPPERS string\n`3string`: creates string and lowers string.";
		}

		std::wstring handle_command(const std::wstring &team, const std::wstring &channel,
			const std::wstring &user, const std::wstring &command_text) override {
			
			std::wstring newString = command_text;
			std::wstring option = newString.substr(0, 1);
			
			if (option == L"1") //must use L because this is unicode
			{
				//newString.find(L"1")[0];
				//return newString.length(); //won't work because length is used for ints
				//return newString.size(); //size is used for strings
				return std::to_wstring(newString.length()-1); //converts size which is used with strings 
			}
			else if (option == L"2")
			{
				std::size_t pos = newString.find(L"2") + 1;
				std::wstring returnString = newString.substr(pos);
				int i = 0;
				char c;
				while (returnString[i])
				{
					c = returnString[i];
					returnString[i] = (towupper(c));
					i++;
				}
				return returnString;
			}
			else if (option == L"3")
			{
				std::size_t pos = newString.find(L"3") + 1;
				std::wstring returnString = newString.substr(pos);
				int i = 0;
				char c;
				while (returnString[i])
				{
					c = returnString[i];
					returnString[i] = (towlower(c));
					i++;
				}
				return returnString;
			}
		}
	};
}