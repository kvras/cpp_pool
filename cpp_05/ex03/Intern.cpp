#include "Intern.hpp"

Intern::Intern(){}

Intern::Intern(const Intern& obj){
    (void)obj;
}

Intern::~Intern(){}

Intern&  Intern::operator=(const Intern& obj){
    (void)obj;
    return *this;
}

AForm* Intern::makeForm(std::string str1, std::string str2){
   
   int nbr = str1[0];
   switch (nbr)
    {
        case 80:
            return new PresidentialPardonForm(str2);
        case 82:
            return new RobotomyRequestForm(str2);
        case 83:
            return new ShrubberyCreationForm(str2);
        default:
            throw std::invalid_argument("Invalid form");
    }
}