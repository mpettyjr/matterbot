#pragma once
#include "Matterbot.h"

namespace lospi
{
	struct Capitals : ICommand {
		std::wstring get_name() override {
			return L"capitals";
		}

		std::wstring get_help() override {
			return L"`capitals [STATE]`: `state` will respond with capital of the state you give it.";
		}

		std::wstring handle_command(const std::wstring &team, const std::wstring &channel,
			const std::wstring &user, const std::wstring &command_text) override {
			if (command_text == L"Alabama" || command_text == L"alabama")
			{
				return L"The capital of Alabama is Montgomery...home of the Confederacy not the Crimson Tide. Trust me, there are 137 larger and more interesting cities in the US to visit";
			}
			else if (command_text == L"Alaska" || command_text == L"alaska")
			{
				return L"The capital of Alaska is Juneau...cold...like -40 degrees cold and the polar bears do NOT have Coca Cola and will, instead, eat your face off!";
			}
			else if (command_text == L"Arizona" || command_text == L"arizona")
			{
				return L"The capital of Arizona is Pheonix...it's 100+ degrees, but don't worry...it's a dry heat!";
			}
			else if (command_text == L"Arkansas" || command_text == L"arkansas")
			{
				return L"The capital of Arkansas is Little Rock...Wal-mart and Hillary Clinton. You would rather go to Hot Springs!";
			}
			else if (command_text == L"California" || command_text == L"california")
			{
				return L"The capital of California is Sacramento...liberal land of the Fruits and Nuts...Arnold says \"We need wata\"!";
			}
			else if (command_text == L"Colorado" || command_text == L"colorado")
			{
				return L"The capital of Colorado is Denver...Payton's retired so now it's just a mile-high landing spot to get you to Aspen.";
			}
			else if (command_text == L"Connecticut" || command_text == L"connecticut")
			{
				return L"The capital of Connecticut is Hartford...was one of the richest cities during pre-Civil war...now the poorest 30 percent of people live below poverty line.";
			}
			else if (command_text == L"Delaware" || command_text == L"delaware")
			{
				return L"The capital of Delaware is Dover...was a major stop for the Underground Railroad...now that slaves are free, why bother.  Population is 36,000 and they don't have a Starbucks.";
			}
			else if (command_text == L"Florida" || command_text == L"florida")
			{
				return L"The capital of Florida is Tallahassee...unless you're a Seminole's fan, head down to Miami, home of the U.";
			}
			else if (command_text == L"Georgia" || command_text == L"georgia")
			{
				return L"The capital of Georgia is Atlanta...go Braves, I mean Indians, I mean native people that we kicked off of their land and forced them to build casinos to take our money.";
			}
			else if (command_text == L"Hawaii" || command_text == L"hawaii")
			{
				return L"The capital of Hawaii is Honolulu...Aloha and aloha...what the crap...are you saying hello to me or goodbye?!  Go jump into Mauna Kea";
			}
			else if (command_text == L"Idaho" || command_text == L"idaho")
			{
				return L"The capital of Idaho is Boise...way more than potatoes...they also have cows...so shitty cows and dirty potatoes (but no vodka)...oh please send me now!";
			}
			else if (command_text == L"Illinois" || command_text == L"illinois")
			{
				return L"The capital of Illinois is Springfield...home of the Simpsons unless that was Springfield, MA or Springfield, MO or Springfield IA or any of other 37 states that have a Springfield.";
			}
			else if (command_text == L"Indiana" || command_text == L"indiana")
			{
				return L"The capital of Indiana is Indianapolis...I think there is a big race that happens there...I can't remember because I'm not white-trash";
			}
			else if (command_text == L"Iowa" || command_text == L"iowa")
			{
				return L"The capital of Iowa is Des Moines...they have French people in Iowa? Je t'aime anywhere but Iowa.";
			}
			else if (command_text == L"Kansas" || command_text == L"kansas")
			{
				return L"The capital of Kansas is Topeka...ROCK CHALK JAY HAWK no matter what part of Kansas you're from.";
			}
			else if (command_text == L"Louisiana" || command_text == L"louisiana")
			{
				return L"The capital of Louisiana is Baton Rouge...simply the city you pass through to avoid New Orleans...and there are NO beignets!";
			}
			else if (command_text == L"Maine" || command_text == L"maine")
			{
				return L"The capital of Maine is Augusta...The woods are nice until there's a moose...who is large and will trample you...until you die.";
			}
			else if (command_text == L"Maryland" || command_text == L"maryland")
			{
				return L"The capital of Maryland is Annapolis...we all know that Maryland it's pretty much D.C. and a shit-ton of crime...but you CAN get crabs there and crabs!";
			}
			else if (command_text == L"Massachusetts" || command_text == L"massachusetts")
			{
				return L"The capital of Massachusetts is Boston...go to Mike's Pastry and Old North Church...and get mugged while walking the freedom trail...the traffic is wicked awesome.";
			}
			else if (command_text == L"Michigan" || command_text == L"michigan")
			{
				return L"The capital of Michigan is Lansing...Michigan girl's are more diseased than the water! Really, dirty water jokes? Thanks Ohio State";
			}
			else if (command_text == L"Minnesota" || command_text == L"minnesota")
			{
				return L"The capital of Minnesota is St. Paul...land of 10000 lakes and the largest mall, the two things I hate...swimming in dirty water and spending money";
			}
			else if (command_text == L"Mississippi" || command_text == L"mississippi")
			{
				return L"The capital of Mississippi is Jackson...what an amazing place to ski and fish and hike...oh, I thought you were talking about Jackson Hole...Jackson is pretty much just a hole.";
			}
			else if (command_text == L"Missouri" || command_text == L"missouri")
			{
				return L"The capital of Missouri is Jefferson City...nicknames America's most beautiful small town...and site for the state penitentiary! You're land has many beautiful criminals";
			}
			else if (command_text == L"Montana" || command_text == L"montana")
			{
				return L"The capital of Montana is Helena...2.6 billion in GOLD has been mined here in the last 20-years. This 28000 populated town has 20 over-priced jewelry shops and a Chili's...a place to spend money and get diarrhea";
			}
			else if (command_text == L"Nebraska" || command_text == L"nebraska")
			{
				return L"The capital of Nebraska is Lincoln...did you ever see Children of the Corn? Oh, it's real my friend.  Did you know there is one strand of silk for every kernel on a corn cob?";
			}
			else if (command_text == L"Nevada" || command_text == L"nevada")
			{
				return L"The capital of Nevada is Carson City...hmm, should I go to Vegas or Carson City? Gambling, parties, women, wine, and a bad-ass water show, or a city named after a dirty sweaty hairy mountain man.";
			}
			else if (command_text == L"New Hampshire" || command_text == L"new hampshire")
			{
				return L"The capital of New Hampshire is Concord...concord...like the grape not the jet. If the whole pull to visit your city is a grape...let me know when you've turned it into wine!";
			}
			else if (command_text == L"New Jersey" || command_text == L"new jersey")
			{
				return L"The capital of New Jersey is Trenton...site of the Army's main hospital during the War of 1812...that was a long time ago. Just cross the bridge and go get a cheesesteak in Philly...at least you'll get full.";
			}
			else if (command_text == L"New Mexico" || command_text == L"new mexico")
			{
				return L"The capital of New Mexico is Sante Fe...spanish for Sante Iron...but seriously, it means \"Holy Faith\"...should translate to Holy Shit It's Hot!";
			}
			else if (command_text == L"New York" || command_text == L"new york")
			{
				return L"The capital of New York is Albany...first commercial airport, first public sewer lines...and now we know why Lake Erie is so shitty!";
			}
			else if (command_text == L"North Carolina" || command_text == L"north carolina")
			{
				return L"The capital of North Carolina is Raleigh...home of the Wright Brothers and the first aeroplane.";
			}
			else if (command_text == L"North Dakota" || command_text == L"north dakota")
			{
				return L"The capital of North Dakota is Bismarck...the tallest builing in the STATE is 19-floors (the capitol building)...wow wee here I come to see such an amazing site.";
			}
			else if (command_text == L"Ohio" || command_text == L"ohio")
			{
				return L"The capital of Ohio is Columbus...boasts the #1 zoo/aquarium in America and is the corporate home of White Castle! Move over Harold and Kumar, here I come!";
			}
			else if (command_text == L"Oklahoma" || command_text == L"oklahoma")
			{
				return L"The capital of Oklahoma is Oklahoma City...home of the Thunder or was that the Federal building blowing up? But seriously, there are tornados";
			}
			else if (command_text == L"Oregon" || command_text == L"oregon")
			{
				return L"The capital of Oregon is Salem...witches, bitches, and snitches with stitches. All things evil in Oregon...especially ducks";
			}
			else if (command_text == L"Pennsylvania" || command_text == L"pennsylvania")
			{
				return L"The capital of Pennsylvania is Harrisburg...three mile island ring a bell? Philly, Pittsburgh, Hershey...there are so many more places where you can get into trouble!";
			}
			else if (command_text == L"Rhode Island" || command_text == L"rhode island")
			{
				return L"The capital of Rhode Island is Providence...we're really doing it Harry! Even the two dumbest people movie history left Providence...will you make it to Aspen?";
			}
			else if (command_text == L"South Carolina" || command_text == L"south carolina")
			{
				return L"The capital of South Carolina is Columbia...3 freaking hours from the beach and all you get are Army rocks and Game Cocks.";
			}
			else if (command_text == L"South Dakota" || command_text == L"south dakota")
			{
				return L"The capital of South Carolina is Pierre...South Dakota = Mount Rushmore, faces carved into the cliff...I'll visit when Squanto is finished";
			}
			else if (command_text == L"Tennessee" || command_text == L"tennessee")
			{
				return L"The capital of Tennessee is Nashville...home of the Grand Ol' Opry and Elvis Presley! Listen, his house has shag carpet to the ceiling, the jet is just a jet, and country music has gone the way of pop...not like it used to be!";
			}
			else if (command_text == L"Texas" || command_text == L"texas")
			{
				return L"The capital of Texas is Austin...howdy y'all...Texas is full of steers and queers and the University of Texas ain't got no cattle.";
			}
			else if (command_text == L"Utah" || command_text == L"utah")
			{
				return L"The capital of Utah is Salt Lake City...mormon village...wouldn't even bother...moving there isn't getting you into Heaven.";
			}
			else if (command_text == L"Vermont" || command_text == L"vermont")
			{
				return L"The capital of Vermont is Montpelier...home of the mighty Catamounts...and that's about it...no really, it is the smallest capital in the nation with only 7500 people...who are all related to each other!";
			}
			else if (command_text == L"Virginia" || command_text == L"virginia")
			{
				return L"The capital of Virginia is Richmond...so much to say.  Home of the confederacy and Jefferson Davis. Site of Patrick Henry's famous \"Give Me Liberty or Give Me Death\" battle cry. World's first electric street-car system...move over San Fran...the South still reigns supreme!";
			}
			else if (command_text == L"Washington" || command_text == L"washington")
			{
				return L"The capital of Washington is Olympia...with 142 Starbucks stores in Seattle why the hell would you want to go to Olympia where there are only 8!?";
			}
			else if (command_text == L"West Virginia" || command_text == L"west virginia")
			{
				return L"The capital of West Virginia is Charleston...back-woods, coal-mining hillbilly moonshiners...talk about getting back to my roots!";
			}
			else if (command_text == L"Wisconsin" || command_text == L"wisconsin")
			{
				return L"The capital of Wisonsin is Madison...cheese, dairy, cows...basically plan on never shitting again for the rest of your life.";
			}
			else if (command_text == L"Wyoming" || command_text == L"wyoming")
			{
				return L"The capital of Wyoming is Cheyenne...rodeos and George Strait...yeehaw unless you're not into all that horse shit";
			}
			else
			{
				return L"Puerto Rico, The Virgin Islands, Guam, the Dominican Republic aren't states dumbass!";
			}
		}
	};
}
