#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
public:
	Form(const int signgrade, const int executegrade, std::string name);
	Form(const Form &src);
	Form &operator=(const Form &src);
	~Form();

	const std::string 	getName() const;
	int 	getexecuteGrade() const;
	int 	getsignGrade() const;
	int		getSigned() const;

	void	beSigned(Bureaucrat &b);

	class GradeTooHighException : public std::exception{
		public:
			const char *what() const throw();
	};
	class GradeTooLowException : public std::exception{
		public:
			const char *what() const throw();
	};

private:
	const std::string _name;
	bool	_signed;
	const int		_executeGrade;
	const int		_signGrade;
};

std::ostream	&operator<<(std::ostream &output, const Form &rhs);

#endif