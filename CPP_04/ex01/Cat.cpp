#include "Cat.hpp"

Cat::Cat(): Animal(){
	std::cout << "Cat default constructor called" << std::endl;
	_type = "Cat";
	_brain = new Brain();
}

Cat::Cat(const Cat &src): Animal(){
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
}

Cat	&Cat::operator=(const Cat &rhs){
	std::cout << "Cat copy by assignation called" << std::endl;
	_type = rhs._type;
	_brain = new Brain;
	*_brain = *(rhs._brain);
	return (*this);
}

Cat::~Cat(){
	delete _brain;
	std::cout << "Cat destructor called" << std::endl;
}

std::string *Cat::getIdeas() const{
	return (_brain->ideas);
}

void Cat::setIdeas(const std::string &idea){
	for (int i = 0; i < 100; i++){
		_brain->ideas[i] = idea;
	}
}

void	Cat::makeSound() const{
	std::cout << "Meow" << std::endl;
}