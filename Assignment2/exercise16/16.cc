#include <iostream>
#include <string>

enum Utf8Mask: unsigned char
{
    CONT_MASK = 0b11000000,
    MSB_MASK = 0b10000000     
};

using namespace std;
int main()
{
    string line;
    while (getline(cin, line))
    {
        int char_index = static_cast<int>(line.size()) - 1;
        while (char_index >= 0)
        {
            const char byte = line[char_index];
            if ((byte & MSB_MASK) != 0)
            {
                int start = char_index;
                while (start >= 0 && (line[start] & CONT_MASK) == MSB_MASK)
                    --start;
                int char_length = char_index - start + 1;
                cout << line.substr(start, char_length);
                char_index = start - 1;
            }
            else
            {
                cout << byte;
                --char_index;
            }
        }
        cout << "\n";
    }
}

