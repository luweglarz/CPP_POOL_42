#include "Diamondtrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap("ScavDiamondTrap"), FragTrap("FragDiamondTrap"){
	std::cout << "The DiamondTrap constructor of " << name << " has been called" << std::endl;
	_name = name;
	_Hitpoints = 100;
	_Energypoints = 50;
	_Attackdamage = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src): ClapTrap(src), ScavTrap(src), FragTrap(src){
	std::cout << "The DiamondTrap copy constructor of " << _name << " has been called" << std::endl;
	*this = src;
}

DiamondTrap::~DiamondTrap(void){
	std::cout << "The DiamondTrap destructor of " << _name << " has been called" << std::endl;
}

void	DiamondTrap::whoAmI(){
	std::cout << "I am " << _name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}

void	DiamondTrap::attack(const std::string &target){
	ScavTrap::attack(target);
}