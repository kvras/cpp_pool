#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), target("default"){
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : AForm("PresidentialPardonForm", 25, 5), target(target){
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& presidentialPardonForm) : AForm(presidentialPardonForm), target(presidentialPardonForm.target){
}

PresidentialPardonForm::~PresidentialPardonForm(){
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& presidentialPardonForm){
     if (this != &presidentialPardonForm) {
        AForm::operator=(presidentialPardonForm);
        target = presidentialPardonForm.target;
    }
    return *this;
}


void PresidentialPardonForm::execute(Bureaucrat const & executor) const{
    if (executor.getGrade() > getGradeToExecute())
        throw GradeTooLowException();
    std::cout << target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
