#include "Cat.hpp"

Cat::Cat(): Animal(){
	type = "Cat";
}

Cat::Cat(const Cat &src): Animal(){
	*this = src;
}

Cat::~Cat(){
}

void	Cat::makeSound() const{
	std::cout << "Meow" << std::endl;
}