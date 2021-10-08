#include "Zombie.hpp"

int main(void){
	int n = 5;
	Zombie *instance;

	instance = zombieHorde(n, "Test");
	for (int i = 0; i < n; i++){
		instance[i].announce();
	}
	delete [] instance;
	return (0);
}