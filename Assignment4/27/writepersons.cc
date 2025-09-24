#include "rwperson.h"
#include <iostream>

using namespace std;
void writePersons(const Person array[], size_t size)
{
    for (size_t index = 0; index != size; ++index)
        array[index].insert(cout);
}
