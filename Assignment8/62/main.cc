#include "main.ih"

int main()
{
    double *arr = new double[10];
    for (int i = 0; i < 10; ++i) arr[i] = i + 0.5;

    Data a(arr);                     // DOUBLE
    Data b(std::string("hello"));    // WORD
    Data c((size_t)12345);           // VALUE

    Data bcopy(b, Data::WORD);
    Data d(std::move(b), Data::WORD);

    delete[] arr;
    // destructor automatically cleans up, no manual destroy needed
}

