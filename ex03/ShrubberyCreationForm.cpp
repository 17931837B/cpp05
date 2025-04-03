#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), target_("JohnDoe")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("ShrubberyCreationForm", 145, 137), target_(target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm(copy)
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
	if (this != &src)
	{
		this->target_ = src.target_;
		setIsSigned(src.getIsSigned());
	}
	return (*this);
}

void ShrubberyCreationForm::Act() const
{
	std::ofstream out((target_ + std::string("_shrubbery")).c_str());

    out << "       ###       " << std::endl;
    out << "      #o###      " << std::endl;
    out << "     #####o###     " << std::endl;
    out << "    #o#\\#|#/###    " << std::endl;
    out << "     ###\\|/#o#     " << std::endl;
    out << "      # }|{ #      " << std::endl;
    out << "       ###       " << std::endl;
    out << "      #o###      " << std::endl;
    out << "     #####o###     " << std::endl;
    out << "    #o#\\#|#/###    " << std::endl;
    out << "     ###\\|/#o#     " << std::endl;
    out << "      # }|{ #      " << std::endl;
    out << "       ###       " << std::endl;
    out << "      #o###      " << std::endl;
    out << "     #####o###     " << std::endl;
    out << "    #o#\\#|#/###    " << std::endl;
    out << "     ###\\|/#o#     " << std::endl;
    out << "      # }|{ #      " << std::endl;
    out << "    _____|_|_____    " << std::endl;
    out << "   /             \\   " << std::endl;
    out << "  /               \\  " << std::endl;
    out << " /_________________\\ " << std::endl;
	out.close();
}
