#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal{
public:
	Animal();
	Animal(const Animal &src);
	Animal &operator=(const Animal &rhs);
	~Animal();

	std::string		getType(void) const;
	virtual void	makeSound() const;

protected:
	std::string _type;
};

#endif