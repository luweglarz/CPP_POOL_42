#include "Zombie.hpp"

void	randomChump( std::string name ){
	Zombie instance(name);
	instance.announce();
}