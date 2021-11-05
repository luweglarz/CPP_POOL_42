#include "Form.hpp"

Form::Form(const int signgrade, const int executegrade, std::string name): _name(name), _signed(false), _executeGrade(executegrade), _signGrade(signgrade){
	if (signgrade < 1 || executegrade < 1 )
		throw GradeTooHighException();
	if (signgrade > 150 || executegrade  > 150)
		throw GradeTooLowException();
	std::cout << "Form constructor called" << std::endl;
}

Form::Form(const Form &src): _name( src.getName()), _executeGrade(src.getexecuteGrade()), _signGrade(src.getsignGrade()){
	std::cout << "Form copy constructor called" << std::endl;
	*this = src;
}

Form &Form::operator=(const Form &src){
	_signed = src._signed;
	return (*this);
}

Form::~Form(){
	std::cout << "Form destructor called" << std::endl;
}

const std::string 	Form::getName() const{
	return (_name);
}

int 	Form::getexecuteGrade() const{
	return (_executeGrade);
}

int 	Form::getsignGrade() const{
	return (_signGrade);
}

int		Form::getSigned() const{
	return (_signed);
}

void	Form::beSigned(Bureaucrat& b){
	if (b.getGrade() > _signGrade)
		throw GradeTooLowException();
	_signed = true;
}

const char *Form::GradeTooHighException::what() const throw(){
	return ("Grade is too high");
}

const char *Form::GradeTooLowException::what() const throw(){
	return ("Grade is too low");
}

std::ostream	&operator<<(std::ostream &output, const Form &rhs){
	output << "Form name: " << rhs.getName() << std::endl;
	if (rhs.getSigned() == true)
		output << "The form is signed" << std::endl;
	else
		output << "The form isn't signed" << std::endl;
	return (output);
}