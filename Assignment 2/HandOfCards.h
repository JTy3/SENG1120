#ifndef CARDHAND
#define CARDHAND

#include "queue.h"
#include "Card.h"
#include <iostream>
#include <sstream>
#include <cstdlib>

using namespace std;
class HandOfCards
{
public:
	HandOfCards(); //Constructor

	~HandOfCards(); // Destructor

	int count();

    int countAll();

    string value();

    void faceUp();

    void add(Card card, const bool faceUp);

private:
	Queue<Card> *hand;
};

std::ostream &operator<<(std::ostream &strm, HandOfCards &cards);

#endif