#ifndef INCLUDED_DATAIMPL_H
#define INCLUDED_DATAIMPL_H

#include <string>

class DataImpl
{
    std::string d_text;
    int d_value = 0;
    std::string d_extra;

    public:
        bool read();
        void display() const;
};

#endif
