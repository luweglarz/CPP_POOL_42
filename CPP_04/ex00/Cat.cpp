#include "Cat.hpp"

Cat::Cat(): Animal(){
	_type = "Cat";
}

Cat::Cat(const Cat &src): Animal(){
	*this = src;
}

Cat &Cat::operator=(const Cat &rhs){
	_type = rhs._type;
	return (*this);
}

Cat::~Cat(){
}

void	Cat::makeSound() const{
	std::cout << "Meow" << std::endl;
}