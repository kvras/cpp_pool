#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <string>
#include <iostream>
#include "AForm.hpp"
#include <fstream>
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public AForm{
    private:
        std::string target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm& shrubberyCreationForm);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& shrubberyCreationForm);
    

        ShrubberyCreationForm(const std::string& target);
        void execute(Bureaucrat const & executor) const;
};

#endif