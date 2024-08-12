#include "Phonebook.hpp"

PhoneBook::PhoneBook()
{
    index = 0;
}

void PhoneBook::addContact()
{
        std::string input;
        std::cout << "\033[33m" << "Enter first name : " << "\033[0m";
        std::cin >> input;
        Contacts[index % 8].addFirstName(input);
        std::cout << "\033[33m" << "Enter last name : " << "\033[0m";
        std::cin >> input;
        Contacts[index % 8].addLastName(input);
        std::cout << "\033[33m" << "Enter nickname : " << "\033[0m";
        std::cin >> input;
        Contacts[index % 8].addNickName(input);
        bool validNumber;
        do {
            validNumber = true;
            std::cout << "\033[33m" << "Enter phone number : " << "\033[0m";
            std::cin >> input;
            for (std::string::size_type i = 0; i < input.size(); ++i) {
                if (!isdigit(input[i])) {
                    validNumber = false;
                    std::cout << "\033[31m" << "Invalid phone number. Please enter only numbers.\n" << "\033[0m";
                    break;
                }
            }
        } while (!validNumber);
        Contacts[index % 8].addPhoneNumber(input);
        std::cout << "\033[33m" << "Enter Darkest Secret : " << "\033[0m";
        std::cin >> input;
        Contacts[index % 8].addDarkestSecret(input);
        index++;
}

void PhoneBook::searchContact()
{
   std::cout << "Enter index of Contact : ";
   std:: cin >> index;
    if (index >= 0 && index < 8)
         Contacts[index].showContact();
    else
         std::cout << "\033[31m" << "Invalid index\n" << "\033[0m" << std::endl;
}

void PhoneBook::printAll(){

    for(int i = 0; i < 8;i++)
    {
        std::cout<< std::setw(10) << i;
        Contacts[i].showEssentialInfos();
    }
}

int main()
{
    PhoneBook PhoneBook;
    std::cout << "\033[32m" << "\nWelcome to the Phonebook!\n\n" << "\033[0m" << std::endl;
    std::cout << "\033[33m" << "Options : \n" << "\033[0m" << std::endl;
    std::cout << "\033[33m" << "1. ADD\n" << "\033[0m" << std::endl;
    std::cout << "\033[33m" << "2. SEARCH\n" << "\033[0m" << std::endl;
    std::cout << "\033[33m" << "3. EXIT\n" << "\033[0m" << std::endl;
    while(1)
    {
        std::string input;
        std::cout << "\033[36m" << "Enter your choice : " << "\033[0m";
        std::cin >> input;
        if (input == "ADD")
            PhoneBook.addContact();
        else if (input == "SEARCH"){
            PhoneBook.printAll();
            PhoneBook.searchContact();
        }
        else if (input == "EXIT")
        {
            std::cout << "\033[31m" << "Goodbye!\n" << "\033[0m" << std::endl;
            break;
        }
        else
            std::cout << "\033[31m" << "\nInvalid choice\n" << "\033[0m" << std::endl;
    }

}
