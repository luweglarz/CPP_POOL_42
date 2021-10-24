#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA{

	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);
		void	attack() const;

	private:
		Weapon	&_weapontREF;
		std::string _name;
};

#endif
