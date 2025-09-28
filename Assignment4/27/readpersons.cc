#include "rwperson.h"
#include <iostream>

using namespace std;
void readPersons(Person array[], size_t size)
{
    // this function calls the extract funtion of the person class for the size of the array
    for (size_t index = 0; index != size; ++index)
    {
        cout << "? ";
        array[index].extract(cin);
    }
}
