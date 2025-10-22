#ifndef INCLUDED_NUMBERS_
#define INCLUDES_NUMBERS_

#include <iostream>

class Numbers
{
    size_t d_length = 0;
    int *d_data = nullptr;
    
    public:
        Numbers();
        Numbers(size_t count);
        Numbers(size_t count, int value);
        ~Numbers();
        
        Numbers(Numbers const &other);
        Numbers(Numbers &&tmp);
        Numbers &operator=(Numbers const &other);
        Numbers &operator=(Numbers &&tmp);

        size_t length() const;
        int &at(size_t idx);
        
        void write(std::ostream &out) const;
        void swap(Numbers &other);
};

#endif
