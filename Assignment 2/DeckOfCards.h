// DeckOfCards.h
// Author: Jacob Tye (Git: JTy3)
// Date: 19-10-2020
// Description: Assignment 2 - DeckOfCards Header File

#ifndef ASSIGNMENT_DECK
#define ASSIGNMENT_DECK

#include <iostream>
#include "Queue.h"

using namespace std;

class DeckOfCards
{
public:
    // -------------------------------------------------------------------
    // <-- PUBLIC MEMBERS DEFINITION -->
    // -------------------------------------------------------------------

    // Constructor Declaration
    DeckOfCards();

    // Destructor Declaration
    ~DeckOfCards();

    // Mutator Methods

    // Called to draw a card from the deck
    const Node<Card> draw();

    // Called to shuffle an exisiting deck of cards
    void shuffle();

    // Accessor function for Queue
    string listOfCards();

private:
    // -------------------------------------------------------------------
    // <-- PRIVATE MEMBERS DEFINITION -->
    // -------------------------------------------------------------------
    Queue<Card> *data;
};

ostream &operator<<(ostream &out, DeckOfCards &deck);   // Overriding cout operator

#endif