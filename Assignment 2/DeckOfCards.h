// DeckOfCards.h
// Author: Jacob Tye (Git: JTy3)
// Date: 21-10-2020
// Description: Assignment 2 - DeckOfCards Header File

// Add macroguard / libs / namespace
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
	// -------------------------------------------------------------------
	// <-- CONSTRUCTORS DEFINITIONS -->
	// -------------------------------------------------------------------
	DeckOfCards();

	/// -------------------------------------------------------------------
	// <-- DESTRUCTOR DEFINITION -->
	// -------------------------------------------------------------------
	~DeckOfCards();

	// -------------------------------------------------------------------
	// <-- MUTATOR METHODS DEFINITION -->
	// -------------------------------------------------------------------
	void shuffle();
	
	// -------------------------------------------------------------------
	// <-- ACCESSOR METHODS DEFINITION -->
	// -------------------------------------------------------------------
	Card draw();
	string value();

private:
	Queue<Card> *data;
};

// Cout operator overloading
std::ostream &operator<<(std::ostream &strm, DeckOfCards &cards);

#endif