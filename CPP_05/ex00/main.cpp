#include "Bureaucrat.hpp"

void	TryGrades(){
	try{
		Bureaucrat test1("test",150);
		Bureaucrat test2("test",1311);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		Bureaucrat test("test",0);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
}

void	TryUnaryOperator(){
	Bureaucrat test1("test1",149);
	Bureaucrat test2("test2",2);
	try{
		std::cout << test1.getGrade() << std::endl;
		test1.decrement();
		std::cout << test1.getGrade() << std::endl;
		test1.decrement();
		std::cout << test1.getGrade() << std::endl;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try{
		std::cout << test2.getGrade() << std::endl;
		test2.increment();
		std::cout << test2.getGrade() << std::endl;
		test2.increment();
		std::cout << test2.getGrade() << std::endl;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
}

void TryOverloadOperator(){
	Bureaucrat test("Bob", 50);
	std::cout << test;
}

int main(){
	TryGrades();
	std::cout << std::endl;
	TryUnaryOperator();
	std::cout << std::endl;
	TryOverloadOperator();
}