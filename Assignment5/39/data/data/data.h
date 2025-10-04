#ifndef INCLUDED_DATA_
#define INCLUDED_DATA_

#include "dataimp.h"

class DataImpl;

class Data
{
    DataImpl *d_pimpl;

    public:
        Data();
        bool read();
        void display() const; 
};
        
#endif
