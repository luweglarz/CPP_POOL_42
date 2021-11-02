#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(){
	Animal *array[10];
	for (int i = 0; i < 10; i++){
		if (i % 2 == 0)
			array[i] = new Dog;
		else
			array[i] = new Cat;
	}
	std::cout << std::endl;
	for (int i = 0; i < 10; i++){
		std::cout << array[i]->getType() << std::endl;
		array[i]->makeSound();
	}
	std::cout << std::endl;
	Cat deep;
	std::cout << std::endl;
	Cat cpy(deep);
	std::cout << std::endl;

	std::string *deepideas = deep.getIdeas();
	std::string *cpyideas = cpy.getIdeas();
	std::cout << "deepideas[4] before setting deepideas: " << deepideas[4] << std::endl;
	std::cout << "cpyideas[4] before setting deepideas: " << cpyideas[4] << std::endl;
	deep.setIdeas("test");
	deepideas = deep.getIdeas();
	cpyideas = cpy.getIdeas();
	std::cout << "deepideas[4] after setting deepideas: " << deepideas[4] << std::endl;
	std::cout << "cpyideas[4] after setting deepideas: " << cpyideas[4] << std::endl << std::endl;

	for (int i = 0; i < 10; i++)
		delete array[i];
}