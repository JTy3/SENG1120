// HandOfCards.cpp
// Author: Jacob Tye (Git: JTy3)
// Date: 21-10-2020
// Description: Assignment 2 - HandOfCards Implementation File

#include "HandOfCards.h"

using namespace std;

// Constructor Implementation
HandOfCards::HandOfCards()
{
    Queue<Card> hand;
}


// Destructor Implementation
HandOfCards::~HandOfCards()
{

}

// Counts the total value of all face up cards
int HandOfCards::count()
{
    return hand.queueValue();
}

// Counts the total value of all cards
int HandOfCards::countAll()
{
    return hand.queueValue();
}

// Returns a string to print for all cards in the hand
string HandOfCards::value()
{
    return hand.countDeck();
}

// Makes all cards in a hand face up
void HandOfCards::faceUp()
{
}

// Adds a card to the hand
void HandOfCards::add(Card card, const bool faceUp)
{
    card.setFaceUp(faceUp);
    hand.enqueue(card);
}

std::ostream &operator<<(std::ostream &strm, HandOfCards &deck)
{
	strm << deck.value() << "(" << deck.count() << " points)";
	return strm;
}
