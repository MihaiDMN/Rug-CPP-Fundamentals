#ifndef WRAP_H
#define WRAP_H

#include "data/data.h"
#include <string>

class Wrap
{
    Data d_data;
    Data::Type d_type;

    public:
        Wrap(double *ptr);
        Wrap(std::string const &str);
        Wrap(size_t value);
    
        Wrap(Wrap const &other);
        Wrap(Wrap &&tmp);
        Wrap &operator=(Wrap const &other);
        Wrap &operator=(Wrap &&tmp);
        ~Wrap();
    
        double *doubles() const;
        std::string const &word() const;
        size_t value() const;
        
        Data::Type type() const;
};

#endif

