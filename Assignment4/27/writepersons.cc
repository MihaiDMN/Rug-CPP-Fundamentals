#include "rwperson.h"
#include <iostream>

using namespace std;
void writePersons(const Person array[], size_t size)
{   
    // this function calls the insert funtion of the person class for each person in the array
    for (size_t index = 0; index != size; ++index)
        array[index].insert(cout);
}
