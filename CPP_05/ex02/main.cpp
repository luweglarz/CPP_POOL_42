#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

void	TrySuccessSignForm(){
	try{
		AForm *test = new ShrubberyCreationForm("test");
		Bureaucrat bureau("Bob", 20);
		bureau.signForm(*test);
		std::cout << std::endl;
		test = new RobotomyRequestForm("test");
		bureau.signForm(*test);
		std::cout << std::endl;
		test = new PresidentialPardonForm("test");
		bureau.signForm(*test);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
}

void	TryFailSignForm(){
	try{
		AForm *test = new ShrubberyCreationForm("test");
		Bureaucrat bureau("Bob", 150);
		bureau.signForm(*test);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
}

void	TrySuccessExecuteForm(){
	try{
		AForm *test = new ShrubberyCreationForm("test");
		Bureaucrat bureau("Bob", 20);
		bureau.signForm(*test);
		bureau.executeForm(*test);
		std::cout << std::endl;
		test = new RobotomyRequestForm("test");
		bureau.signForm(*test);
		bureau.executeForm(*test);
		std::cout << std::endl;
		test = new PresidentialPardonForm("test");
		bureau.signForm(*test);
		bureau.executeForm(*test);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
}

void	TryFailExecuteForm(){
	try{
		AForm *test = new ShrubberyCreationForm("test");
		Bureaucrat bureau("Bob", 150);
		bureau.signForm(*test);
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
}