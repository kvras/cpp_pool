#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include "GradeTooHighException.hpp"
#include "GradeTooLowException.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form{
    private :
        const std::string name;
        bool isSigned;
        const int gradeToSigne;
        const int gradeToExecute;
    public:
        Form();
        Form(const Form& object);
        Form& operator=(const Form& object);
        ~Form();

        Form(std::string name, int gradeToSigne, int gradeToExecute);

        GradeTooLowException GradeToLowExecute;
        GradeTooHighException GradeToHighExecute;

        const std::string& getName() const;
        bool getIsSigned() const;
        int getGradeToSigne() const;
        int getGradeToExecute() const;
        void beSigned(Bureaucrat& bureaucrat);
};

std::ostream& operator<<(std::ostream& out, const Form& form);

#endif