#include "person.h"
#include "rwperson.h"
#include <iostream>

using namespace std;
int main()
{
    const size_t numPersons = 5;
    Person people[numPersons];
    readPersons(people, numPersons);
    writePersons(people, numPersons);
}
