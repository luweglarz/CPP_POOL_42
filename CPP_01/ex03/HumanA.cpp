#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _weapontREF(weapon), _name(name){
	return ;
}

HumanA::~HumanA(){
	return ;
}

void	HumanA::attack() const{
	std::cout << _name << " attacks with his " << _weapontREF.getType() << std::endl;
}
