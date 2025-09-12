#include <iostream>

using namespace std;
int main(int argc, char *argv[])
{
	int value;
	cin >> value;
	unsigned int u = static_cast<unsigned int>(value);
	int n = sizeof(value) * 8;
	cout << value << " = ";
	for (int i = n - 1; i >= 0; --i)
		if (i == 0)
			cout << ((u >> i) & 1) << " = ";
		else
			cout << ((u >> i) & 1);
			
	bool first = true;
	for (int i = n - 1; i >= 0; --i)
	{	
		if ((u >> i) & 1)	
			cout << (1 << i) << " + ";
	}
	cout << "\n";
	
}
