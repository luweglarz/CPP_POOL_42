#ifndef INTERN_HPP
# define INTERN_HPP

#include <string>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern{
public:
	Intern();
	Intern(const Intern &src);
	Intern &operator=(const Intern &src);
	~Intern();
	
	AForm	*makeForm(const std::string formName, const std::string formTarget);
	AForm	*makeShrubberyCreationForm(const std::string target);
	AForm	*makeRobotomyRequestForm(const std::string target);
	AForm	*makePresidentialPardonForm(const std::string target);

	class IncorrectFormName : public std::exception{
		public:
			const char *what() const throw();
	};

	AForm	*(Intern::*funcPTR[3])(const std::string);
};

#endif