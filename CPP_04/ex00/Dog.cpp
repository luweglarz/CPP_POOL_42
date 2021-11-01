#include "Dog.hpp"

Dog::Dog(): Animal(){
	type = "Dog";
}

Dog::Dog(const Dog &src): Animal(){
	*this = src;
}

Dog::~Dog(){
}

void	Dog::makeSound() const{
	std::cout << "Bark" << std::endl;
}