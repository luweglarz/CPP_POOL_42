#include "Fixed.hpp"

/**
    Fixed.cpp

	prototypes & purpose: Constructor & Destructor
		Fixed::Fixed()
			Set _value private member to 0
		Fixed::Fixed(const Fixed &src)
			Copy constructor
		Fixed::~Fixed()
			Destructor
    author: lweglarz
*/

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

/**
    Fixed.cpp

	prototypes & purpose: Operator overload
		Fixed	&Fixed::operator=(const Fixed &rhs)
			Operator overload on '='
    author: lweglarz
*/

Fixed	&Fixed::operator=(const Fixed &rhs){
	std::cout << "Assignation operator called" << std::endl;
	_value = getRawBits();
	return (*this);
}

/**
    Fixed.cpp

	prototypes & purpose: Setter & getter
		int 	Fixed::getRawBits(void) const
			Get the raw value of the fixed number
		void 	Fixed::setRawBits(int const raw)
			Set the raw value of the fixed number
    author: lweglarz
*/

int 	Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (_value);
}

void 	Fixed::setRawBits(int const raw){
	std::cout << "setRawBits member function called" << std::endl;
	_value = raw;
}