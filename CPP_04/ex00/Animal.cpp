#include "Animal.hpp"

Animal::Animal(){
	type = "default";
}

Animal::Animal(const Animal &src){
	*this = src;
}

Animal::~Animal(){
}

std::string	Animal::getType() const{
	return (type);
}

void	Animal::makeSound() const{
	std::cout << "Some animal sounds" << std::endl;
}