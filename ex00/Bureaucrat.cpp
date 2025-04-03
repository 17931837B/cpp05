#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : name_("JohnDoe"), grade_(42)
{
}

Bureaucrat::Bureaucrat(const std::string name, int grade) :name_(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
		grade_ = grade;
}

Bureaucrat::~Bureaucrat(void) 
{
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) : name_(copy.name_), grade_(copy.grade_)
{
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& src) 
{
	if (this != &src)
	{
		// this->name_ = src.name_;
		this->grade_ = src.grade_;
	}
	return (*this);
}

std::string	Bureaucrat::getName() const
{
	return (name_);
}

int	Bureaucrat::getGrade() const
{
	return (grade_);
}

void	Bureaucrat::incrementGrade()
{
	if (grade_ == 1)
		throw GradeTooHighException();
	else
		grade_--;
}

void	Bureaucrat::decrementGrade()
{
	if (grade_ == 150)
		throw GradeTooLowException();
	else
		grade_++;
}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

std::ostream	&operator<<(std::ostream &res, Bureaucrat const &fixed)
{
	res << fixed.getName() << ", bureaucrat grade " << fixed.getGrade() << std::endl;
	return (res);
}