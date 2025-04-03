#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include <exception>
# include <map>
# include "AForm.hpp"

class AForm;

class Intern
{
	public:
		Intern();
		~Intern();
		Intern(const Intern &copy);
		Intern &operator=(const Intern &src);
		AForm	*makeForm(const std::string form_name, const std::string form_target);
};

#endif