#ifndef CARD_H
#define CARD_H

enum Suit {
    CLUBS, DIAMONDS, HEARTS, SPADES //clubs<diamonds<hearts<spades
};

extern const char *SuitNames[SPADES+1];

enum Spot {
    THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN,
    JACK, QUEEN, KING, ACE, TWO
};

extern const char *SpotNames[TWO+1];

struct Card {
    int spot;
    int suit;
};

#endif