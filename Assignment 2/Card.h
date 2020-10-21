// Card.h
// Author: Jacob Tye (Git: JTy3)
// Date: 21-10-2020
// Description: Assignment 2 - Card Header File

// Add macroguard / libs / namespace
#ifndef ASSIGNMENT_CARD
#define ASSIGNMENT_CARD

#include <sstream>
using namespace std;

class Card
{
public:

	// -------------------------------------------------------------------
	// <-- CONSTRUCTORS DEFINITIONS -->
	// -------------------------------------------------------------------
	Card();

	/// -------------------------------------------------------------------
	// <-- DESTRUCTOR DEFINITION -->
	// -------------------------------------------------------------------
	~Card();

	// -------------------------------------------------------------------
	// <-- MUTATOR METHODS DEFINITION -->
	// -------------------------------------------------------------------
	void setFace(string newFace);
	void setFaceUp(bool newFaceUp);
	void setValue(int newValue);

	// -------------------------------------------------------------------
	// <-- ACCESSOR METHODS DEFINITIONS -->
	// -------------------------------------------------------------------
	string getFace();
	int getValue();
	bool getFaceUp();

private:
	// -------------------------------------------------------------------
	// <-- PRIVATE MEMBERS DEFINITION -->
	// -------------------------------------------------------------------
	string face;
	int value;
	bool faceUp;
};

// Cout operator overloading
std::ostream &operator<<(std::ostream &os, Card card);
#endif