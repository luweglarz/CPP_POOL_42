#include "Claptrap.hpp"
#include "Scavtrap.hpp"

int main(void){
	ScavTrap b("test");
	ScavTrap c(b);

	b.attack(c.getName());
	b.setAttackdamage(5);
	b.attack(c.getName());
	b.takeDamage(c.getAttackdamage());
	c.beRepaired(10);
	c.guardGate();
}