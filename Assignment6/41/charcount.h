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
        
        enum Action {APPEND, INSERT, INCREMENT};

        CharCount();
        ~CharCount();
        size_t count(std::istream &in); // count chars in the stream
        CharInfo const &info() const; // acces result
        size_t capacity() const; // report current capacity

    private:
        CharInfo d_info; 
        size_t d_capacity;

        void(CharCount::*d_actions[3])(size_t, unsigned char);        
        Char *rawCapacity(size_t cap);
        void enlarge();
        Action locate(unsigned char character, size_t &index); // find or insert char
        void append(size_t idx, unsigned char character);
        void insert(size_t idx, unsigned char character);
        void increment(size_t idx, unsigned char character);
};

void showChar(unsigned char c);
#endif
