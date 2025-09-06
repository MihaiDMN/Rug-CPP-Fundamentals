#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[])
{
	size_t ip4 =
		(stoul(argv[1]) << 24) |
		(stoul(argv[2]) << 16) |
		(stoul(argv[3]) << 8) |
		(stoul(argv[4]));
	
	size_t masklen = stoul(argv[5]);
	size_t mask = (masklen == 0 ? 0: ~0UL << (32 - masklen));
	
	ip4 &= mask;
	
	cout << ((ip4 >> 24) & 0xFF) << "."
         << ((ip4 >> 16) & 0xFF) << "."
         << ((ip4 >>  8) & 0xFF) << "."
         << ( ip4        & 0xFF) << '\n';
}
