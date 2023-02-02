
// Playing Cards
// Payton Strenn

#include <iostream>
#include <conio.h>

using namespace std;

//rank variable
enum Rank
{
	
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

//created a new function due to just wanted to get the value of the rank
//in the parameters it call "Card" and names it as card which is where the value will get passed by
string getRank(Card card)
{
	//creating a string called rank so that the value goes into the rank
	string rank;
	switch (card.rank)
	{
	case two:
		rank = "two";
		break;
	case three:
		rank = "three";
		break;
	case four:
		rank = "four";
		break;
	case five:
		rank = "five";
		break;
	case six:
		rank = "six";
		break;
	case seven:
		rank = "seven";
		break;
	case eight:
		rank = "eight";
		break;
	case nine:
		rank = "nine";
		break;
	case ten:
		rank = "ten";
		break;
	case Jack:
		rank = "Jack";
		break;
	case Queen:
		rank = "Queen";
		break;
	case King:
		rank = "King";
		break;
	case Ace:
		rank = "Ace";
		break;
	}

	// after chosen the value is passed into rank
	return rank;

	//the card will have the value of rank 

}

string getSuit(Card card)
{
	//creating a string called suit so that the value chose can be passed in
	string suit;
	switch (card.suit)
	{
	case (hearts):
		suit = "hearts";
		break;
	case (clubs):
		suit = "clubs";
		break;
	case (spades):
		suit = "spades";
		break;
	case (diamonds):
		suit = "diamonds";
		break;
	}
	//after the suit is chosen it returns the value to the string suit
	return suit;
}


void PrintCard(Card card)
{
	//we get the rank from the getRank function
	string rank = getRank(card);
	//we get the rank from the getSuit function
	string suit = getSuit(card);

	//this will print out onto the console
	cout << "The " << rank << " of " << suit << "\n";
}

Card HighCard(Card card1, Card card2)
{
	//determines which rank is higher than the other between two cards
	if (card1.rank > card2.rank)
		return card1;
	else
		return card2;
};


int main()
{

	//Creating HeartsTwo
	Card HeartsTwo;
	HeartsTwo.rank = two;
	HeartsTwo.suit = hearts;
	//Creating AceofSpades
	Card AceofSpades; 
	AceofSpades.rank = Ace;
	AceofSpades.suit = spades;

	PrintCard(HeartsTwo);
	//wouldn't need to printcard Ace of Spades individually due to being able to pass highcard within
	PrintCard(HighCard(HeartsTwo,AceofSpades));

	
	

	(void)_getch();
	return 0;
}
