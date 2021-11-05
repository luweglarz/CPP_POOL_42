#include "Bureaucrat.hpp"
#include "Form.hpp"

void	TryGrades(){
	try{
		Form test1(150, 150,"test1");
		Form test2(1311, 20, "test2");
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		Form test(0, 1,"test");
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
}

void TryOverloadOperator(){
	Form test(50, 75, "Form");
	std::cout << test;
}


void	TrySign(){
	Form test1(50, 50, "Formtest1");
	Bureaucrat bob("Bob", 20);
	Bureaucrat jack("Jack", 60);
	try{
		jack.signForm(test1);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		bob.signForm(test1);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
}

int main(){
	TryGrades();
	std::cout << std::endl;
	TrySign();
	std::cout << std::endl;
	TryOverloadOperator();
	std::cout << std::endl;

}