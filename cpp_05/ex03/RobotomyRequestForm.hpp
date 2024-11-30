#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <string>
#include "AForm.hpp"
#include <iostream>

class RobotomyRequestForm : public AForm{
    private:
        std::string target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(const std::string& target);
        ~RobotomyRequestForm();
        RobotomyRequestForm& operator=(const RobotomyRequestForm& robotomyRequestForm);

        RobotomyRequestForm(const RobotomyRequestForm& robotomyRequestForm);
        void execute(Bureaucrat const & executor) const;
};

#endif