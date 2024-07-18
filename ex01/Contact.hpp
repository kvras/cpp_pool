#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
class contact {
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string Darkest_secret;
    public:
        void add_first_name(std::string input);
        void add_last_name(std::string input);
        void add_nickname(std::string input);
        void add_Darkest_secret(std::string input);
        void add_phone_number(std::string input);
        void print_contact(int index);
};

#endif