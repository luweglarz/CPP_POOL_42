#include "Zombie.hpp"

Zombie::Zombie(std::string attr_name) : _name(attr_name){
	return ;
}

Zombie::~Zombie(){
	std::cout << this->_name << " " << "has been destroyed" << std::endl;
}

void	Zombie::announce(void){
	std::cout << this->_name << " " << "BraiiiiiiinnnzzzZ..." << std::endl;
}