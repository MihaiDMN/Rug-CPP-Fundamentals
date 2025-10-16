#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;
ostream &now(ostream &out)
{
    time_t tglobal = time(nullptr);
    tm *tm = localtime(&tglobal);
    out << put_time(tm, "%c");
    return out;
}

int main()
{
    cout << now << "\n";
}
