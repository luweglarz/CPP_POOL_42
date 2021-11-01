#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal{
public:
	Dog();
	Dog(const Dog &src);
	~Dog();
	Dog	&operator=(const Dog &rhs);
	virtual void	makeSound() const;

private:
	Brain	*_brain;
};

#endif