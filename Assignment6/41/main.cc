#include <iostream>
#include "charcount.h"

void showChar(unsigned char c);

int main()
{
    CharCount counter;
    size_t total = counter.count(std::cin);

    std::cout << "Total characters: " << total << '\n';
    std::cout << "Final capacity: " << counter.capacity() << '\n';

    const CharCount::CharInfo &ci = counter.info();
    for (size_t i = 0; i < ci.nCharUni; ++i)
    {
        std::cout << "char ";
        showChar(ci.ptr[i].ch);
        std::cout << ": " << ci.ptr[i].count << " times\n";
    }
}

