#include "Scavtrap.hpp"

ScavTrap::ScavTrap(): ClapTrap("ClapScavTrap"){
	std::cout << "The individual ScavTrap constructor has been called" << std::endl;
	_Hitpoints = 100;
	_Energypoints = 50;
	_Attackdamage = 20;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name){
	std::cout << "The ScavTrap constructor of " << name << " has been called" << std::endl;
	_Hitpoints = 100;
	_Energypoints = 50;
	_Attackdamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &src): ClapTrap(src){
	std::cout << "The ScavTrap copy constructor of " << _name << " has been called" << std::endl;
}

ScavTrap::~ScavTrap(void){
	std::cout << "The ScavTrap destructor of " << _name << " has been called" << std::endl;
}

void	ScavTrap::guardGate(){
	std::cout << "ScavTrap " << _name << " have enterred in Gate keeper mode" << std::endl;
}

void	ScavTrap::attack(const std::string &target){
	std::cout <<  "ScavTrap " << _name << " attack " << target << ", causing " << _Attackdamage << " points of damage!" << std::endl;
}