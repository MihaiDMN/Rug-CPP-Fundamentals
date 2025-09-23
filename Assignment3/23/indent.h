#ifndef INDENT_H
#define INDENT_H

#include <iostream>

std::ostream& indented_cout();
void indent_more();
void indent_less();
void reset_indentation();
void step_size(size_t new_step_size);

#endif