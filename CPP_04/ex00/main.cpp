#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(int ac, char **av){
	if (ac ==2){
		std::string input = av[1];
		const Animal *animal;

		if (input == "Animal")
			animal = new Animal();
		else if (input == "Dog")
			animal = new Dog();
		else if (input == "Cat")
			animal = new Cat();

		std::cout << animal->getType() << " " << std::endl;
		animal->makeSound();
	}
}