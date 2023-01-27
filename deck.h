#ifndef DECK_H
#define DECK_H
#include "card.h"

const int decksize = 52;

class Deck {
   private:
    Card deck[decksize];
	int next;

   public:
    Deck();

	void shuffle();

	void reset(); //return to the original deck, in order to start a new round

	Card deal();
	//MODIFIES: this
	//EFFECT: return the next card to the player if he cannot play for this time


};

#endif