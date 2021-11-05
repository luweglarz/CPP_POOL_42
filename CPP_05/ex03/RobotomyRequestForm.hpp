#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <iostream>
#include <fstream>

class RobotomyRequestForm: public AForm{
public:
	RobotomyRequestForm(const std::string &target);
	RobotomyRequestForm(const RobotomyRequestForm &src);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &src);
	~RobotomyRequestForm();

	void	execute(const Bureaucrat &executor) const;
};

#endif