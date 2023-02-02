
// Playing Cards
// Payton Strenn

#include <iostream>
#include <conio.h>

using namespace std;

//rank variable
enum Rank
{
	one=1,
	two=2,
	three=3,
	four=4,
	five=5,
	six=6,
	seven=7,
	eight=8,
	nine=9,
	ten=10,
	Jack = 11,
	Queen = 12,
	King = 13,
	Ace = 14
};

//suit varaible 
enum Suit
{
	hearts,
	clubs,
	spades,
	diamonds
};

//card struct
struct Card {
	Rank rank;
	Suit suit;
};

int main()
{

	(void)_getch();
	return 0;
}
