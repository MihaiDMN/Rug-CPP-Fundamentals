#ifndef DATA_H
#define DATA_H

#include <string>
#include <cstddef>

class Data
{
    public:
        enum Type { DOUBLE = 0, WORD =1, VALUE = 2, N_TYPES = 3 };
    
    private:
        union
        {
            double *u_double;
            std::string u_word;
            size_t u_value;
        };
        
        void destroyDouble();
        void destroyWord();
        void destroyValue();
        
        void copyDouble(Data const &other);
        void copyWord(Data const &other);
        void copyValue(Data const &other);

        void moveDouble(Data &&tmp);
        void moveWord(Data &&tmp);
        void moveValue(Data &&tmp);

        void swapDoubleDouble(Data &other);
        void swapDoubleWord(Data &other);
        void swapDoubleValue(Data &other);
        void swapWordWord(Data &other);
        void swapWordValue(Data &other);
        void swapValueValue(Data &other);

        static void(Data::*s_destroy[])();
        static void(Data::*s_copy[])(Data const &);
        static void(Data::*s_move[])(Data &&);
        static void(Data::*s_swap[N_TYPES][N_TYPES])(Data &);
    
    public:
        Data(double *ptr);
        Data(std::string const &str);
        Data(size_t value);
        ~Data();

        Data(Data const &other, Type otherType);
        Data(Data &&tmp, Type otherType);
    
        void destroy(Type type);

        void swap(Data &other, Type thisType, Type otherType);
        
        double *getDouble() const;
        std::string const &getWord() const;
        size_t getValue() const;
};

#endif
