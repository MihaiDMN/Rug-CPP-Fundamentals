#ifndef INCLUDED_CHARCOUNT_H
#define INCLUDED_CHARCOUNT_H

#include <istream>

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
            Char *ptr; // pointer to dynamically allocated array of Char structures
            size_t nCharUni; // number of unique chars
        };
        
        enum Action {APPEND, INSERT, INCREMENT};

        CharCount();
        ~CharCount();
        size_t count(std::istream &in); // count chars in the stream
        CharInfo const &info() const; // acces result
        size_t capacity() const; // report current capacity

    private:
        size_t d_capacity;
        CharInfo d_info; 
        static void(CharCount::*const s_actions[3])(size_t, unsigned char);   
        
        Char *rawCapacity(size_t cap);
        void enlarge();
        size_t locate(unsigned char character) const; // find or insert char
        Action actionForIndex(unsigned char character, size_t &idx) const;
        void addChar(size_t idx, unsigned char character, bool shift);
        void append(size_t idx, unsigned char character);
        void insert(size_t idx, unsigned char character);
        void increment(size_t idx, unsigned char character);
};

void showChar(unsigned char character);
#endif
