#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	_type = "default";
}

WrongAnimal::WrongAnimal(const WrongAnimal &src){
	*this = src;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs){
	_type = rhs._type;
	return (*this);
}

WrongAnimal::~WrongAnimal(){
}

std::string	WrongAnimal::getType() const{
	return (_type);
}

void	WrongAnimal::makeSound() const{
	std::cout << "Some WrongAnimal sounds" << std::endl;
}