#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "Fragtrap.hpp"
#include "Scavtrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap {

public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap &src);
	~DiamondTrap();

	void	attack(const std::string &target);
	void	whoAmI();
private:
	std::string _name;
};

#endif