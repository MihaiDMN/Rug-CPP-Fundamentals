#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input_line;

    cout << "Enter a value to compute the sqrt of (<= 0 to stop): ";

    while (getline(cin, input_line))
    {
        double target = stod(input_line);

        if (target <= 0)
            break;

        double x0 = 1;
        double x1 = target;
        double sqr;
        size_t iteration_count = 0;

        while (true)
        {
            ++iteration_count;
            x1 = x0 + (target - x0 * x0) / (2 * x0);
            sqr = x0 * x1;

            if (x0 == x1)
            {
                cout << "sqrt(" << target << ") is " << x0 << '\n';
                break;
            }

            cout << iteration_count << ": " << "x0: " << x0
                << ", x1 = " << x1 << ", sqr is: " << sqr
                << '\n';

            x0 = x1;
        }

        cout << "Enter a value to compute the sqrt of (<= 0 to stop): ";
    }
}

