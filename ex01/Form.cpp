#include "Form.hpp"

Form::Form(void) : name_("JohnDoe"), is_signed_(false), sign_grade_(150), execute_grade_(150)
{
}

Form::Form(std::string name, int sign_grade, int execute_grade) :name_(name), is_signed_(false), sign_grade_(sign_grade), execute_grade_(execute_grade)
{
	if (sign_grade_ < 1 || execute_grade_ < 1)
		throw GradeTooHighException();
	else if (sign_grade_ > 150 || execute_grade_ > 150)
		throw GradeTooLowException();
}

Form::~Form(void) 
{
}

Form::Form(const Form& copy) : name_(copy.name_), is_signed_(copy.is_signed_), sign_grade_(copy.sign_grade_), execute_grade_(copy.execute_grade_)
{
}

Form &Form::operator=(const Form& src)
{
	if (this != &src)
		this->is_signed_ = src.is_signed_;
	return (*this);
}

void	Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= sign_grade_)
		is_signed_ = true;
	else
		throw GradeTooLowException();
}

std::string Form::getName() const
{
	return (name_);
}

bool Form::getIsSigned() const
{
	return (is_signed_);
}

int Form::getSignGrade() const
{
	return (sign_grade_);
}

int Form::getExecuteGrade() const
{
	return (execute_grade_);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

std::ostream	&operator<<(std::ostream &res, Form const &fixed)
{
	res << "Name:		" << fixed.getName() << std::endl << "isSigned:	" << fixed.getIsSigned() << std::endl << "SignGrade:	" << fixed.getSignGrade() << std::endl << "ExecuteGrade:	" << fixed.getExecuteGrade() << std::endl;
	return (res);
}
