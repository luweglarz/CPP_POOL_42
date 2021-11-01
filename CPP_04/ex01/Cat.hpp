#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal{
public:
	Cat();
	Cat(const Cat &src);
	~Cat();
	Cat	&operator=(const Cat &rhs);
	virtual void	makeSound() const;
	std::string *getIdeas() const;
	void setIdeas(const std::string &idea);
private:
	Brain	*_brain;
};

#endif