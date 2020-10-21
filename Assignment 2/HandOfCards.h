// HandOfCards.h
// Author: Jacob Tye (Git: JTy3)
// Date: 21-10-2020
// Description: Assignment 2 - HandOfCards Header File

// Add macroguard / libs / namespace
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
    // -------------------------------------------------------------------
    // <-- CONSTRUCTORS DEFINITIONS -->
    // -------------------------------------------------------------------
    HandOfCards();

    // -------------------------------------------------------------------
    // <-- DESTRUCTOR DEFINITIONS -->
    // -------------------------------------------------------------------
    ~HandOfCards();

    // -------------------------------------------------------------------
	// <-- ACCESSOR METHODS DEFINITION -->
	// -------------------------------------------------------------------
    int count();
    int countAll();
    string value();

    // -------------------------------------------------------------------
	// <-- MUTATOR METHODS DEFINITION -->
	// -------------------------------------------------------------------
    void faceUp();
    void add(Card card, const bool faceUp);

private:
    Queue<Card> hand;
};

// Cout operator overloading
std::ostream &operator<<(std::ostream &strm, HandOfCards &cards);

#endif