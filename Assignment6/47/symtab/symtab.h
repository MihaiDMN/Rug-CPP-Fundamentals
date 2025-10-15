#ifndef INCLUDED_SYMTAB_H
#define INCLUDED_SYMTAB_H

#include <string>
#include "../symbol/symbol.h"

class Symtab
{
    Symbol **d_data;
    size_t d_size;
    size_t d_capacity;
    
    public:
        Symtab();
        ~Symtab();
        
        size_t size() const;
        
        size_t findIdx(std::string const &ident);
        Symbol &find(std::string const &ident);
        
        Symbol &at(size_t idx);
        Symbol const &at(size_t idx) const;

    private:
        void insertAt(size_t pos, std::string const &ident);
        void expand();
};

#endif
