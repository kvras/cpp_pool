#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "GradeTooHighException.hpp"
#include "GradeTooLowException.hpp"
#include "AForm.hpp"

class AForm;

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

        void signAForm(AForm& AForm);
        void executeAForm(AForm const & form) const;
};
std::ostream& operator<<(std::ostream& out, const Bureaucrat& object);

#endif