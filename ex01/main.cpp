#include "Bureaucrat.hpp"

void	output(int num)
{
	try
	{
		std::cout << "<<input grade: " << num << ">>" << std::endl;
		Bureaucrat J("JohnDoe", num);
		std::cout << J;
	}
	catch(const std::exception &e)
	{
		std::cerr << "[" << e.what() << "]" << std::endl;
	}
}

void	output_and_gradeUP(int num)
{
	try
	{
		std::cout << "<<input grade: " << num << " & incrementGrade>>" << std::endl;
		Bureaucrat J("JohnDoe", num);
		J.incrementGrade();
		std::cout << J;
	}
	catch(const std::exception &e)
	{
		std::cerr << "[" << e.what() << "]" << std::endl;
	}
}

void	output_and_gradeDOWN(int num)
{
	try
	{
		std::cout << "<<input grade: " << num << " & decrementGrade>>" << std::endl;
		Bureaucrat J("JohnDoe", num);
		J.decrementGrade();
		std::cout << J;
	}
	catch(const std::exception &e)
	{
		std::cerr << "[" << e.what() << "]" << std::endl;
	}
}

int main(void)
{
	output(42);
	output(1);
	output(150);
	output(-1);
	output(151);
	output_and_gradeUP(1);
	output_and_gradeUP(150);
	output_and_gradeDOWN(1);
	output_and_gradeDOWN(150);
	return (0);
}
