#include "AForm.hpp"

AForm::AForm() : name("default"), gradeToSigne(150), gradeToExecute(150) {
    isSigned = false;
}

AForm::AForm(std::string name, int gradeToSigne, int gradeToExecute) : name(name), gradeToSigne(gradeToSigne), gradeToExecute(gradeToExecute) {
    isSigned = false;
}

AForm::AForm(const AForm& object) : name(object.name), gradeToSigne(object.gradeToSigne), gradeToExecute(object.gradeToExecute) {
    isSigned = object.isSigned;
}

AForm& AForm::operator=(const AForm& object){
    if (this == &object)
        return *this;
    isSigned = object.isSigned;
    return *this;
}

AForm::~AForm(){}

const std::string& AForm::getName() const{
    return name;
}

bool AForm::getIsSigned() const{
    return isSigned;
}

int AForm::getGradeToSigne() const{
    return gradeToSigne;
}

int AForm::getGradeToExecute() const{
    return gradeToExecute;
}

void AForm::beSigned(Bureaucrat& bureaucrat){
    if (bureaucrat.getGrade() > gradeToSigne)
        throw GradeTooLowException();
    isSigned = true;
}

std::ostream& operator<<(std::ostream& out, const AForm& AForm){
    out << "AForm name: " << AForm.getName() << std::endl;
    out << "Is signed: " << AForm.getIsSigned() << std::endl;
    out << "Grade to sign: " << AForm.getGradeToSigne() << std::endl;
    out << "Grade to execute: " << AForm.getGradeToExecute() << std::endl;
    return out;
}
