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
    cout << hand->queueValue() << endl;
    return hand->queueValue();
}

int HandOfCards::countAll()
{
}

Queue<Card> *HandOfCards::value()
{
    return hand;
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

std::ostream &operator<<(std::ostream &strm, HandOfCards &deck)
{
	strm << deck.value()->countDeck();
	return strm;
}
