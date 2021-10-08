#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB{

	public:
		HumanB(std::string name);
		~HumanB(void);
		void	attack() const;
		void	setWeapon(Weapon &weapon);

	private:
		std::string _name;
		Weapon	*_weapontPTR;
};

#endif
