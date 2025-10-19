#include "charcount.ih"

void showChar(unsigned char c);

int main()
{
    CharCount counter;
    const size_t total = counter.count(std::cin);

    std::cout << "Total characters: " << total << '\n';
    std::cout << "Final capacity: " << counter.capacity() << '\n';

    const CharCount::CharInfo &ci = counter.info();

    for (size_t idx = 0; idx < ci.nCharUni; ++idx)
    {
        std::cout << "char ";
        showChar(ci.ptr[idx].ch);
        std::cout << ": " << ci.ptr[idx].count << " times\n";
    }
}

