#include "Zombie.hpp"

Zombie *zombieHorde( int n, std::string name){
	
	Zombie *instance = new Zombie[n];
	
	for (int i = 0; i < n; i++){
		instance[i].set_name(name);
	}
	return (instance);
}