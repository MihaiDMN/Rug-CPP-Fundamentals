#ifndef INCLUDED_CHARCOUNT_H
#define INCLUDED_CHARCOUNT_H

#include <iostream>

class CharCount
{
    public:
        struct Char
        {
            unsigned char ch; // the character
            size_t count; // how many times it appeared
        };
        
        struct CharInfo
        {
            Char *ptr;
            size_t nCharUni; // number of unique chars
        };

        CharCount();
        size_t count(std::istream &in); // count chars in the stream
        CharInfo const &info() const; // acces result

    private:
        CharInfo d_info; 
        
        void locate(unsigned char c); // find or insert char
};

#endif
