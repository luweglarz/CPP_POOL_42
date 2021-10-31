#include "Fragtrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name){
		std::cout << "The FragTrap constructor has been called" << std::endl;
	_Hitpoints = 100;
	_Energypoints = 50;
	_Attackdamage = 30;
}

FragTrap::FragTrap(const FragTrap &src): ClapTrap(src){
	std::cout << "The FragTrap copy constructor of " << _name << " has been called" << std::endl;
	*this = src;
}

FragTrap::~FragTrap(void){
	std::cout << "The FragTrap destructor of " << _name << " has been called" << std::endl;
}

void FragTrap::highFivesGuys(void){
	std::cout << "Positive to the high fives request" << std::endl;
}