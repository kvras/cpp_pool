#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <string>

#include "AForm.hpp"

class PresidentialPardonForm : public AForm{
    private:
        std::string target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm& presidentialPardonForm);
        ~PresidentialPardonForm();
        PresidentialPardonForm& operator=(const PresidentialPardonForm& presidentialPardonForm);


        PresidentialPardonForm(const std::string& target);
        void execute(Bureaucrat const & executor) const;;
};

#endif