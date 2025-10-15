#ifndef MA3_CARD_H
#define MA3_CARD_H
#include <string>
// interface for how to use card class, what the card object does
class card {
private:
    //atrubutes
    std::string m_suit;
    std::string m_rank;
    int m_value;
public:
    //accessers,mutater,methods,behavoirs
    card();
    card(const std::string &suit,const std::string &rank,const int &value);
    std::string get_rank();
    int get_value();
    void set_value(int value);
    std::string get_card();
};


#endif //MA3_CARD_H