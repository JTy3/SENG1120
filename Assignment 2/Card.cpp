// Card.cpp
// Author: Jacob Tye (Git: JTy3)
// Date: 21-10-2020
// Description: Assignment 2 - Card Implementation File

#include "card.h"

//Constructor Implementation
Card::Card()
{
	value = 0;
}

// Destructor Implementation
Card::~Card()
{
	face = "";
	value = 0;
	faceUp = NULL;
}

// Setter Implementation
void Card::setFace(string newFace)
{
	face = newFace;
}

void Card::setValue(int newValue)
{
	value = newValue;
}

void Card::setFaceUp(bool newFaceUp)
{
	faceUp = newFaceUp;
}

// Getter Implementation
string Card::getFace()
{
	return face;
}

int Card::getValue()
{
	return value;
}

bool Card::getFaceUp()
{
	return faceUp;
}

// Cout overload implementation
std::ostream &operator<<(std::ostream &os, Card card)
{
	os << card.getFace() << " ";
	return os;
}
