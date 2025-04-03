#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	try
	{
		Bureaucrat	ann("ann", 42);
		Form		test("libft", 120, 140);
		std::cout << test;
		ann.signForm(test);
	}
	catch(const std::exception& e)
	{
		std::cerr << "[" << e.what() << "]" << std::endl;
	}

	std::cout << "--------------------------------------------------------\n";
	try
	{
		Bureaucrat	bob("bob", 150);
		Form		test("libft", 120, 140);
		std::cout << test;
		bob.signForm(test);
	}
	catch(const std::exception& e)
	{
		std::cerr << "[" << e.what() << "]" << std::endl;
	}

	std::cout << "--------------------------------------------------------\n";
	try
	{
		Bureaucrat	cat("cat", 15);
		Form		test("cpp05", 10, 20);
		std::cout << test;
		cat.signForm(test);
	}
	catch(const std::exception& e)
	{
		std::cerr << "[" << e.what() << "]" << std::endl;
	}

	std::cout << "--------------------------------------------------------\n";
	try
	{
		Bureaucrat	cat("cat", 1);
		Form		test("cpp05", 1000, 20);
		std::cout << test;
		cat.signForm(test);
	}
	catch(const std::exception& e)
	{
		std::cerr << "[" << e.what() << "]" << std::endl;
	}

	std::cout << "--------------------------------------------------------\n";
	try
	{
		Bureaucrat	cat("cat", 1);
		Form		test("cpp05", 10, -20);
		std::cout << test;
		cat.signForm(test);
	}
	catch(const std::exception& e)
	{
		std::cerr << "[" << e.what() << "]" << std::endl;
	}
	return (0);
}
