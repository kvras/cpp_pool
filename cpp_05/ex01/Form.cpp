#include "Form.hpp"

Form::Form() : name("default"), gradeToSigne(150), gradeToExecute(150) {
    isSigned = false;
}

Form::Form(std::string name, int gradeToSigne, int gradeToExecute) : name(name), gradeToSigne(gradeToSigne), gradeToExecute(gradeToExecute) {
    isSigned = false;
}

Form::Form(const Form& object) : name(object.name), gradeToSigne(object.gradeToSigne), gradeToExecute(object.gradeToExecute) {
    isSigned = object.isSigned;
}

Form& Form::operator=(const Form& object){
    if (this == &object)
        return *this;
    isSigned = object.isSigned;
    return *this;
}

Form::~Form(){}

const std::string& Form::getName() const{
    return name;
}

bool Form::getIsSigned() const{
    return isSigned;
}

int Form::getGradeToSigne() const{
    return gradeToSigne;
}

int Form::getGradeToExecute() const{
    return gradeToExecute;
}

void Form::beSigned(Bureaucrat& bureaucrat){
    if (bureaucrat.getGrade() > gradeToSigne)
        throw GradeTooLowException();
    isSigned = true;
}

std::ostream& operator<<(std::ostream& out, const Form& form){
    out << "Form name: " << form.getName() << std::endl;
    out << "Is signed: " << form.getIsSigned() << std::endl;
    out << "Grade to sign: " << form.getGradeToSigne() << std::endl;
    out << "Grade to execute: " << form.getGradeToExecute() << std::endl;
    return out;
}
