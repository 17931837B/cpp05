#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp" 

class Bureaucrat;

class AForm
{
	private:
		const std::string	name_;
		bool				is_signed_;
		const int			sign_grade_;
		const int			execute_grade_;
		virtual void		Act() const = 0;
	public:
		AForm();
		AForm(const std::string name, int sign_grade, int execute_grade);
		virtual ~AForm();
		AForm(const AForm &copy);
		AForm		&operator=(const AForm &src);
		std::string	getName() const;
		bool		getIsSigned() const;
		void		setIsSigned(bool is_signed);
		int			getSignGrade() const;
		int			getExecuteGrade() const;
		void		beSigned(const Bureaucrat &bureaucrat);
		void		execute(Bureaucrat const & executor) const;
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class NoSign : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &res, AForm const &fixed);

#endif
