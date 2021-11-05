#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target): AForm(145, 137, "RobotomyRequestForm"){
	std::cout << "RobotomyRequestForm constructor called" << std::endl;
	_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src): AForm(72, 45, "RobotomyRequestForm"){
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
	*this = src;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &src){
	AForm::operator=(src);
	_target = src._target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(){
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

void	RobotomyRequestForm::execute(const Bureaucrat &executor) const{
	if (getSigned() == false)
		throw FormNotSigned();
	if (executor.getGrade() > getexecuteGrade())
		throw GradeTooLowException();
	srand (time(NULL));
	int random = rand() % 2 + 1;
	if (random == 1)
		std::cout << "brrrrrr drrrrr " << _target << " has been robotomized successfully" << std::endl;
	else
		std::cout << "Couldn't robotomize " << _target << std::endl;
}