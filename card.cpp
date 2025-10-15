#include "card.h"
//implimation
card::card() {
    m_rank = "";
    m_value = 0;
    m_suit = "";
}
card::card(const std::string &suit,const std::string &rank,const int &value) {
    m_rank = rank;
    m_value = value;
    m_suit = suit;
}
std::string card::get_rank() {return m_rank;}
int card::get_value() {return m_value;}
void card::set_value(int value) {m_value = value;}
std::string card::get_card() {return "Card: " + m_rank + " of " + m_suit;}