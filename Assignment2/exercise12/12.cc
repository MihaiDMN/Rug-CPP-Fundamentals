#include <iostream>
#include <string>

using namespace std;
int main()
{
	string numbers;
	cin >> numbers;
	size_t sum = 0;
	for (size_t i = 0; i != numbers.length(); ++i)
	{
		int digit = numbers[i] - '0';
		sum = sum + digit;
	}
	
	while (sum >= 10)
	{
		size_t copy = sum;
		sum = 0;
		while (copy > 0)
		{
			sum += copy % 10;
			copy /= 10;
		}
	}
	
	if (sum == 3 || sum == 6 || sum == 9)
		cout << "divisible by 3\n";
	else
		cout << "not divisible by 3\n";
}
