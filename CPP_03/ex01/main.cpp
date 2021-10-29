#include "Claptrap.hpp"
#include "Scavtrap.hpp"

int main(void){
	ScavTrap a;
	ScavTrap b("test");
	ScavTrap c(a);

	a.attack(b.getName());
	a.setAttackdamage(5);
	a.attack(b.getName());
	a.takeDamage(a.getAttackdamage());
	b.beRepaired(10);
	b.guardGate();
}