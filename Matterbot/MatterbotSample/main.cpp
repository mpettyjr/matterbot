#include "Matterbot.h"
#include <iostream>
#include <sstream>
#include "ConsoleLogger.h"
#include "EchoCommand.h"
#include "ReverseCommand.h"
#include "StringPlay.h"
#include "WeatherCommand.h"
#include "Capitals.h"
#include "Challenges.h"
#include "UselessFacts.h"
#include "Math.h"
#include "Header.h"
#include "MakeMd5.h"
#include "combine.h"
#include "user.h"
#include "password.h"


#define ERROR_SUCCESS 0
#define ERROR_FAILURE -1

using namespace std;
using namespace lospi;

int main() {
  wstring mattermost_url = L"https://hooks.slack.com",
    incoming_hook_route = L"services/T4Z1QAKSS/B4ZC18NC9/tOA8XIqEJxAEdoTpdiaQP3Sn",
    outgoing_hook_route = L"http://127.0.0.1:7777/",
    outgoing_hook_token = L"cRCzCDKBgpvMUS381tfKHvvk",
    welcome_message = L"bot is running";
  
  try {
    auto bot = make_shared<Matterbot>(mattermost_url, incoming_hook_route, outgoing_hook_route, outgoing_hook_token);
	bot->set_logger(make_unique<ConsoleLogger>());
	bot->register_command(make_shared<Capitals>());
	bot->register_command(make_shared<Challenges>(bot));
	bot->register_command(make_shared<combine>(bot));
	bot->register_command(make_shared<user>(bot));
	bot->register_command(make_shared<password>());
    bot->register_command(make_shared<EchoCommand>());
	bot->register_command(make_shared<MakeMd5>());
    bot->register_command(make_shared<ReverseCommand>(bot));
	bot->register_command(make_shared<StringPlay>());
	bot->register_command(make_shared<WeatherCommand>());
	bot->register_command(make_shared<UselessFacts>());
	bot->register_command(make_shared<Math>());
    bot->post_message(welcome_message);
	
	wstring console;
    wclog << ">> Type \'quit\' to quit. Any other input will be sent to the bot." << endl;
    while (getline(wcin, console)) {
      if (L"quit" == console) {
        wclog << ">> Quitting." << endl;
        return ERROR_SUCCESS;
      }
      if (L"" != console) { bot->post_message(console); }
    }
  }
  catch (exception e) {
    wcerr << "[-] Unhandled exception:" << e.what() << endl;
    return ERROR_FAILURE;
  }
}
