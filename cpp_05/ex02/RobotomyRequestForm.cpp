#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(){}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : AForm("RobotomyRequestForm", 72, 45), target(target){
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& robotomyRequestForm) : AForm(robotomyRequestForm), target(robotomyRequestForm.target){
}

RobotomyRequestForm::~RobotomyRequestForm(){
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& robotomyRequestForm){
    if (this == &robotomyRequestForm)
        return *this;
    AForm::operator=(robotomyRequestForm);
    return *this;
}


void RobotomyRequestForm::execute(Bureaucrat const & executor) const{
    if (executor.getGrade() > getGradeToExecute())
        throw GradeTooLowException();
    std::cout << "Drilling noises" << std::endl;
    if (rand() % 2)
        std::cout << target << " has been robotomized" << std::endl;
    else
        std::cout << target << " robotomization failed" << std::endl;
}
