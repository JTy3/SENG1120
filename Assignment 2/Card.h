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
    // <-- TYPEDEF DEFINITION -->
    // -------------------------------------------------------------------
    typedef std::string value_type;

    // -------------------------------------------------------------------
    // <-- CONSTRUCTORS DEFINITIONS -->
    // -------------------------------------------------------------------

    // Precondition:
    // Postcondition: Card is created and implemented in Card.cpp.
    Card();

    // Precondition:
    // Postcondition: Card is created and implemented in Card.cpp.
    Card(const value_type &face);

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
    void setFace(const value_type &inputData);

    // -------------------------------------------------------------------
    // <-- ACCESSOR METHODS DEFINITIONS -->
    // -------------------------------------------------------------------

    // Precondition: Next Card has been set
    // Postcondition: Returns nextCard pointer variable
    const int *getValue() const;

    // Precondition: Next Card has been set
    // Postcondition: Returns nextCard pointer variable
    int *getValue();

    // Precondition: Previous Card has been set
    // Postcondition: Returns nextCard pointer variable
    const bool *getFaceUp() const;

    // Precondition: Previous Card has been set
    // Postcondition: Returns nextCard pointer variable
    bool *getFaceUp();

    // Decalaration of methods to get data from current Card in linked list

    // Precondition: Data has been set
    // Postcondition: Returns data type_def variable
    value_type getFace() const;

private:
    // -------------------------------------------------------------------
    // <-- PRIVATE MEMBERS DEFINITION -->
    // -------------------------------------------------------------------

    value_type face;  // Just the string stored within the Card
    int value;        // Pointer to a Card object - which is next in the list
    bool faceUp;      // Pointer to a Card object - which is previous in the list
};

#endif