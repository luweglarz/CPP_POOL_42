#include "Zombie.hpp"

int main(void){
	Zombie *HeapZombie1;

	HeapZombie1 = newZombie("HeapZombie1");
	randomChump("StackZombie");
	delete HeapZombie1;
	newZombie("HeapZombie2");
	return (0);
}