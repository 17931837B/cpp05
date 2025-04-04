#include "Intern.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

Intern::Intern(const Intern &copy)
{
	(void) copy;
}

Intern &Intern::operator=(const Intern &src)
{
	(void) src;
	return (*this);
}


AForm* Intern::makeForm(const std::string name, const std::string target)
{
	const int	num = 3;
	std::string	form_list[num];
	form_list[0] = "ShrubberyCreationForm";
	form_list[1] = "RobotomyRequestForm";
	form_list[2] = "PresidentialPardonForm";
	int	index = -1;
	int	i = 0;

	while (i < num)
	{
		if (name == form_list[i])
		{
			index = i;
			break ;
		}
		i++;
	}

	switch (index)
	{
		case 0:
			std::cout << "Intern creates " << name << std::endl;
			return (new ShrubberyCreationForm(target));
		case 1:
			std::cout << "Intern creates " << name << std::endl;
			return (new RobotomyRequestForm(target));
		case 2:
			std::cout << "Intern creates " << name << std::endl;
			return (new PresidentialPardonForm(target));
		default:
			std::cout << "Nnt Found: " << name << std::endl;
			return (NULL);
	}
}
