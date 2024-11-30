#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "GradeTooHighException.hpp"
#include "GradeTooLowException.hpp"
#include "Form.hpp"

class Form;

class Bureaucrat{

    private:
        const std::string name;
        int grade;

    public:
        GradeTooHighException GradeTooHighException;
        GradeTooLowException GradeTooLowException;

        Bureaucrat();
        Bureaucrat& operator=(const Bureaucrat& object);
        Bureaucrat(const Bureaucrat& object);
        ~Bureaucrat();

        Bureaucrat(const std::string& name, int grade);

        const std::string& getName() const;
        int getGrade() const;
        void incrementGrade();
        void decrementGrade();

        void signForm(Form& form);
};
std::ostream& operator<<(std::ostream& out, const Bureaucrat& object);

#endif