#ifndef MATERAISOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource: public IMateriaSource{
public:
	MateriaSource();
	MateriaSource(const MateriaSource &src);
	MateriaSource &operator=(const MateriaSource &src);
	~MateriaSource();

	void learnMateria(AMateria *m);
	AMateria* createMateria(std::string const &type);

private:
	AMateria *_materias[4];
};

#endif