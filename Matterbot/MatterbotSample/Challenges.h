#pragma once
#include <vector>
#include <map>
#include <iostream>
#include <string>
#include "Matterbot.h"
#include "Md5Utilities.h"
#include "Header.h"
#include <algorithm>

using namespace std;
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
			auto length = command_text.size();
			std::vector<Md5Digest> myVector;
			std::wstring returnValue;
			
			for (int i = 0; i < length; i += 33)
			{
				auto hash = command_text.substr(i, 32);
				myVector.emplace_back(get_md5_from_str(hash));  //runs wstring to md5 function then places it in vector
			}
						
			for (int j = 0; j < myVector.size(); j++)
			{
				auto it = myMap.find(myVector[j]);
				if (it != myMap.end())
				{
					auto value = it->second; //looks at value associated with key in map
					std::wstring password = string_to_wstring(value);
					returnValue += L" " + password;
				}
			}

		bot->post_message(L"rivestment try" + returnValue);
		_sleep(1500);
		return L"rivestment challenge 100";
		}

	private:
		std::shared_ptr<Matterbot> bot;
	};
}

