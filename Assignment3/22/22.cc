#include <iostream>
#include <string>
#include <utility>
using namespace std;

struct Subject
{
    string eyes;
    int order;    
};

int main(int argc, char *argv[])
{
    int n = stoi(argv[1]);
    
    if (argc == 3)
        srand(stoi(argv[2]));

    Subject queue[n];

    for (int i = 0; i != n; ++i)
    {
        int r = rand();
        string color;
        if (r % 2 == 0)
            color = "brown";
        else
            color = "blue";
        Subject s = {color, i};
        
        if (queue[0].eyes.empty())
            queue[0] = s;
        else
        {
            if (s.eyes == "brown")
            {
                size_t j = 0;
                while (j < i && queue[j].eyes == "brown")
                    ++j;
                swap(queue[j], queue[i]); 
            }
        }
    }
    for (size_t i = 0; i != n; ++i)
        cout << i + 1 << ": " << queue[i].eyes << " (" << queue[i].order <<")\n";

}
