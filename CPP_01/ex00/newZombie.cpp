#include "Zombie.hpp"

Zombie *newZombie( std::string name ){
	Zombie  *instance = new Zombie(name);
	return (instance);
}