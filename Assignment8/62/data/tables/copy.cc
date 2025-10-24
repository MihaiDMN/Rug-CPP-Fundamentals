#include "../data.ih"

void (Data::*Data::s_copy[])(Data const&) = {
    &Data::copyDouble,
    &Data::copyWord,
    &Data::copyValue
};
