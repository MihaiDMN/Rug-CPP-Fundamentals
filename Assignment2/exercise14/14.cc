#include <iostream>

using namespace std;
int main()
{
	double x_0 = 1, x_1, y;
	int i = 0;
	cout << "Enter a value to compute the sqrt of (<= 0 to stop): ";
	cin >> y;
	while (y != 0)
	{
		i = 0;
		x_1 = x_0 + (y - x_0 * x_0) / (2 * x_0);
		while (true)
		{
			if (x_1 == x_0)
				break;
			++i;
			cout << i << ": " << "x0: " << x_0 << ", x1 = "
				 << x_1 <<", sqr is: " << x_1 * x_1 << "\n";
			x_0 = x_1;
			x_1 = x_0 + ((y - x_0 * x_0) / (2 * x_0));
		}
		cout << "sqrt(" << y << ") is " << x_0 << "\n";
		cout << "Enter a value to compute the sqrt of (<= 0 to stop): ";
		cin >> y;
		x_0 = 1;
	}
}
