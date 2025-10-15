#include "deck.h"
#include <algorithm>
#include <iostream>
#include <ostream>
#include "card.h"
#include "random"
deck::deck() {
    shuffle();
}
void deck::shuffle() {
    std::string suits[]={"Clubs","Diamonds","Hearts","Spades"};
    std::string ranks[]={"2","3","4","5","6","7","8","9","10","Jack","Queen","King","Ace"};
    int values[]{2,3,4,5,6,7,8,9,10,11};
    for(int i = 0; i <4; i++) {
        for(int j = 0; j <13; j++) {
            card temp(suits[i],ranks[j],values[j]);
            m_card_deck.push_back(temp);
        }
    }
    std::random_device rd;
    std::mt19937 gen(rd());
    std::shuffle(m_card_deck.begin(), m_card_deck.end(), gen);
    //test code
    for (auto i:m_card_deck)
        std::cout << i.get_card() << std::endl;
};
card deck::deal_card() {
    card temp = m_card_deck.back();
    m_card_deck.pop_back();
    return temp;
};
int deck::get_count() {
    std::cout << "Deck Count: ";
    return m_card_deck.size();
};