// Card.h
// Author: Jacob Tye (Git: JTy3)
// Date: 14-9-2020
// Description: Assignment 1 - Card Implementation File

#include "Card.h"

// -------------------------------------------------------------------
// <-- CONSTRUCTOR IMPLEMENTATION METHODS -->
// Initialise Card objects when given a string and when not
// -------------------------------------------------------------------

// Initialised with data
Card::Card(value_type &initialData)
{
    // Set 'data' to the memory dress of the parsed string
    // Similar to function setData, this is so 'data' for this Card remain persistent beyond it's call
    face = initialData;
    faceUp = false;
    cardValue = NULL;
}

// -------------------------------------------------------------------
// <-- DESTRUCTOR IMPLEMENTATION METHOD -->
// Automatically invoked upon out of scope or deleted instance of Card object
// -------------------------------------------------------------------

Card::~Card()
{
    // Set next and prev pointers to NULL to display something being in the destructor
    face = "";
    cardValue = NULL;
    faceUp = NULL;
}

// -------------------------------------------------------------------
// <-- ACCESSOR IMPLEMENTATION METHODS -->
// Getter methods for prev, next and data
// -------------------------------------------------------------------

// Get Data of current Card
Card::value_type Card::getFace() const
{
    return face;
}

// getNext() Initialisers
// Handle both const and non-const function calls - giving the compiler the ability to figure out which is best to use
// Non-const
int Card::getValue()
{
    return cardValue;
}
// Const
int Card::getValue() const
{
    return cardValue;
}

// getPrevious() Initialisers
// Handle both const and non-const function calls - giving the compiler the ability to figure out which is best to use
// Non-const
bool Card::getFaceUp()
{
    return faceUp;
}
// Const
bool Card::getFaceUp() const
{
    return faceUp;
}

// -------------------------------------------------------------------
// <-- MUTATOR IMPLEMENTATION METHODS -->
// Setter methods for prev, next and data
// -------------------------------------------------------------------

// Same as initialising with a value setData needs to reference the memory address of the argument for data persistence
void Card::setFace(const value_type &inputValue)
{
    face = inputValue;
}

// Setting the next Card in the linked list
void Card::setFaceUp(bool inputValue)
{
    // Sets the 'next' Card pointer to the parsed argument
    faceUp = inputValue;
}

// Setting the previous Card in the linked list
void Card::setValue(int inputValue)
{
    // Sets the 'prev' Card pointer to the parsed argument
    cardValue = inputValue;
}

// -------------------------------------------------------------------
// <-- OPERATOR OVERLOADER METHODS -->
// Overload cout operator
// -------------------------------------------------------------------

ostream &operator<<(ostream &out, const Card &card)
{
    out << card.getFace(); // Output the return string of function getFace()
    return out;            // Return back the result
}