#include <iostream>
#include <string>

using namespace std;
int main()
{
    size_t count_a = 0;
    size_t count_e = 0; 
    size_t count_i = 0;
    string text;
    while (getline(cin, text))
    {
        for (char letter: text)
        {
            switch(tolower(static_cast<unsigned char>(letter)))
            {
                case 'a': 
                    ++count_a;
                    break;
                case 'e':
                    ++count_e;
                    break;
                case 'i':
                    ++count_i;
                    break;
            }
        }
    }
    cout << "# a-chars: " << count_a
         << ", # e-chars: " << count_e
         << ", # i-chars: " << count_i
         << "\n";
}

