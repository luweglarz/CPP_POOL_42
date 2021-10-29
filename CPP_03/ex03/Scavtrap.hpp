#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "Claptrap.hpp"

class ScavTrap : public virtual ClapTrap{

	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &src);
		~ScavTrap();

		void	guardGate();
		void	attack(const std::string &target);
};

#endif