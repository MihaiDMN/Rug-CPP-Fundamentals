#include "main.ih"

int main(int argc, char **argv, char **environ)
{
    size_t nIterate = stoul(argv[1]);
    bool copy = (argc == 2); 

    if (argc > 2)
        copy = false;

    Strings test(nIterate, copy);
    test.iterate(environ);
}

