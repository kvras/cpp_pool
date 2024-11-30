#ifndef AForm_HPP
#define AForm_HPP

#include <string>
#include "GradeTooHighException.hpp"
#include "GradeTooLowException.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;
class AForm{
    private :
        const std::string name;
        bool isSigned;
        const int gradeToSigne;
        const int gradeToExecute;
    public:
        AForm();
        AForm(const AForm& object);
        AForm& operator=(const AForm& object);
        virtual ~AForm();

        AForm(std::string name, int gradeToSigne, int gradeToExecute);

        GradeTooLowException GradeToLowExecute;
        GradeTooHighException GradeToHighExecute;

        const std::string& getName() const;
        bool getIsSigned() const;
        int getGradeToSigne() const;
        int getGradeToExecute() const;
        void beSigned(Bureaucrat& bureaucrat);

        virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream& operator<<(std::ostream& out, const AForm& AForm);

#endif