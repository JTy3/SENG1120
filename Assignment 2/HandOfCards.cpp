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
    // Count the total value
    int totalValue = 0;
    // Set temp node to be the head of the list
    Node<Card>* tempNode = hand.front();
    for(int i = 0; i < hand.size(); i++)
    {
        if((tempNode->getData().getFaceUp()) == true)
        {
            totalValue += tempNode->getData().getValue();
        }
        tempNode = tempNode->getNext();
    }
    return totalValue;
}

// Counts the total value of all cards
int HandOfCards::countAll()
{
    // Count the total value
    int totalValue = 0;
    // Set temp node to be the head of the list
    Node<Card>* tempNode = hand.front();
    for(int i = 0; i < hand.size(); i++)
    {
        totalValue += tempNode->getData().getValue();
        tempNode = tempNode->getNext();
    }
    return totalValue;
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
