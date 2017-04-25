#pragma once
#include "Matterbot.h"

namespace lospi
{
	struct UselessFacts : ICommand {
		std::wstring get_name() override {
			return L"fact";
		}

		std::wstring get_help() override {
			return L"`fact [1-100]`: `number` will return a useless fact.";
		}

		std::wstring handle_command(const std::wstring &team, const std::wstring &channel,
			const std::wstring &user, const std::wstring &command_text) override {
			if (command_text == L"1")
			{
				return L"There is one piece of silk for every kernel of corn AND every row of corn contains exactly the same number of kernels";
			}
			else if (command_text == L"2")
			{
				return L"If all the females in a group of clownfish die a male will change its gender in order to keep its group alive.";
			}
			else if (command_text == L"3")
			{
				return L"A Pineapple is actually a bunch of small berries fused together into a single mass.";
			}
			else if (command_text == L"4")
			{
				return L"Barbie's full name is Barbara Millicent Roberts.";
			}
			else if (command_text == L"5")
			{
				return L"Your stomach has to produce a new layer of mucus every 2 weeks otherwise it will digest itself.";
			}
			else if (command_text == L"6") 
			{
				return L"A pig's orgasm lasts for 30 minutes.";
			}
			else if (command_text == L"7")
			{
				return L"No word in the English language rhymes with month, orange, silver and purple.";
			}
			else if (command_text == L"8")
			{
				return L"The very first bomb dropped by the Allies on Berlin during World War II Killed the only elephant in the Berlin Zoo.";
			}
			else if (command_text == L"8")
			{
				return L"More people are killed annually by donkeys than airplane crashes.";
			}
			else if (command_text == L"9")
			{
				return L"A 'jiffy' is a unit of time for 1/100th of a second.";
			}
			else if (command_text == L"10")
			{
				return L"A whale's penis is called a dork.";
			}
			else if (command_text == L"11")
			{
				return L"It has NEVER rained in Calama, a town in the Atacama Desert of Chile.";
			}
			else if (command_text == L"12")
			{
				return L"A giraffe can go without water longer than a camel.";
			}
			else if (command_text == L"13")
			{
				return L"It costs more to buy a new car today in the United States than it cost Christopher Columbus to equip and undertake three voyages to and from the New World.";
			}
			else if (command_text == L"14")
			{
				return L"More people are killed annually by donkeys than airplane crashes.";
			}
			else if (command_text == L"15")
			{
				return L"The plastic things on the end of shoelaces are called aglets.";
			}
			else if (command_text == L"16")
			{
				return L"Daylight Saving Time is not observed in most of the state of Arizona and parts of Indiana.";
			}
			else if (command_text == L"17")
			{
				return L"Bees have 5 eyes. There are 3 small eyes on the top of a bee's head and 2 larger ones in front.";
			}
			else if (command_text == L"18")
			{
				return L"One-fourth of the world's population lives on less than $200 a year.  Ninety million people survive on less than $75 a year.";
			}
			else if (command_text == L"19")
			{
				return L"Count the number of cricket chirps in a 15-second period, add 37 to the total, and your result will be very close to the actual outdoor Fahrenheit temperature.";
			}
			else if (command_text == L"20")
			{
				return L"Butterflies taste with their hind feet.";
			}
			else if (command_text == L"21")
			{
				return L"Only female mosquito’s' bite and most are attracted to the color blue twice as much as to any other color.";
			}
			else if (command_text == L"22")
			{
				return L"If one places a tiny amount of liquor on a scorpion, it will instantly go mad and sting itself to death.";
			}
			else if (command_text == L"23")
			{
				return L"It is illegal to hunt camels in the state of Arizona.";
			}
			else if (command_text == L"24")
			{
				return L"The first product to have a bar code was Wrigley’s gum.";
			}
			else if (command_text == L"25")
			{
				return L"When you sneeze, air and particles travel through the nostrils at speeds over100 mph.  During this time, all bodily functions stop, including your heart, contributing to the impossibility of keeping one's eyes open during a sneeze.";
			}
			else if (command_text == L"26")
			{
				return L"%60 of all people using the Internet, use it for pornography";
			}
			else if (command_text == L"27")
			{
				return L"Sex burns 360 calories per hour. ";
			}
			else if (command_text == L"28")
			{
				return L"Celery has negative calories! It takes more calories to eat a piece of celery than the celery has in it.";
			}
			else if (command_text == L"29")
			{
				return L"The pop you hear when you crack your knuckles is actually a bubble of gas burning.";
			}
			else if (command_text == L"30")
			{
				return L"In a lifetime the average human produces enough quarts of spit to fill 2 swimming pools.";
			}
			else if (command_text == L"31")
			{
				return L"It's against the law to doze off under a hair dryer in Florida/against the law to slap an old friend on the back in Georgia/against the law to Play hopscotch on a Sunday in Missouri.";
			}
			else if (command_text == L"32")
			{
				return L"The human heart creates enough pressure to squirt blood 30ft.";
			}
			else if (command_text == L"33")
			{
				return L"For some time Frederic Chopin, the composer and pianist, wore a beard on only one side of his face, explaining: \"It does not matter, my audience sees only my right side.\"";
			}
			else if (command_text == L"34")
			{
				return L"1 in every 4 Americans has appeared someway or another on television.";
			}
			else if (command_text == L"35")
			{
				return L"1 in 8 Americans has worked at a McDonalds restaurant.";
			}
			else if (command_text == L"36")
			{
				return L"A pregnant goldfish is called a twit.";
			}
			else if (command_text == L"37")
			{
				return L"The shortest war in history was between Zanzibar and England in 1896. Zanzibar surrendered after 38 minutes.";
			}
			else if (command_text == L"38")
			{
				return L"You were born with 300 bones, but by the time you are an adult you will only have 206.";
			}
			else if (command_text == L"39")
			{
				return L"Women blink nearly twice as much as men.";
			}
			else if (command_text == L"40")
			{
				return L"The strongest muscle (Relative to size) in the body is the tongue.";
			}
			else if (command_text == L"41")
			{
				return L"Average life span of a major league baseball: 7 pitches.";
			}
			else if (command_text == L"42")
			{
				return L"The first CD pressed in the US was Bruce Springsteen's 'Born in the USA'";
			}
			else if (command_text == L"43")
			{
				return L"The thumbnail grows the slowest, the middle nail the fastest, nearly 4 times faster than toenails.";
			}
			else if (command_text == L"44")
			{
				return L"The 57 on Heinz ketchup bottles represents the number of varieties of pickles the company once had.";
			}
			else if (command_text == L"45")
			{
				return L"Tom Sawyer was the first novel written on a typewriter.";
			}
			else if (command_text == L"46")
			{
				return L"The 'Golden Arches' of fast food chain McDonalds is more recognized worldwide than the religious cross of Christianity.";
			}
			else if (command_text == L"47")
			{
				return L"The average talker sprays about 300 microscopic saliva droplets per minute, about 2.5 droplets per word.";
			}
			else if (command_text == L"48")
			{
				return L"Every year 11,000 Americans injure themselves while trying out bizarre sexual positions.";
			}
			else if (command_text == L"49")
			{
				return L"Coca-Cola was originally green.";
			}
			else if (command_text == L"50")
			{
				return L"Men can read smaller print than women; women can hear better.";
			}
			else if (command_text == L"51")
			{
				return L"Average number of people airborne over the US any given hour: 61,000.";
			}
			else if (command_text == L"52")
			{
				return L"The Main Library at Indiana University sinks over an inch every year because when it was built, engineers failed to take into account the weight of all the books that would occupy the building.";
			}
			else if (command_text == L"53")
			{
				return L"111,111,111 x 111,111,111 = 12,345,678,987,654,321";
			}
			else if (command_text == L"54")
			{
				return L"The expression 'to get fired' comes from long ago Clans that wanted to get rid of unwanted people, so they would burn their houses instead of killing them, creating the term 'Got fired'.";
			}
			else if (command_text == L"55")
			{
				return L"\"I am.\" is the shortest complete sentence in the English language.";
			}
			else if (command_text == L"56")
			{
				return L"Hershey's Kisses are called that because the machine that makes them looks like it's kissing the conveyor belt.";
			}
			else if (command_text == L"57")
			{
				return L"The phrase \"rule of thumb\" is derived from an old English law, which stated that you couldn't beat your wife with anything wider than your thumb.";
			}
			else if (command_text == L"58")
			{
				return L"The Eisenhower interstate system requires that one mile in every five must be straight in case of war or emergency, they could be used as airstrips.";
			}
			else if (command_text == L"59")
			{
				return L"The name Jeep came from the abbreviation used in the army. G.P. for 'General Purpose' vehicle.";
			}
			else if (command_text == L"60")
			{
				return L"Honking of car horns for a couple that just got married is an old superstition to insure great sex.";
			}
			else if (command_text == L"61")
			{
				return L"Dr. John Harvey Kellogg introduced Kellogg's Corn Flakes in hopes that it would reduce masturbation.";
			}
			else if (command_text == L"62")
			{
				return L"In medieval France, unfaithful wives were made to chase a chicken through town naked.";
			}
			else if (command_text == L"63")
			{
				return L"The Black Widow spider eats her mate during or after sex.";
			}
			else if (command_text == L"64")
			{
				return L"Napoleon's penis was sold to an American Urologist for $40,000.";
			}
			else if (command_text == L"65")
			{
				return L"Men can read smaller print than women; women can hear better.";
			}
			else if (command_text == L"66")
			{
				return L"When a Hawaiian woman wears a flower over her left ear, it means that she is not available.";
			}
			else if (command_text == L"67")
			{
				return L"The only nation whose name begins with an \"A\", but doesn't end in an \"A\" is Afghanistan.";
			}
			else if (command_text == L"68")
			{
				return L"The only 15-letter word that can be spelled without repeating a letter is uncopyrightable.";
			}
			else if (command_text == L"69")
			{
				return L"Cats have over one hundred vocal sounds, while dogs only have about ten.";
			}
			else if (command_text == L"70")
			{
				return L"Blueberry Jelly Bellies were created especially for Ronald Reagan.";
			}
			else if (command_text == L"71")
			{
				return L"The airplane Buddy Holly died in was the \"American Pie.\" (Thus the name of the Don McLean song.)";
			}
			else if (command_text == L"72")
			{
				return L"Each king in a deck of playing cards represents a great king from history. Spades - King David, Clubs - Alexander the Great, Hearts - Charlemagne, and Diamonds - Julius Caesar.";
			}
			else if (command_text == L"73")
			{
				return L"A piece of paper can be folded no more then 9 times.";
			}
			else if (command_text == L"74")
			{
				return L"You can be fined up to $1,000 for whistling on Sunday in Salt Lake City, Utah.";
			}
			else if (command_text == L"75")
			{
				return L"It is illegal to eat oranges while bathing in California.";
			}
			else if (command_text == L"76")
			{
				return L"There is a town in Newfoundland, Canada called Dildo.";
			}
			else if (command_text == L"77")
			{
				return L"The name of the girl on the statue of liberty is Mother of Exiles.";
			}
			else if (command_text == L"78")
			{
				return L"If done perfectly, a rubix cube combination can be solved in 17 turns.";
			}
			else if (command_text == L"79")
			{
				return L"It takes about 142.18 licks to reach the center of a Tootsie pop.";
			}
			else if (command_text == L"80")
			{
				return L"There are 1,575 steps from the ground floor to the top of the Empire State building.";
			}
			else if (command_text == L"81")
			{
				return L"The world's record for keeping a Lifesaver in the mouth with the hole intact is 7 hrs 10 min.";
			}
			else if (command_text == L"82")
			{
				return L"In the Philippine jungle, the yo-yo was first used as a weapon.";
			}
			else if (command_text == L"83")
			{
				return L"Dueling is legal in Paraguay as long as both parties are registered blood donors.";
			}
			else if (command_text == L"84")
			{
				return L"Texas is also the only state that is allowed to fly its state flag at the same height as the U.S. flag.";
			}
			else if (command_text == L"85")
			{
				return L"All 50 states are listed across the top of the Lincoln Memorial on the back of the $5 bill.";
			}
			else if (command_text == L"86")
			{
				return L"In space, astronauts are unable to cry, because there is no gravity and the tears won't flow.";
			}
			else if (command_text == L"87")
			{
				return L"Chewing gum while peeling onions will keep you from crying.";
			}
			else if (command_text == L"88")
			{
				return L"There are more plastic flamingos in the U.S that there are real ones.";
			}
			else if (command_text == L"89")
			{
				return L"The crack of a whip is actually a tiny sonic boom, since the tip breaks the sound barrier.";
			}
			else if (command_text == L"90")
			{
				return L"Honey is the only food which does not spoil.";
			}
			else if (command_text == L"91")
			{
				return L"Babies are born without kneecaps. They don't appear until the child reaches 2-6 years of age.";
			}
			else if (command_text == L"92")
			{
				return L"The only real person to ever to appear on a pez dispenser was Betsy Ross.";
			}
			else if (command_text == L"93")
			{
				return L"Mozart wrote the nursery rhyme 'twinkle, twinkle, little star' at the age of 5.";
			}
			else if (command_text == L"94")
			{
				return L"Einstein couldn't speak fluently until after his ninth birthday. His parents thought he was mentally retarded.";
			}
			else if (command_text == L"95")
			{
				return L"Al Capone's business card said he was a used furniture dealer.";
			}
			else if (command_text == L"96")
			{
				return L"Thomas Edison, acclaimed inventor of the light bulb, was afraid of the dark.";
			}
			else if (command_text == L"97")
			{
				return L"\"Dreamt\" is the only English word that ends in the letters \"mt.\"";
			}
			else if (command_text == L"98")
			{
				return L"Almonds are a member of the peach family.";
			}
			else if (command_text == L"99")
			{
				return L"Maine is the only state whose name is just one syllable.";
			}
			else if (command_text == L"100")
			{
				return L"Tigers not only have striped fur, they have striped skin!";
			}
			else
			{
				return L"1-100 dumbass!";
			}
		}
	};
}

