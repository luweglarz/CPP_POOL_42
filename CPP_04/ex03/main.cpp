#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main(){
	IMateriaSource* src = new MateriaSource();
	AMateria *ice = new Ice();
	AMateria *cure = new Cure();

	src->learnMateria(ice);
	src->learnMateria(cure);

	ICharacter* me = new Character("me");
	
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->equip(tmp);
	me->equip(tmp);
	tmp = src->createMateria("NonExistent");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	for (int i = 0; i < 4; i++)
		me->use(i, *bob);
	std::cout << std::endl;
	me->unequip(3);
	me->unequip(1);
	for (int i = 0; i < 4; i++)
		me->use(i, *bob);
	delete bob;
	delete me;
	delete src;
	delete ice;
	delete cure;
	return 0;
}