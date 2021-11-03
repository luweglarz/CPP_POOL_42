#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class AMateria{
public:
	AMateria(const std::string &type);
	AMateria(const AMateria &src);
	AMateria &operator=(const AMateria &src);
	virtual ~AMateria();

	const std::string &getType() const;
	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target) const = 0;

protected:
	std::string _type;
};

#endif