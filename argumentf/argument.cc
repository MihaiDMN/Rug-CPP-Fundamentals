#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[])
{
	cout << "Hello " << (argc == 1 ? "World"
						: (argc ==2 ? argv[1]
						: argv[stoul(argv[1])]))
		 << '\n';
}
