#ifndef INCLUDED_FCH_
#define INCLUDED_FCH_

#include <string>
#include <fstream>

class Fch
{
    enum Action
    {
        ASK,
        CHANGE_ALL,
        NO_CHANGES
    };
    
    std::ifstream d_input;
    std::string d_target;
    std::string d_replacement;
    std::string d_line;
    Action d_action = ASK;
    
    public:
        Fch(char const *fname);
        int run();
    
    private:
        void ask(size_t pos);
        void changeAll(size_t pos);
        bool findTarget(size_t &pos);
        void modify(size_t pos);
        bool openInput(char const *fname);
        void process();
        char request() const;
        bool requestedN(char answer) const;
        void searchReplace();
        void showModification(size_t pos) const;
        void insertLine() const;
        void processLine();
        void handleAction(size_t &pos);
};

#endif
