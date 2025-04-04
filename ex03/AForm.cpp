#include "AForm.hpp"

AForm::AForm(void) : name_("JohnDoe"), is_signed_(false), sign_grade_(150), execute_grade_(150)
{
}

AForm::AForm(std::string name, int sign_grade, int execute_grade) :name_(name), is_signed_(false), sign_grade_(sign_grade), execute_grade_(execute_grade)
{
	if (sign_grade_ < 1 || execute_grade_ < 1)
		throw GradeTooHighException();
	else if (sign_grade_ > 150 || execute_grade_ > 150)
		throw GradeTooLowException();
}

AForm::~AForm(void) 
{
}

AForm::AForm(const AForm& copy) : name_(copy.name_), is_signed_(copy.is_signed_), sign_grade_(copy.sign_grade_), execute_grade_(copy.execute_grade_)
{
}

AForm &AForm::operator=(const AForm& src)
{
	if (this != &src)
		this->is_signed_ = src.is_signed_;
	return (*this);
}

void	AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= sign_grade_)
		is_signed_ = true;
	else
		throw GradeTooLowException();
}

void	AForm::execute(Bureaucrat const & executor) const
{
	if (!is_signed_)
		throw NoSign();
	else if (executor.getGrade() > execute_grade_)
		throw GradeTooLowException();
	else
		Act();
}

std::string AForm::getName() const
{
	return (name_);
}

bool AForm::getIsSigned() const
{
	return (is_signed_);
}

void AForm::setIsSigned(bool is_signed)
{
	is_signed_ = is_signed;
}

int AForm::getSignGrade() const
{
	return (sign_grade_);
}

int AForm::getExecuteGrade() const
{
	return (execute_grade_);
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

const char* AForm::NoSign::what() const throw()
{
	return ("Need sign");
}

std::ostream	&operator<<(std::ostream &res, AForm const &fixed)
{
	res << "Name:		" << fixed.getName() << std::endl << "isSigned:	" << fixed.getIsSigned() << std::endl << "SignGrade:	" << fixed.getSignGrade() << std::endl << "ExecuteGrade:	" << fixed.getExecuteGrade() << std::endl;
	return (res);
}
