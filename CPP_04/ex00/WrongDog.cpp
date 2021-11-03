#include "WrongDog.hpp"

WrongDog::WrongDog(): WrongAnimal(){
	_type = "WrongDog";
}

WrongDog::WrongDog(const WrongDog &src): WrongAnimal(){
	*this = src;
}

WrongDog &WrongDog::operator=(const WrongDog &rhs){
	_type = rhs._type;
	return (*this);
}

WrongDog::~WrongDog(){
}

void	WrongDog::makeSound() const{
	std::cout << "Bark" << std::endl;
}