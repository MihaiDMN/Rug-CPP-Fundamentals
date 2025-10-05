#ifndef INCLUDED_LINE_H
#define INCLUDED_LINE_H

#include <string>

class Line
{
    std::string d_line; // the current line read from cin
    std::size_t d_pos = 0; //position of new substring

    public:
        bool getLine(); // returns true if the line contains non-ws characters
        std::string next(); // returns the next substring of non-ws chars from getLine
};

#endif
