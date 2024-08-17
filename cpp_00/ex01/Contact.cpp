#include "Contact.hpp"

void Contact::addFirstName(std::string input) {
    firstName = input;
}

void Contact::addLastName(std::string input) {
    lastName = input;
}

void Contact::addNickName(std::string input) {
    nickName = input;
}

void Contact::addDarkestSecret(std::string input) {
    darkestSecret = input;
}

void Contact::addPhoneNumber(std::string input) {
    phoneNumber = input;
}

void Contact::showContact(void)
{
    if (firstName.empty())
        return ;
    printWord(firstName);
    printWord(lastName);
    printWord(nickName);
    printWord(phoneNumber);
    printWord(darkestSecret);
    std::cout << "|" << std::endl;
}

void Contact::showEssentialInfos(void)
{
    printWord(firstName);
    printWord(lastName);
    printWord(nickName);
    std::cout << "|" << std::endl;
}

void printWord(std::string str)
{
	std::cout << '|';
	if (str.length() > 10)
		std::cout << std::setw(10) << str.substr(0, 9) + '.';
	else
		std::cout << std::setw(10) << str;
}
