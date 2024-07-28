#ifndef Contact_HPP
#define Contact_HPP
#include <iostream>
#include <iomanip>

class Contact {
    private:
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string phoneNumber;
        std::string darkestSecret;
    public:
        void addFirstName(std::string input);
        void addLastName(std::string input);
        void addNickName(std::string input);
        void addDarkestSecret(std::string input);
        void addPhoneNumber(std::string input);
        void showContact(void);
        void showEssentialInfos(void);
};
void printWord(std::string str);
#endif