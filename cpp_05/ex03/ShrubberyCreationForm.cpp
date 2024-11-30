#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : AForm("ShrubberyCreationForm", 145, 137), target(target){

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& shrubberyCreationForm) : AForm(shrubberyCreationForm), target(shrubberyCreationForm.target){
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& shrubberyCreationForm){
    if (this != &shrubberyCreationForm) {
        AForm::operator=(shrubberyCreationForm);
        target = shrubberyCreationForm.target;
    }
    return *this;
}


void ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
    if (executor.getGrade() > getGradeToExecute())
        throw GradeTooLowException();
    std::ofstream file(target + "_shrubbery");
    file << "       _-_\n    /~~   ~~\\\n /~~         ~~\\\n{               }\n \\  _-     -_  /\n   ~  \\\\ //  ~\n_- -   | | _- _\n  _ -  | |   -_\n      // \\\n";
    file.close();
}