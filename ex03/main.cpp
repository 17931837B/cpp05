#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{

	try
	{
		Bureaucrat	ann("ann", 1);
		Intern		bob;
		AForm		*form;

		form = bob.makeForm("UNKNOWN", "test1");
		form = bob.makeForm("PresidentialPardonForm", "test2");
		std::cout << *form;
		ann.signForm(*form);
		ann.executeForm(*form);
		delete form;
	}
	catch(const std::exception& e)
	{
		std::cerr << "[" << e.what() << "]" << std::endl;
	}

	std::cout << "--------------------------------------------------------\n";
	try
	{
		Bureaucrat	ann("ann", 42);
		Intern		bob;
		AForm		*form;

		form = bob.makeForm("ShrubberyCreationForm", "test");
		std::cout << *form;
		ann.signForm(*form);
		ann.executeForm(*form);
		delete form;
	}
	catch(const std::exception& e)
	{
		std::cerr << "[" << e.what() << "]" << std::endl;
	}
	return (0);
}
