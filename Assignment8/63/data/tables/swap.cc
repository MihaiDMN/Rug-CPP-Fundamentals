#include "../data.ih"

void (Data::*Data::s_swap[Data::N_TYPES][Data::N_TYPES])(Data&) = {
    { &Data::swapDoubleDouble, &Data::swapDoubleWord, &Data::swapDoubleValue },
    { &Data::swapDoubleWord, &Data::swapWordWord, &Data::swapWordValue },
    { &Data::swapDoubleValue, &Data::swapWordValue, &Data::swapValueValue }
};
