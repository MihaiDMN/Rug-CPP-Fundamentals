#include "dataimp.h"
#include <iostream>
using namespace std;

bool DataImpl::read()
{
    d_text.clear();
    cin >> d_value;
    return cin.good();
}
