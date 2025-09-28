#include "quicksort.h"
#include <iostream>
#include <string>

using namespace std;
int main()
{
    string line = "bannaca cherry apple";
    size_t spaceCount = 0;
    for (char character : line)
    {
        if (character == ' ')
            ++spaceCount;
    }
    string words[spaceCount];
    size_t pos1 = 0;
    size_t pos2 = 0;
    for (size_t index = 0; index != spaceCount; ++index)
    {
        pos2 = line.find(' ', pos1);
        string word = line.substr(pos1, pos2 - pos1);
        words[index] = word;
        cout << words[index] << " ";
        pos1 = pos2 + 1;
        
    }
    words[spaceCount - 1] = line.substr(pos1, line.size() - 1);
    for (size_t index = 0; index != spaceCount; ++index)
        cout << words[index];
    cout << "Before " << line << "\n";
    quicksort(line, 0, line.length());
    cout << "After " << line << "\n";
}
