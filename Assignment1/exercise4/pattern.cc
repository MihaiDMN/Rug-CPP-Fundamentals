#include <iostream>

const char* patterns = R"delimiter(^\s+Encryption key:(\w+)
^\s+Quality=(\d+)
^\s+E?SSID:"([[:print:]]+)"
^\s+ssid="([[:print:]]+)"
)delimiter";

using namespace std;
int main()
{
	cout << patterns;
}
