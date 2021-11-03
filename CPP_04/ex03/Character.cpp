#include "Character.hpp"

Character::Character(std::string name): _name(name){
	for (int i =0; i < 4; i++)
		_inventory[i] = nullptr;
}

Character::Character(const Character &src){
	*this = src;
}

Character &Character::operator=(const Character &src){
	_name = src._name;
	for (int i = 0; i < 4; i++)
		_inventory[i] = src._inventory[i];
	return (*this);
}

Character::~Character(){
}

const std::string &Character::getName() const{
	return (_name);
}

void Character::equip(AMateria *m){
	if (!m || _inventory[3] != nullptr)
		return ;
	int i = 0;
	while (_inventory[i] != nullptr)
		i++;
	_inventory[i] = m;
}

void Character::unequip(int idx){
	if (idx >= 0 && idx <= 3)
		_inventory[idx] = nullptr; 
}

void Character::use(int idx, ICharacter& target){
	if (idx > 3 || !_inventory[idx])
		return ;
	_inventory[idx]->use(target);
}
