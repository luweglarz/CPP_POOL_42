#include "Dog.hpp"

Dog::Dog(): Animal(){
	_type = "Dog";
}

Dog::Dog(const Dog &src): Animal(){
	*this = src;
}

Dog &Dog::operator=(const Dog &rhs){
	_type = rhs._type;
	return (*this);
}

Dog::~Dog(){
}

void	Dog::makeSound() const{
	std::cout << "Bark" << std::endl;
}