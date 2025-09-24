#include "rwperson.h"
#include <iostream>

using namespace std;
void readPersons(Person array[], size_t size)
{
    for (size_t index = 0; index != size; ++index)
    {
        cout << "? ";
        array[index].extract(cin);
    }
}
