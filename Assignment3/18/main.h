#include <string>

using namespace std;
struct ReturnValues
{
    bool ok;
    size_t nr;
    string value;
};

ReturnValues combine(int argc, char *argv[]);
bool structCall(int argc, char *argv[]);
void boundCall(int argc, char *argv[]);

