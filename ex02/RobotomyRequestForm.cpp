#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), target_("JohnDoe")
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm("RobotomyRequestForm", 72, 45), target_(target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm(copy)
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
	if (this != &src)
	{
		this->target_ = src.target_;
		setIsSigned(src.getIsSigned());
	}
	return (*this);
}

void RobotomyRequestForm::Act() const
{
	int	num;

	num = rand();
	if (num % 2)
		std::cout << getName() << " has been robotomized successfull.\n";
	else
		std::cout << getName() << " failed.\n";
}