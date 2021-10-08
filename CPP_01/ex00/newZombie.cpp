#include "Zombie.hpp"

Zombie *newZombie( std::string name ){
	Zombie  *instance = new Zombie(name);
	instance->announce();
	return (instance);
}