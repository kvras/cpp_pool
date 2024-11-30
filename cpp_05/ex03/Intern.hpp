#ifndef INTERN_HPP
#define INTERN_HPP
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"


class Intern{
    public:
        Intern();
        Intern(const Intern& obj);
        ~Intern();
        Intern& operator=(const Intern& obj);

        AForm* makeForm(std::string str1, std::string str2);
};

#endif