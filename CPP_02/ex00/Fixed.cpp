#include "Fixed.hpp"

const int Fixed::width = 0;

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	_value = 0;
}

Fixed::Fixed(const Fixed &src){
	std::cout << "Copy constructor called" << std::endl;
	_value = src.getRawBits();
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &rhs){
	std::cout << "Assignation operator called" << std::endl;
	_value = getRawBits();
	return (*this);
}

int 	Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (_value);
}

void 	Fixed::setRawBits(int const raw){
	std::cout << "setRawBits member function called" << std::endl;
	_value = raw;
}