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
}

// -------------------------------------------------------------------
// <-- DESTRUCTOR IMPLEMENTATION METHOD -->
// Automatically invoked upon out of scope or deleted instance of DeckOfCards object
// -------------------------------------------------------------------

DeckOfCards::~DeckOfCards()
{
    data = NULL;
}

// -------------------------------------------------------------------
// <-- MUTATOR IMPLEMENTATION METHOD -->
// Automatically invoked upon out of scope or deleted instance of Queue object
// -------------------------------------------------------------------

const Node<Card> DeckOfCards::draw()
{
    return data->getFront();
}

// -------------------------------------------------------------------
// <-- ACCESSOR IMPLEMENTATION METHOD -->
// Automatically invoked upon out of scope or deleted instance of Queue object
// -------------------------------------------------------------------

string DeckOfCards::listOfCards() 
{
    string listOfCards = "";
    Node<Card> currentCard = data->getFront();
    return listOfCards;
}

ostream &operator<<(ostream &out, DeckOfCards &DeckOfCards)
{
    
    return out; // Return back the result
}