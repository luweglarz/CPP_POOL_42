#include "Zombie.hpp"

int main(void){
	Zombie *HeapZombie1;

	HeapZombie1 = newZombie("HeapZombie1");
	HeapZombie1->announce();
	randomChump("StackZombie");
	delete HeapZombie1;
	return (0);
}