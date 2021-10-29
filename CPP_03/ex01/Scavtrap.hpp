#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "Claptrap.hpp"

class ScavTrap : public ClapTrap{

	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &src);
		~ScavTrap();

		void	guardGate(); 
};

#endif