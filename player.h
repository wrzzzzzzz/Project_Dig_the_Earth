#ifndef PLAYER_H
#define PLAYER_H
#include "deck.h"

class Player {
   private:
    Card cards_at_hand[13];
	int num_of_cards_at_hand; //when reaching 0, the player wins

   public:
    Player();
    void draw(Deck d); //draw from the deck
    void play(); //play the card(s) when possible
	void sort(); //set the cards in order in a person's hand
    virtual ~Player() {}
};

#endif