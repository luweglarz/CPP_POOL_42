#include "Claptrap.hpp"
#include "Scavtrap.hpp"
#include "Fragtrap.hpp"
#include "Diamondtrap.hpp"

int main(void){
	DiamondTrap a;
	DiamondTrap b("test");
	DiamondTrap c(a);

	a.attack(b.getName());
	a.setAttackdamage(5);
	a.attack(b.getName());
	a.takeDamage(a.getAttackdamage());
	b.beRepaired(10);
	b.highFivesGuys();
}