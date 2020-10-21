#include "HandOfCards.h"

using namespace std;

HandOfCards::HandOfCards()
{
    // Create a new hand instance
    Queue<Card> hand;
}

HandOfCards::~HandOfCards()
{
}

int HandOfCards::count()
{
    return hand.queueValue();
}

int HandOfCards::countAll()
{
    return hand.queueValue();
}

string HandOfCards::value()
{
    return hand.countDeck();
}

void HandOfCards::faceUp()
{
}

void HandOfCards::add(Card card, const bool faceUp)
{
    // set faceUp
    card.setFaceUp(faceUp);
    // add to tail
    hand.enqueue(card);
}

std::ostream &operator<<(std::ostream &strm, HandOfCards &deck)
{
	strm << deck.value() << "(" << deck.count() << " points)";
	return strm;
}
