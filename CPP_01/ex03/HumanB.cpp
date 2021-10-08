#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name){
	_weapontPTR = nullptr;
	return ;
}

HumanB::~HumanB(){
	return ;
}

void	HumanB::setWeapon(Weapon &weapon){
	_weapontPTR = &weapon;
}

void	HumanB::attack() const{
	if (_weapontPTR == nullptr)
		std::cout << _name << " doesn't have any weapon" << std::endl;
	else
		std::cout << _name << " attacks with his " << _weapontPTR->getType() << std::endl;
}
