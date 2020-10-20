#include "HandOfCards.h"

using namespace std;

HandOfCards::HandOfCards()
{
    // Create a new hand instance
    hand = new Queue<Card>();
}

HandOfCards::~HandOfCards()
{
    // Delete hand, avoid memory leak
    delete hand;
}

int HandOfCards::count()
{
}

int HandOfCards::countAll()
{
}

string HandOfCards::value()
{
}

void HandOfCards::faceUp()
{
}

void HandOfCards::add(Card card, const bool faceUp)
{
    // set faceUp
    card.setFaceUp(faceUp);
    // add to tail
    hand->enqueue(card);
}

ostream &operator<<(ostream &out, HandOfCards &cards)
{
    out << cards.value(); // Output the return string of function getFace()
    return out;           // Return back the result
}
