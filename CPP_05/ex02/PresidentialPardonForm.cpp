#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target): AForm(25, 5, "PresidentialPardonForm"){
	std::cout << "PresidentialPardonForm constructor called" << std::endl;
	_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src): AForm(25, 5, "PresidentialPardonForm"){
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
	*this = src;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &src){
	AForm::operator=(src);
	_target = src._target;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(){
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

void	PresidentialPardonForm::execute(const Bureaucrat &executor) const{
	if (getSigned() == false)
		throw FormNotSigned();
	if (executor.getGrade() > getsignGrade())
		throw GradeTooLowException();
	std::cout << _target << " has been pardoned by Zafod Beeblerox" << std::endl;
}