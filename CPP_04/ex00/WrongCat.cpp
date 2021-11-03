#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal(){
	_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &src): WrongAnimal(){
	*this = src;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs){
	_type = rhs._type;
	return (*this);
}

WrongCat::~WrongCat(){
}

void	WrongCat::makeSound() const{
	std::cout << "Meow" << std::endl;
}