#include "Phonebook.hpp"

void phonebook::add_contact()
{
        std::string input;
        std::cout << "\033[33m" << "Enter first name : " << "\033[0m";
        std::cin >> input;
        contacts[index % 8].add_first_name(input);
        std::cout << "\033[33m" << "Enter last name : " << "\033[0m";
        std::cin >> input;
        contacts[index % 8].add_last_name(input);
        std::cout << "\033[33m" << "Enter nickname : " << "\033[0m";
        std::cin >> input;
        contacts[index % 8].add_nickname(input);
        std::cout << "\033[33m" << "Enter phone number : " << "\033[0m";
        std::cin >> input;
        contacts[index % 8].add_phone_number(input);
        std::cout << "\033[33m" << "Enter Darkest Secret : " << "\033[0m";
        std::cin >> input;
        contacts[index % 8].add_Darkest_secret(input);
        index++;
}

void phonebook::search_contact()
{
   std::cout << "Enter index of contact : ";
   std:: cin >> index;
    if (index >= 0 && index < 8)
         contacts[index].print_contact(index);
    else
         std::cout << "\033[31m" << "Invalid index\n" << "\033[0m" << std::endl;
}

int main()
{
    phonebook phonebook;
    std::cout << "\033[32m" << "\nWelcome to the phonebook!\n\n" << "\033[0m" << std::endl;
    std::cout << "\033[33m" << "Options : \n" << "\033[0m" << std::endl;
    std::cout << "\033[33m" << "1. ADD\n" << "\033[0m" << std::endl;
    std::cout << "\033[33m" << "2. SEARCH\n" << "\033[0m" << std::endl;
    std::cout << "\033[33m" << "3. Quit\n" << "\033[0m" << std::endl;
    while(1)
    {
        std::string input;
        std::cout << "\033[36m" << "Enter your choice : " << "\033[0m";
        std::cin >> input;
        if (input == "ADD")
            phonebook.add_contact();
        else if (input == "SEARCH")
            phonebook.search_contact();
        else if (input == "QUIT")
        {
            std::cout << "\033[31m" << "Goodbye!\n" << "\033[0m" << std::endl;
            break;
        }
        else
            std::cout << "\033[31m" << "\nInvalid choice\n" << "\033[0m" << std::endl;
    }

}