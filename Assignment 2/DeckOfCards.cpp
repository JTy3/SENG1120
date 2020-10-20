// DeckOfCards.h
// Author: Jacob Tye (Git: JTy3)
// Date: 14-9-2020
// Description: Assignment 1 - DeckOfCards Implementation File

#include "DeckOfCards.h"

// -------------------------------------------------------------------
// <-- CONSTRUCTOR IMPLEMENTATION METHODS -->
// Initialise DeckOfCards objects when given a string and when not
// -------------------------------------------------------------------

// Initialised with data
DeckOfCards::DeckOfCards()
{
    Card tempCard;
    for (int i = 0; i < 10; i++)
    {
        string stringValue = "Number" + i;
        tempCard.setFace(stringValue);
        data.enqueue(tempCard);
    }
}

// -------------------------------------------------------------------
// <-- DESTRUCTOR IMPLEMENTATION METHOD -->
// Automatically invoked upon out of scope or deleted instance of DeckOfCards object
// -------------------------------------------------------------------

DeckOfCards::~DeckOfCards()
{
}

// -------------------------------------------------------------------
// <-- MUTATOR IMPLEMENTATION METHOD -->
// Automatically invoked upon out of scope or deleted instance of Queue object
// -------------------------------------------------------------------

Node<Card> DeckOfCards::draw()
{
    return data.dequeue();
}

void DeckOfCards::showDeck()
{
    data.showQueue();
}

ostream &operator<<(ostream &out, DeckOfCards &DeckOfCards)
{
    DeckOfCards.showDeck();
}