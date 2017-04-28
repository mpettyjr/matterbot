#pragma once
#include "Matterbot.h"
#include "Header.h"
#include "Md5Utilities.h"
#include "password.h"

namespace lospi
{

	struct user : ICommand { //ICommand is the interface (aka pure virtual)
		explicit user(std::shared_ptr<Matterbot> bot) : bot{ bot } { }
		std::wstring get_name() override { return L"user"; }

		std::wstring get_help() override {
			return L"`user` [option]: `user`\n`r`: registers new user\n`p`: creates password\n`q`: removes user from rivestment.";
		}

		std::wstring handle_command(const std::wstring &team, const std::wstring &channel,
			const std::wstring &user, const std::wstring &command_text) override {
			std::wstring option = command_text;
			if (user == L"pettyc22")
			{
				if (option == L"r")
				{
					bot->post_message(L"rivestment register SlankBot");
				}
				else if (option == L"p")
				{
					bot->post_message(L"rivestment password");
					//pass = wstring_to_string(command_text);
				}
				else if (option == L"q")
				{
					bot->post_message(L"rivestment quit");
				}
			}
			else
			{
				return L"You are not the authorized user";
			}
		return L" ";
		}
	
	private:
	std::shared_ptr<Matterbot> bot;
	};
}
