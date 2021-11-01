#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(){
	// Animal *array[10];
	// for (int i = 0; i < 10; i++){
	// 	if (i % 2 == 0)
	// 		array[i] = new Dog;
	// 	else
	// 		array[i] = new Cat;
	// }
	// for (int i = 0; i < 10; i++){
	// 	std::cout << array[i]->getType() << std::endl;
	// 	array[i]->makeSound();
	// }

	Cat deep;
	std::cout << std::endl;
	// Cat cpy(deep);
	// std::cout << std::endl;
	std::string *ideas = deep.getIdeas();
	std::cout << ideas[2] << std::endl;

	// for (int i = 0; i < 10; i++)
	// 	delete array[i];
}