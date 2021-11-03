#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
	for (int i = 0; i < 4; i++)
		_materias[i] = nullptr;
}

MateriaSource::MateriaSource(const MateriaSource &src){
	*this = src;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &src){
	for (int i = 0; i < 4; i++)
		_materias[i] = src._materias[i];
	return (*this);
}

MateriaSource::~MateriaSource(){
	for (int i = 0; i < 4; i++)
		delete _materias[i];
}

void MateriaSource::learnMateria(AMateria *m){
	if (!m && _materias[3] != nullptr)
		return ;
	int i = 0;
	while (_materias[i] != nullptr)
		i++;
	_materias[i] = m->clone();
}

AMateria* MateriaSource::createMateria(std::string const &type){
	AMateria *ret = 0;
	for (int i = 0; _materias[i] != nullptr; i++){
		if (_materias[i]->getType() == type)
			ret = _materias[i];
	}
	return (ret);
}