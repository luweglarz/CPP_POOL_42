#include "Zombie.hpp"

Zombie::Zombie(void){
	return ;
}

Zombie::~Zombie(void){
	std::cout << this->_name << " " << "has been destroyed" << std::endl;
}

void	Zombie::set_name(std::string name){
	_name = name;
}

void	Zombie::announce(void){
	std::cout << this->_name << " " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
