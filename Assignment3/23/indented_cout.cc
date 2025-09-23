#include "indent.h"
#include "indent_internal.ih"
#include <iostream>
#include <string>

using namespace std;

ostream& indented_cout()
{
    disable_step_size_change();
    for (size_t i = 0; i < indentation_depth; ++i)
    {
        cout.put(' ');
    }
    return cout;
}