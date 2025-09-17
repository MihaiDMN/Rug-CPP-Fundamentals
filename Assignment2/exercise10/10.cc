#include <iostream>
#include <string>

using namespace std;
int main()
{
	string line;
	getline(cin, line);
	string blanks = " \t\n\r\f\v";
	size_t first =  line.find_first_not_of(blanks);
	size_t last = line.find_last_not_of(blanks);
	string trimmed = line.substr(first, last - first + 1);
	cout << "`" << trimmed << "'\n"; 
}
