// Card.h
// Author: Jacob Tye (Git: JTy3)
// Date: 14-9-2020
// Description: Assignment 1 - Card Header File

#ifndef ASSIGNMENT_CARD
#define ASSIGNMENT_CARD

#include <iostream>

using namespace std;

class Card
{
public:
    // -------------------------------------------------------------------
    // <-- CONSTRUCTORS DEFINITIONS -->
    // -------------------------------------------------------------------

    // Precondition:
    // Postcondition: Card is created and implemented in Card.cpp.
    Card();
    Card(string face);

    /// -------------------------------------------------------------------
    // <-- DESTRUCTOR DEFINITION -->
    // -------------------------------------------------------------------

    // Precondition:
    // Postcondition: Card is destructed upon deletion
    ~Card();

    // -------------------------------------------------------------------
    // <-- MUTATOR METHODS DEFINITION -->
    // -------------------------------------------------------------------

    // Precondition: Card has been instantiated
    // Postcondition: Card value is set (numeric value)
    void setValue(int value);

    // Precondition: Card has been instantiated
    // Postcondition: Card is placed up or down (Blackjack rule)
    void setFaceUp(bool faceUp);

    // Precondition: Card has been instantiated
    // Postcondition: Card value is set (numeric value and suit)
    void setFace(string inputData);

    // -------------------------------------------------------------------
    // <-- ACCESSOR METHODS DEFINITIONS -->
    // -------------------------------------------------------------------

    // Precondition: Next Card has been set
    // Postcondition: Returns nextCard pointer variable
    int getValue() const;

    // Precondition: Next Card has been set
    // Postcondition: Returns nextCard pointer variable
    int getValue();

    // Precondition: Previous Card has been set
    // Postcondition: Returns nextCard pointer variable
    bool getFaceUp() const;

    // Precondition: Previous Card has been set
    // Postcondition: Returns nextCard pointer variable
    bool getFaceUp();

    // Decalaration of methods to get data from current Card in linked list

    // Precondition: Data has been set
    // Postcondition: Returns data type_def variable
    string getFace() const;

private:
    // -------------------------------------------------------------------
    // <-- PRIVATE MEMBERS DEFINITION -->
    // -------------------------------------------------------------------

    string face;       // Just the string stored within the Card
    int cardValue;   // Pointer to a Card object - which is next in the list
    bool faceUp;     // Pointer to a Card object - which is previous in the list
};

ostream &operator<<(ostream &out, const Card &card);   // Overriding cout operator

#endif