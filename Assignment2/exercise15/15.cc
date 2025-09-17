#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    ++argv;
    size_t n_combinations = 1u << (argc - 1);

    for (size_t cur_combination = 0; cur_combination != n_combinations; 
        ++cur_combination) 
    {
        cout << cur_combination + 1 << ":";
        const size_t num_args = static_cast<size_t>(argc - 1);
        for (size_t n_index = 0; n_index != num_args; ++n_index)
        {                          
            if ((cur_combination >> n_index) & 1)
                cout << ' ' << argv[n_index];
        }
        cout << '\n';
    }
}

