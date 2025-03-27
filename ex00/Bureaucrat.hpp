#ifndef Bureaucrat_HPP
# define Bureaucrat_HPP

# include <iostream>

class Bureaucrat
{
	private:
		std::string	name_;
		int			grade_;
	public:
		Bureaucrat();
		Bureaucrat(const std::string name, int grade);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &other);
		Bureaucrat	&operator=(const Bureaucrat &other);
		std::string	getName() const;
		int			getGrade() const;
		void		incrementGrade();
		void		decrementGrade();
};

#endif