#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"


int main ()
{
	Intern someRandomIntern;
	AForm* rrf;

	try
	{
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		Bureaucrat b("lbacha", 150);

		b.signAForm(*rrf);
		b.executeAForm(*rrf);

		delete rrf;
		
	}
	catch (std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << "\n";
	}

	return 0;
}