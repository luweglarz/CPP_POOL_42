#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm{
public:
	AForm(const int signgrade, const int executegrade, std::string name);
	AForm(const AForm &src);
	AForm &operator=(const AForm &src);
	~AForm();

	const std::string 	getName() const;
	int 	getexecuteGrade() const;
	int 	getsignGrade() const;
	int		getSigned() const;

	void	beSigned(const Bureaucrat &b);
	virtual void	execute(Bureaucrat const &executor) const = 0;

	class GradeTooHighException : public std::exception{
		public:
			const char *what() const throw();
	};
	class GradeTooLowException : public std::exception{
		public:
			const char *what() const throw();
	};
	class FormNotSigned : public std::exception{
		public:
			const char *what() const throw();
	};

protected:
	std::string _target;

private:
	const std::string _name;
	bool	_signed;
	const int		_executeGrade;
	const int		_signGrade;
};

std::ostream	&operator<<(std::ostream &output, const AForm &rhs);

#endif