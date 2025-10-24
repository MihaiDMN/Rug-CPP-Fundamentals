#include "../data.ih"

void (Data::*Data::s_move[])(Data &&) = {
    &Data::moveDouble,
    &Data::moveWord,
    &Data::moveValue
};
