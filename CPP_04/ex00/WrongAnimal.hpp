#ifndef WRONGWRONGANIMAL_HPP
# define WRONGWRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal{
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &src);
	WrongAnimal &operator=(const WrongAnimal &rhs);
	~WrongAnimal();

	std::string		getType(void) const;
	void	makeSound() const;

protected:
	std::string _type;
};

#endif