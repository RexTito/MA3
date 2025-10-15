#include <chrono>
#include <iostream>
#include "deck.h"
#include "card.h"

int main() {
    deck deck;
    std::cout << std::endl << deck.get_count();
    std::cout << std::endl << deck.deal_card().get_card();
    std::cout << std::endl << deck.get_count();
    std::cout << std::endl << deck.deal_card().get_card();
    std::cout << std::endl << deck.get_count();
    return 0;
}
