#include <iostream>

using namespace std;
int main(int argc, char *argv[])
{
    int input_value;
    cin >> input_value;
    const unsigned int unsigned_value = static_cast<unsigned int>(input_value);
    const int num_bits = sizeof(input_value) * 8;
    cout << input_value << " = ";
    for (int bit_index = num_bits - 1; bit_index >= 0; --bit_index)
        if (bit_index == 0)
            cout << ((unsigned_value >> bit_index) & 1) << " = ";
        else
            cout << ((unsigned_value >> bit_index) & 1);
	
    bool first = true;
    for (int bit_index = num_bits - 1; bit_index >= 0; --bit_index)
    {
        if ((unsigned_value >> bit_index) & 1)
        {
            if (!first)
                cout << " + ";
            cout << (1 << bit_index);
            first = false;
        }
    }
    cout << "\n";
}
