#include "AForm.hpp"

AForm::AForm(const int signgrade, const int executegrade, std::string name): _target("Default"), _name(name), _signed(false), _executeGrade(executegrade), _signGrade(signgrade){
	if (signgrade < 1 || executegrade < 1 )
		throw GradeTooHighException();
	if (signgrade > 150 || executegrade  > 150)
		throw GradeTooLowException();
	std::cout << "Form constructor called" << std::endl;
}

AForm::AForm(const AForm &src): _name( src.getName()), _executeGrade(src.getexecuteGrade()), _signGrade(src.getsignGrade()){
	std::cout << "Form copy constructor called" << std::endl;
	*this = src;
}

AForm &AForm::operator=(const AForm &src){
	_signed = src._signed;
	return (*this);
}

AForm::~AForm(){
	std::cout << "Form destructor called" << std::endl;
}

const std::string 	AForm::getName() const{
	return (_name);
}

int 	AForm::getexecuteGrade() const{
	return (_executeGrade);
}

int 	AForm::getsignGrade() const{
	return (_signGrade);
}

int		AForm::getSigned() const{
	return (_signed);
}

void	AForm::beSigned(const Bureaucrat& b){
	if (b.getGrade() > _signGrade)
		throw GradeTooLowException();
	_signed = true;
}

void	AForm::execute(Bureaucrat const &executor) const{
	if (getSigned() == false)
		throw FormNotSigned();
	if (executor.getGrade() > getexecuteGrade())
		throw GradeTooLowException();
}

const char *AForm::GradeTooHighException::what() const throw(){
	return ("Grade is too high");
}

const char *AForm::GradeTooLowException::what() const throw(){
	return ("Grade is too low");
}

const char *AForm::FormNotSigned::what() const throw(){
	return ("The form you are trying to execute isn't signed");
}

std::ostream	&operator<<(std::ostream &output, const AForm &rhs){
	output << "Form name: " << rhs.getName() << std::endl;
	if (rhs.getSigned() == true)
		output << "The form is signed" << std::endl;
	else
		output << "The form isn't signed" << std::endl;
	return (output);
}