#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"

int main(int ac, char **av){
	if (ac ==2){
		std::string input = av[1];
		const Animal *CorrecAnimal = NULL;
		const WrongAnimal *BadAnimal = NULL;

		if (input == "Animal"){
			CorrecAnimal = new Animal();
			BadAnimal = new WrongAnimal();
		}
		else if (input == "Dog"){
			CorrecAnimal = new Dog();
			BadAnimal = new WrongDog();
		}
		else if (input == "Cat"){
			CorrecAnimal = new Cat();
			BadAnimal = new WrongCat();
		}
		if (input == "Animal" || input == "Dog" || input == "Cat"){
			std::cout << "Correct class:" << std::endl;
			std::cout << CorrecAnimal->getType() << std::endl;
			CorrecAnimal->makeSound();
			std::cout << std::endl;
			std::cout << "Wrong class:" << std::endl;
			std::cout << BadAnimal->getType() << std::endl;
			BadAnimal->makeSound();
		}
	}
}