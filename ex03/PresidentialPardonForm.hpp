#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include <stdlib.h>

class PresidentialPardonForm : public AForm
{
	private:
		std::string	target_;
		void		Act() const;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &copy);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &src);
		~PresidentialPardonForm();
};

#endif