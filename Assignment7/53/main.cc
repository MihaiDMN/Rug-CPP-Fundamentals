#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    double value = 12.04;
    cout 
       << "std display:      \"" << setw(15) << value << "\"\n"
       << "left aligned:     \"" << left << setw(15) << value << right << "\"\n"
       << "right aligned:    \"" << right << setw(15) << value << "\"\n"
       << "3 digits:         \"" << setw(15) << setprecision(1) << fixed << value << "\"\n"
       << "4-digit fraction: \"" << setw(15) << setprecision(4) << fixed << value << "\"\n"
       << "std display:      \"" << setw(15) << defaultfloat << value << "\"\n";
}
