#include <iostream>
#include <string>

using namespace std;
int main()
{
	string line;
	while (getline(cin, line))
	{
		int i = static_cast<int>(line.size()) - 1;
		while (i >= 0)
		{
			int def_len = 1;
			char byte = line[i];
			if ((byte & 0b10000000) != 0)
			{
				int start = i;
				while (start >= 0 && (line[start] & 0b11000000) == 0b10000000)
					--start;
				def_len = i - start + 1;
				i = start;
			}
			cout << line.substr(i, def_len);
			i--;
		}
		cout << "\n";
	}
}
