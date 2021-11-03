#include "Animal.hpp"

Animal::Animal(){
	_type = "default";
}

Animal::Animal(const Animal &src){
	*this = src;
}

Animal &Animal::operator=(const Animal &rhs){
	_type = rhs._type;
	return (*this);
}

Animal::~Animal(){
}

std::string	Animal::getType() const{
	return (_type);
}

void	Animal::makeSound() const{
	std::cout << "Some animal sounds" << std::endl;
}