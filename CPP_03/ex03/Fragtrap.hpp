#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "Claptrap.hpp"

class FragTrap: public virtual ClapTrap{
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &src);
	~FragTrap();

	void highFivesGuys(void);

private:
	
};


#endif