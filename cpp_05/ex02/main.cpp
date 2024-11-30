#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(){

try{
    Bureaucrat b1("B1", 1);
    Bureaucrat b2("B2", 150);

    PresidentialPardonForm ppf("PPF");
    RobotomyRequestForm rrf("RRF");
    ShrubberyCreationForm scf("SCF");

    std::cout << b1 << std::endl;
    std::cout << b2 << std::endl;

    std::cout << ppf << std::endl;
    std::cout << rrf << std::endl;
    std::cout << scf << std::endl;

    b1.signAForm(ppf);
    b2.signAForm(rrf);
    b2.signAForm(scf);

    ppf.execute(b1);
    rrf.execute(b2);
    scf.execute(b2);
}
catch (std::exception& e){
    std::cerr << e.what() << std::endl;
}
    return 0;
}
