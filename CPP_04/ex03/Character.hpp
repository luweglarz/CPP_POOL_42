#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character: public ICharacter{
public:
	Character(std::string name);
	Character(const Character &src);
	Character &operator=(const Character &src);
	~Character();

	const std::string &getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
	
private:
	std::string _name;
	AMateria *_inventory[4];
};

#endif