#include "Dog.hpp"

Dog::Dog(): Animal(){
	std::cout << "Dog default constructor called" << std::endl;
	type = "Dog";
	_brain = new Brain();
}

Dog::Dog(const Dog &src): Animal(){
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
}

Dog	&Dog::operator=(const Dog &rhs){
	std::cout << "Dog copy by assignationcalled" << std::endl;
	type = rhs.getType();
	_brain = new Brain;
	*_brain = *(rhs._brain);
	return (*this);
}

Dog::~Dog(){
	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
}

std::string *Dog::getIdeas() const{
	return (_brain->ideas);
}

void Dog::setIdeas(const std::string &idea){
	for (int i = 0; i < 100; i++){
		_brain->ideas[i] = idea;
	}
}

void	Dog::makeSound() const{
	std::cout << "Bark" << std::endl;
}