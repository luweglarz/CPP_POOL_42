#include "Ice.hpp"

Ice::Ice(): AMateria("ice"){
}

Ice::Ice(const Ice &src): AMateria(src){
}

Ice &Ice::operator=(const Ice &src){
	_type = src._type;
	return (*this);
}

Ice::~Ice(){
}

AMateria *Ice::clone() const{
	AMateria *instance = new Ice();
	return (instance);
}

void Ice::use(ICharacter &target) const{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" <<std::endl;
}