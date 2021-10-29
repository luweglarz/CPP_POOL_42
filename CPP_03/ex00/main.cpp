#include "Claptrap.hpp"

int main(void){
	ClapTrap a("test");
	ClapTrap b(a);

	a.attack(b.getName());
	a.setAttackdamage(5);
	a.attack(b.getName());
	a.takeDamage(a.getAttackdamage());
	b.beRepaired(10);
}