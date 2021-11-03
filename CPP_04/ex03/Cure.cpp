#include "Cure.hpp"

Cure::Cure(): AMateria("cure"){
}

Cure::Cure(const Cure &src): AMateria(src){
}

Cure &Cure::operator=(const Cure &src){
	_type = src._type;
	return (*this);
}

Cure::~Cure(){
}

AMateria *Cure::clone() const{
	AMateria *instance = new Cure();
	return (instance);
}

void Cure::use(ICharacter &target) const{
	std::cout << "* heals " << target.getName()  << "'s wounds *" << std::endl;
}