#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade): _name(name){
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	std::cout << "Bureaucrat constructor called" << std::endl;
	_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src): _name( src.getName()) {
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = src;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src){
	_grade = src._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat(){
	std::cout << "Bureaucrat destructor called" << std::endl;
}

const std::string Bureaucrat::getName() const {
	return (_name);
}

int	Bureaucrat::getGrade() const{
	return (_grade);
}

void	Bureaucrat::increment(){
	if (_grade == 1)
		throw GradeTooHighException();
	else
		_grade--;
}

void	Bureaucrat::decrement(){
	if (_grade == 150)
		throw GradeTooLowException();
	else
		_grade++;
}

void	Bureaucrat::signForm(Form &f){
	try{
		f.beSigned(*this);
		std::cout << _name << " signs " << f.getName() << std::endl;
	}
	catch(std::exception &e){
		std::cout << _name << " can't sign this form because his " << e.what() << std::endl;
	}
}

const char *Bureaucrat::GradeTooHighException::what() const throw(){
	return ("Grade is too high, you can't go higher than 1");
}

const char *Bureaucrat::GradeTooLowException::what() const throw(){
	return ("Grade is too low, you can't go lower than 150");
}

std::ostream	&operator<<(std::ostream &output, const Bureaucrat &rhs){
	output << rhs.getName();
	output << ", bureaucrat grade ";
	output << rhs.getGrade() << std::endl;
	return (output);
}