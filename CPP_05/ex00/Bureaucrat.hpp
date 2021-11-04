#ifndef BUREAUCRATE_HPP
# define BUREAUCRATE_HPP

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat{
public:
	Bureaucrat(const std::string name, int grade);
	Bureaucrat(const Bureaucrat &src);
	Bureaucrat &operator=(const Bureaucrat &src);
	~Bureaucrat();
	
	const std::string 	getName() const;
	int 	getGrade() const;

	void	decrement();
	void	increment();

	class GradeTooHighException : public std::exception{
		public:
			const char *what() const throw();
	};
	class GradeTooLowException : public std::exception{
		public:
			const char *what() const throw();
	};

private:
	int	_grade;
	const std::string _name;
};

std::ostream	&operator<<(std::ostream &output, const Bureaucrat &rhs);

#endif