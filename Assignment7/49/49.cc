#include <iostream>

using namespace std;
int main(int argc, char *argv[])
{
    size_t iterations = atoi(argv[1]);
    ostream out(cout.rdbuf());
    out.setstate(ios::failbit);
    
    for (size_t idx = 0; idx != iterations; ++idx)
    {
        // if (out.good())
            out << "Iteration: " << idx << "\n";
    }
}
