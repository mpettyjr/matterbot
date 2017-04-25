#pragma once
#include <vector>
#include <map>
#include <iostream>
#include <string>
#include "Matterbot.h"
#include "Md5Utilities.h"
#include "mapHeader.h"
#include <algorithm>


namespace lospi
{
	struct Challenges : ICommand { //ICommand is the interface (aka pure virtual)
		explicit Challenges(std::shared_ptr<Matterbot> bot) : bot{ bot } { }
		std::wstring get_name() override { return L"challenges"; }

		std::wstring get_help() override {
			return L"`challenges [MESSAGE]`: challenges";
		}

		std::wstring handle_command(const std::wstring &team, const std::wstring &channel,
			const std::wstring &user, const std::wstring &command_text) override {
			//bot->post_message(command_text); //use SlackBot echo "rivestment challenges" to have rivestment answer to SlackBot with hashes
			std::string hashes = wstring_to_string(command_text);
			unsigned int length = hashes.size();
			std::vector<std::string> myVector; 
			//unsigned int i = hashes.find(L' ');
			auto i = 0;
			for (i = 0; i < length; )
			{
				auto hash = hashes.substr(i, 32);
				myVector.emplace_back(hash);
				i += 33;
			}

			//step 2 = generate PW and hashes to store into maps
			std::string alpha = "shoj"; //letters that can make up the salt
			auto pwLength = 0;
			if (myMap.empty())
			{
				for (pwLength = 0; pwLength <= 14; pwLength++)
				{
					Combinator salt(alpha, pwLength);
					while (salt.has_next())
					{
						auto combo = salt.next(); //calls the next() function in the struct "Combinator" to scramble letters
						std::string mixedString{ combo.begin(), combo.end() }; //converts Combinator type to new string
						mixedString.append("77d9ca"); //thb4sz = my rivestment password
						auto size = mixedString.length(); //calcuates PW length
						auto hash = mixedString.c_str(); //creates a character array of string
						auto newHash = compute_md5(hash, size); //creates an MD5 hash
						std::wstring wKey = get_str_from_md5(newHash);
						std::string key = wstring_to_string(wKey);
						myMap.emplace(key, mixedString);
					}
				}
			}
			//step 3 = compare keys to return value
			
			std::wstring returnValue;
			for (int j = 0; j < myVector.size(); j++)
			{
				auto it = myMap.find(myVector[j]);
				if (it != myMap.end())
				{
					auto value = it->second;
					std::wstring password = string_to_wstring(value);
					returnValue += L" " + password;
				}
			}
		bot->post_message(L"rivestment try" + returnValue);
		_sleep(2000);
		return L"rivestment challenge 50";
		}
	private:
		std::shared_ptr<Matterbot> bot;
	};
}

