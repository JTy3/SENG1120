#ifndef CARDDECK
#define CARDDECK

#include "Queue.h"
#include "Card.h"
#include <iostream>
#include <sstream>
#include <cstdlib>

using namespace std;
class DeckOfCards
{
public:
	DeckOfCards(); //Constructor

	~DeckOfCards(); // Destructor

	void shuffle();

	Card draw(); 

	Queue<Card> *getdata();

private:
	Queue<Card> *data;
};

std::ostream &operator<<(std::ostream &strm, DeckOfCards &cards);

#endif