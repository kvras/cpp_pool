#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>
#include "Contact.hpp"
class phonebook {
    private:
        contact contacts[8];
        int index; 
    public:
        phonebook() : index(0) {}
        void add_contact();
        void search_contact();
};
#endif