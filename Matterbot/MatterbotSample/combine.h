#pragma once
#include "Matterbot.h"
#include "Md5Utilities.h"
#include "Header.h"
#include "password.h"

namespace lospi
{
	struct combine : ICommand { //ICommand is the interface (aka pure virtual)
		explicit combine(std::shared_ptr<Matterbot> bot) : bot{ bot } { }
		std::wstring get_name() override { return L"combine"; }

		std::wstring get_help() override {
			return L"`combine [MESSAGE]`: `combine` will build a look-up table.";
		}

		std::wstring handle_command(const std::wstring &team, const std::wstring &channel,
			const std::wstring &user, const std::wstring &command_text) override {
			if (user == L"pettyc22")
			{
				std::string alpha = "shoj"; //letters that can make up the salt
				std::string fullValue;
				if (myMap.empty())
				{
					for (auto pwLength = 0; pwLength < 11; pwLength++)
					{
						Combinator salt(alpha, pwLength);
						while (salt.has_next())
						{
							auto combo = salt.next(); //calls the next() function in the struct "Combinator" to scramble letters
							std::string mixedString{ combo.begin(), combo.end() }; //converts Combinator type to new string
							mixedString.append(pass); //my rivestment password
							auto size = mixedString.length(); //calcuates PW length
							auto hash = mixedString.c_str(); //creates a character array of string
							Md5Digest newHash = compute_md5(hash, size); //creates an MD5 hash
							myMap.emplace(newHash, mixedString);
						}
					}
				}
				return L"You're look-up table is finished!";
			}
			else
			{
				return L"You aren't authorized to build a lookup table";
			}
			return L" ";
		}
	private:
	std::shared_ptr<Matterbot> bot;
	};
}
