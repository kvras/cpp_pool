#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){}

Bureaucrat::Bureaucrat(const std::string& name, int grade): name(name){
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException;
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException;
    this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& object){
    *this = object;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& object){
    if (this == &object)
        return *this;
    grade = object.grade;
    return *this;
}

Bureaucrat::~Bureaucrat(){

}
const std::string& Bureaucrat::getName() const{
    return name;
}

int Bureaucrat::getGrade() const{
    return grade;
}

void Bureaucrat::incrementGrade(){
    if (grade == 1)
        throw Bureaucrat::GradeTooHighException;
    grade--;
}

void Bureaucrat::decrementGrade(){
    if (grade == 150)
        throw Bureaucrat::GradeTooLowException;
    grade++;
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& object){
    out << object.getName() << ", bureaucrat grade " << object.getGrade() << std::endl;
    return out;
}


