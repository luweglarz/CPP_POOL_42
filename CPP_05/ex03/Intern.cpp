#include "Intern.hpp"

Intern::Intern(){
	std::cout << "Intern constructor called" << std::endl;
	funcPTR[0] = &Intern::makePresidentialPardonForm;
	funcPTR[1] = &Intern::makeRobotomyRequestForm;
	funcPTR[2] = &Intern::makeShrubberyCreationForm;
}

Intern::Intern(const Intern &src){
	std::cout << "Intern copy constructor called" << std::endl;
	*this = src;
}

Intern &Intern::operator=(const Intern &src){
	(void)src;
	return (*this);
}

Intern::~Intern(){
	std::cout << "Intern destructor called" << std::endl;
}

AForm	*Intern::makeForm(const std::string formName, const std::string formTarget){
	if (formName != "PresidentialPardonForm" && formName != "RobotomyRequestForm" && formName != "ShrubberyCreationForm")
		throw IncorrectFormName();
	AForm	*ret = nullptr;
	std::string	names[3] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};
	for (int i = 0; i < 3; i++){
		if (names[i] == formName){
			ret = (this->*funcPTR[i])(formTarget);
			break ;
		}
	}
	std::cout << "Intern created " << ret->getName() << std::endl;
	return (ret);
}

const char *Intern::IncorrectFormName::what() const throw(){
	return ("Incorrect form name");
}

AForm	*Intern::makeShrubberyCreationForm(const std::string target){
	AForm *ret = new ShrubberyCreationForm(target);
	return (ret);
}

AForm	*Intern::makeRobotomyRequestForm(const std::string target){
	AForm *ret = new RobotomyRequestForm(target);
	return (ret);
}

AForm	*Intern:: makePresidentialPardonForm(const std::string target){
	AForm *ret = new PresidentialPardonForm(target);
	return (ret);
}