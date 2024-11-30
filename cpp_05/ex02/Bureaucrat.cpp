#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("default"){
    grade = 150;
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

Bureaucrat::Bureaucrat(const std::string& name, int grade): name(name){
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException;
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException;
    this->grade = grade;
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

void Bureaucrat::signAForm(AForm& AForm){
    
    try{
        AForm.beSigned(*this);
        std::cout << name << " signs " << AForm.getName() << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << name << " cannot sign the AForm because " << e.what() << std::endl;
    }
}

void Bureaucrat::executeAForm(AForm const & form) const{
    try{
        form.execute(*this);
        std::cout << name << " executes " << form.getName() << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << name << " cannot execute the AForm because " << e.what() << std::endl;
    }
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& object){
    out << object.getName() << ", bureaucrat grade " << object.getGrade() << std::endl;
    return out;
}
