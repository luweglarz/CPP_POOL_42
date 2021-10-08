#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type){
	return ;
}
Weapon::~Weapon(void){
	return ;
}

void	Weapon::setType(std::string type){
	this->_type = type;
}

const std::string &Weapon::getType() const{
	const std::string &stringREF = _type;
	return (stringREF);
}