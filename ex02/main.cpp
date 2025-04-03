#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	srand(time(NULL));

	try
	{
		Bureaucrat ann("ann", 42);
		ShrubberyCreationForm test1_1("test1_1");
		std::cout << test1_1;
		ann.signForm(test1_1);
		std::cout << test1_1;
		ann.executeForm(test1_1);
	}
	catch(const std::exception& e)
	{
		std::cerr << "[" << e.what() << "]" << std::endl;
	}

	std::cout << "--------------------------------------------------------\n";

	try
	{
		Bureaucrat ann("ann", 140);
		ShrubberyCreationForm test1_2("test1_2");
		std::cout << test1_2;
		ann.signForm(test1_2);
		std::cout << test1_2;
		ann.executeForm(test1_2);
	}
	catch(const std::exception& e)
	{
		std::cerr << "[" << e.what() << "]" << std::endl;
	}

	std::cout << "--------------------------------------------------------\n";

	try
	{
		Bureaucrat ann("ann", 42);
		RobotomyRequestForm test2_1("test2_1");
		std::cout << test2_1;
		ann.signForm(test2_1);
		std::cout << test2_1;
		int	i = 0;
		while (i < 10)
		{
			std::cout << i+1 <<". ";
			ann.executeForm(test2_1);
			i++;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << "[" << e.what() << "]" << std::endl;
	}

	std::cout << "--------------------------------------------------------\n";

	try
	{
		Bureaucrat ann("ann", 140);
		RobotomyRequestForm test2_2("test2_2");
		std::cout << test2_2;
		ann.signForm(test2_2);
		std::cout << test2_2;
		ann.executeForm(test2_2);
	}
	catch(const std::exception& e)
	{
		std::cerr << "[" << e.what() << "]" << std::endl;
	}

	std::cout << "--------------------------------------------------------\n";

	try
	{
		Bureaucrat ann("ann", 1);
		PresidentialPardonForm test3_1("test3_1");
		std::cout << test3_1;
		ann.signForm(test3_1);
		std::cout << test3_1;
		ann.executeForm(test3_1);
	}
	catch(const std::exception& e)
	{
		std::cerr << "[" << e.what() << "]" << std::endl;
	}

	std::cout << "--------------------------------------------------------\n";

	try
	{
		Bureaucrat ann("ann", 0);
		PresidentialPardonForm test3_2("test3_2");
		std::cout << test3_2;
		ann.signForm(test3_2);
		std::cout << test3_2;
		ann.executeForm(test3_2);
	}
	catch(const std::exception& e)
	{
		std::cerr << "[" << e.what() << "]" << std::endl;
	}
	return (0);
}
