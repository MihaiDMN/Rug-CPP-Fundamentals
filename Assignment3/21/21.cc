#include "quicksort.h"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    string input = "banana cherry apple";

    size_t count = 1;
    for (char character : input)
    {
        if (character == ' ')
            ++count;
    }
    string words[count];
    separateWords(count, words, input);
    quicksort(words, 0, count);
    // v This outputs each word in the string, remove this loop and comment and tie it into the quicksort instead
    for (size_t index = 0; index != count; ++index)
        cout << words[index] << '\n';
    

}
