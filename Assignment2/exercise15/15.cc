#include <iostream>

using namespace std;
int main(int argc, char *argv[])
{
	++argv;
	int n = argc - 1;
	int combinations = 1 << n;
	for (int i = 0; i < combinations; ++i)
	{
		cout << i + 1 << ": ";
		for (int j = 0; j < n; ++j)
		{
			if (i & (1 << j))
				cout << argv[j] << " ";
		}
		cout << "\n";
	}
}
