#include <iostream>
#include <string>

using namespace std;
int main()
{
	size_t count_a = 0, count_e = 0, count_i = 0;
	string text;
	while (getline(cin, text))
	{
		for (size_t i = 0; i != text.length(); ++i)
		{
			if (text[i] == 'a' || text[i] == 'A')
				count_a++;
			if (text[i] == 'e' || text[i] == 'E')
				count_e++;
			if (text[i] == 'i' || text[i] == 'I')
				count_i++;
		}
	}
	cout << "# a-chars: " << count_a
         << ", # e-chars: " << count_e
         << ", # i-chars: " << count_i
         << std::endl;
}
// ./9 < flow.txt
// # a-chars: 214, # e-chars: 441, # i-chars: 223
