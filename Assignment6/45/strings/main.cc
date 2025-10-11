#include "strings.ih"
#include <iostream>
int main()
    {
        Strings strings;
        strings.add("hello");
        strings.add("world");
        for (size_t idx = 0, end = strings.size(); idx != end; ++idx)
            cout << "line " << idx + 1 << ": " << strings.at(idx) << '\n';
    }
