#ifndef INCLUDED_PARSER_H
#define INCLUDED_PARSER_H

#include "line.h"
#include <string>
class Parser
{
    Line d_line;
    bool d_integral;
    
    public:
        enum Return
        {
            NO_NUMBER,
            NUMBER,
            EOLN
        };
        bool reset();
        // it fills d_line with the next input line, returning true if such a line was read
        Return number(double *dest);
        // returns the value stored in the next substring of the just read line
        bool isIntegral() const; 
        // returns the value of its d_integral data member
        std::string next();
        // returns d_line's next substring
    
    private:
        Return convert(double *dest, std::string const &str);
        // handling the conversion from str to a double, also taking care of failing conversions
        bool pureDouble(double *dest, std::string const &str);
        // uses stod to convert the str's content to a double
};
#endif
