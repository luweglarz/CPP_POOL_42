#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie{
private:
	std::string _name;
public:
	Zombie(std::string attr_name);
	~Zombie(void);
	void announce(void) const;
};

void	randomChump( std::string name );
Zombie *newZombie( std::string name );

#endif