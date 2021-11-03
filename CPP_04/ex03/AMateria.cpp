#include "AMateria.hpp"

AMateria::AMateria(const std::string &type): _type(type){
}

AMateria::AMateria(const AMateria &src){
	*this = src;
}

AMateria &AMateria::operator=(const AMateria &src){
	_type = src._type;
	return (*this);
}

AMateria::~AMateria(){
}

const std::string &AMateria::getType() const{
	return (_type);
}