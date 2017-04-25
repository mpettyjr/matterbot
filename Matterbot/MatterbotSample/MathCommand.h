#pragma once
#include "Matterbot.h"

namespace lospi
{
	struct Math : ICommand {
		std::wstring get_name() override {
			return L"math";
		}

		std::wstring get_help() override {
			return L"`math [number]`\n: `1 = add`:";
		}

		std::wstring handle_command(const std::wstring &team, const std::wstring &channel,
			const std::wstring &user, const std::wstring &command_text) override {
		}
	};
}

