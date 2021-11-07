#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

void	TrySuccessSignForm(){
	Intern RandomIntern;
	AForm *test = RandomIntern.makeForm("ShrubberyCreationForm", "House");
	Bureaucrat bureau("Bob", 20);
	bureau.signForm(*test);
	std::cout << std::endl;
	test = RandomIntern.makeForm("RobotomyRequestForm", "Robot");
	bureau.signForm(*test);
	std::cout << std::endl;
	test = RandomIntern.makeForm("PresidentialPardonForm", "Jack");
	bureau.signForm(*test);
}

void	TryFailSignForm(){
	Intern RandomIntern;
	AForm *test = RandomIntern.makeForm("ShrubberyCreationForm", "House");
	Bureaucrat bureau("Bob", 150);
	bureau.signForm(*test);
}

void	TrySuccessExecuteForm(){
	Intern RandomIntern;
	AForm *test = RandomIntern.makeForm("ShrubberyCreationForm", "House");
	Bureaucrat bureau("Bob", 20);
	bureau.signForm(*test);
	bureau.executeForm(*test);
	std::cout << std::endl;
	test = RandomIntern.makeForm("RobotomyRequestForm", "Robot");
	bureau.signForm(*test);
	bureau.executeForm(*test);
	std::cout << std::endl;
	test = RandomIntern.makeForm("PresidentialPardonForm", "Jack");
	bureau.signForm(*test);
	bureau.executeForm(*test);
}

void	TryFailExecuteForm(){
	Intern RandomIntern;
	AForm *test = RandomIntern.makeForm("RobotomyRequestForm", "Un robot");
	Bureaucrat bureau("Bob", 150);
	bureau.signForm(*test);
	bureau.executeForm(*test);
}

void	TryFailCreateForm(){
	try{
		Intern RandomIntern;
		AForm *test = RandomIntern.makeForm("Nonexistent", "default");
		Bureaucrat bureau("Bob", 150);
		test->execute(bureau);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
}

int main(){
		std::cout << "Tests to try the success of a the signature of a form:" << std::endl;
		std::cout << "_____________________________________________________" << std::endl;
		TrySuccessSignForm();
		std::cout << std::endl;
		std::cout << "Tests to try the failure of a the signature of a form:" << std::endl;
		std::cout << "_____________________________________________________" << std::endl;
		TryFailSignForm();
		std::cout << std::endl;
		std::cout << "Tests to try the success of a the execution of a form:" << std::endl;
		std::cout << "_____________________________________________________" << std::endl;
		TrySuccessExecuteForm();
		std::cout << std::endl;
		std::cout << "Tests to try the failure of a the execution of a form:" << std::endl;
		std::cout << "_____________________________________________________" << std::endl;
		TryFailExecuteForm();
		std::cout << std::endl;
		std::cout << "Tests to try the failure of a creation of a form:" << std::endl;
		std::cout << "_____________________________________________________" << std::endl;
		TryFailCreateForm();
}