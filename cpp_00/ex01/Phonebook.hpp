#ifndef Phonebook_HPP
#define Phonebook_HPP
#include <iostream>
#include "Contact.hpp"

class PhoneBook {
    private:
        Contact Contacts[8];
        int index; 
    public:
        PhoneBook();
        void addContact();
        void searchContact();
        void printAll();
};
#endif