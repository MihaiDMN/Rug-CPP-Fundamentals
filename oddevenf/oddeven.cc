#include <iostream>

using namespace std;
int main()
{
	size_t value;
	cin >> value;
	
	cout << ((value % 2) ? "odd" : "even") << '\n';
	//with %2 we get 1 if odd and 0 if even
	
	cout << ((value / 2) * 2 != value ? "odd" : "even") << '\n';
	//if doubling half the value is not equal to the value it means it is odd
	
	cout << ((value & 1) ? "odd" : "even") << '\n';
	//bitwise and, least significant bit (lsb) = 1 if odd or 0 for even
	
	cout << (((value | 1) == value) ? "odd" : "even") << '\n';
	//bitwise or, if the lsb = 1 then or with 1 will keep the same value 
	
	cout << (((value ^ 1) == value - 1) ? "odd" : "even") << '\n';
	//bitwise xor, if value-1 equals value^1, it's odd
	
	cout << (((value >> 1) << 1 != value) ? "odd" : "even") << '\n';
	//shifting right and then left clears lsb, if changed is odd
}
