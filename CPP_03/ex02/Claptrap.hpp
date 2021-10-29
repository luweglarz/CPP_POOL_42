#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
public:
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &src);
	~ClapTrap();

	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	void	setName(std::string name);
	void	setHitpoints(int Hitpoints);
	void	setEnergypoints(int Energypoints);
	void	setAttackdamage(int Attackdamage);

	std::string	getName(void) const;
	int			getHitpoints(void) const;
	int			getEnergypoints(void) const;
	int			getAttackdamage(void) const;

protected:
	std::string _name;
	int			_Hitpoints;
	int			_Energypoints;
	int			_Attackdamage;
};

#endif