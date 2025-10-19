#ifndef INCLUDED_STRINGS_
#define INCLUDED_STRINGS_

#include <iosfwd>

class Strings
{
    size_t d_size;
    size_t d_capacity;
    std::string *d_str;

    public:
        struct POD
        {
            size_t      size;
            std::string *str;
        };

        Strings();
        Strings(size_t argc, char **argv);
        Strings(char **environLike);
        Strings(std::istream &in);
        ~Strings();

        void swap(Strings &other);   
        void reserve(size_t newCapacity);
        void resize(size_t newSize);           

        size_t size() const;
        size_t capacity() const;
        std::string const *data() const;
        POD release();

        std::string const &at(size_t idx) const;
        std::string &at(size_t idx);

        void add(std::string const &next);          // add another element

    private:
        void fill(char **ntbs);                   // fill prepared d_str

        std::string &safeAt(size_t idx) const;      // private backdoor
        void enlarge();
        void destroy();
        std::string *rawStrings(size_t n);
        
        std::string *newStorage(size_t newCapacity);
        static size_t count(char **environLike);   // # elements in env.like
};

inline size_t Strings::size() const         // potentially dangerous practice:
{                                           // inline accessors
    return d_size;
}

inline std::string const *Strings::data() const
{
    return d_str;
}

inline std::string const &Strings::at(size_t idx) const
{
    return safeAt(idx);
}

inline std::string &Strings::at(size_t idx)
{
    return safeAt(idx);
}

        
#endif

