#include "Claptrap.hpp"
#include "Scavtrap.hpp"
#include "Fragtrap.hpp"

int main(void){
	FragTrap a;
	FragTrap b("test");
	FragTrap c(a);

	a.attack(b.getName());
	a.setAttackdamage(5);
	a.attack(b.getName());
	a.takeDamage(a.getAttackdamage());
	b.beRepaired(10);
	b.highFivesGuys();
}