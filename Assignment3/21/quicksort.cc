#include "quicksort.h"
#include <iostream>

using namespace std;
int partition(string &line, int left, int right)
{
    char pivot = line[left];
    int i = left + 1;
    int j = right - 1;
    
    while (true)
    {
        while (i <= j && tolower(line[i]) < tolower(pivot)) 
            ++i;
        while (i <= j && tolower (line[j]) > tolower(pivot))
            j--;
        if (i >= j)
            break;
        swap(line[i], line[j]);
        ++i;
        --j;
    }
    swap(line[left], line[j]);
    return j;
}

void quicksort(string &line, int left, int right)
{
    if (left < right - 1)
    {
        int pivotIndex = partition(line, left, right);
        quicksort(line, left, pivotIndex);
        quicksort(line, pivotIndex + 1, right);
    }
}
