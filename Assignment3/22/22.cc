#include <iostream>
#include <string>
#include <vector>
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
    
    vector<Subject> queue;
    
    for (int i = 0; i != n; ++i)
    {
        int r = rand();
        string color;
        if (r % 2 == 0)
            color = "brown";
        else
            color = "blue";
        Subject s = {color, i};
        
        if (queue.empty())
            queue.push_back(s);
        else
        {
            if (s.eyes == "brown")
            {
                int j = 0;
                while (j < queue.size() && queue[j].eyes == "brown")
                    ++j;
                queue.insert(queue.begin() + j, s);
            }
            else
                queue.push_back(s);
        }
    }
    for (int i = 0; i != queue.size(); ++i)
        cout << i + 1 << ": " << queue[i].eyes << " (" << queue[i].order <<")\n";

}
