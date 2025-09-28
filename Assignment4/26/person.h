#ifndef INCLUDED_PERSON_H
#define INCLUDED_PERSON_H

#include <string>
#include <iostream>

class Person
{
    std::string d_name; // name of person
    std::string d_address; // address field
    std::string d_phone; // telephone number
    size_t d_mass; // the mass in kg
    
    public:
        Person();
        Person(std::string const &name, std::string const &address,
               std::string const &phone, size_t mass);
        void setName(std::string const &name); // set the name of a person
        void setAddress(std::string const &address); // set the adress
        void setPhone(std::string const &phone); // set the phone
        void setMass(size_t mass); // set the mass
        static bool isDigits(char const *characters, std::string const &object);
        //check if the number entered is valid
        std::string const &name() const;
        std::string const &address() const;
        std::string const &phone() const;
        size_t mass() const;
        
        void insert(std::ostream &out) const; 
        // insert the information of a person into the outstream
        void extract(std::istream &in);
        // take in some input from the instream and make it into a person class
};

#endif
