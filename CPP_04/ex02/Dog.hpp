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
	std::string *getIdeas() const;
	void setIdeas(const std::string &idea);
private:
	Brain	*_brain;
};

#endif