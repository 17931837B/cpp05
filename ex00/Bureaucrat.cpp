#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : name_("JohnDoe") grade_(42)
{
}

Bureaucrat::Bureaucrat(std::string name) 
{
	this->type = name;
	std::cout << "Bureaucrat " << name << " create.\n";
}

Bureaucrat::~Bureaucrat(void) 
{
	std::cout << "Bureaucrat " << "destroyed.\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) 
{
	this->type = copy.type;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& src) 
{
	if (this != &src)
		this->type = src.type;
	return (*this);
}