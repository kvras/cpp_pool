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
        ShrubberyCreationForm(const std::string& target);
        ShrubberyCreationForm(const ShrubberyCreationForm& shrubberyCreationForm);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& shrubberyCreationForm);
    

        void execute(Bureaucrat const & executor) const;
};

#endif