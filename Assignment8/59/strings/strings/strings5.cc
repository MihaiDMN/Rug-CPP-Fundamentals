#include "strings.ih"

Strings::Strings(size_t nIterate, bool copy)
:
    d_size(0),
    d_str(nullptr),
    d_enlarge(copy ? &Strings::enlargeByCopy : &Strings::enlargeByMove),
    d_nIterate(nIterate)
{}
