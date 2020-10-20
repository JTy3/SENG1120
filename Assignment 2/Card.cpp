#include "card.h"

//Constructor
Card::Card()
{
	value = 0;
}

//Deconstructor
Card::~Card()
{
	//On card deconstruction
}

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

std::ostream &operator<<(std::ostream &os, Card card)
{
	os << card.getFace() << " ";
	return os;
}
