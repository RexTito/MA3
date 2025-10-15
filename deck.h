#ifndef MA3_DECK_H
#define MA3_DECK_H
#include <vector>
#include "card.h"
//vector is an object, made of data types(complex data types, user defined data types)
class deck {
private:
    std::vector<card> m_card_deck;
public:
    //default constustor, does not exitst until it is anstantiated, has name of class, does not pass back data
    deck();
    //method
    void shuffle();
    //passes back card
    card deal_card();
    //passes back int
    int get_count();
};


#endif //MA3_DECK_H