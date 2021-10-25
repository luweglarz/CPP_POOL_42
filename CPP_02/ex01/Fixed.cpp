#include "Fixed.hpp"

/**
    Fixed.cpp

	prototypes & purpose: Constructor & Destructor
		Fixed::Fixed()
			Set _value private member to 0
		Fixed::Fixed(const int n)
			Set fixed _value with (int)n
		Fixed::Fixed(const float n)
			Set fixed _value with (float)n
		Fixed::Fixed(const Fixed &src)
			Copy constructor
		Fixed::~Fixed()
			Destructor
    author: lweglarz
*/

Fixed::Fixed(): _value(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src){
	std::cout << "Copy constructor called" << std::endl;
	_value = src.getRawBits();
}

Fixed::Fixed(const int n): _value(n << this->f_bits){
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float n){
	std::cout << "Float constructor called" << std::endl;
	unsigned int frac_factor = (1 << this->f_bits);
	_value = (int)roundf((n * frac_factor));
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

/**
    Fixed.cpp

	prototypes & purpose: Operator overloads
		Fixed	&Fixed::operator=(const Fixed &rhs)
			Operator overload on '='
		std::ostream	&operator<<(std::ostream &output, const Fixed &rhs)
			Operator overload on '<<', rhs.toFloat() to &output
    author: lweglarz
*/

Fixed	&Fixed::operator=(const Fixed &rhs){
	std::cout << "Assignation operator called" << std::endl;
	this->_value = rhs.getRawBits();
	return (*this);
}

std::ostream	&operator<<(std::ostream &output, const Fixed &rhs){
	output << rhs.toFloat();
	return (output);
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

/**
    Fixed.cpp

	prototypes & purpose: Converters
		float	Fixed::toFloat(void) const
			Convert fixed _value to float
		int	Fixed::toInt(void) const
			Convert fixed _value to int
    author: lweglarz
*/

float	Fixed::toFloat(void) const{
	unsigned int frac_factor = (1 << this->f_bits);
	return ((float)_value / (float)frac_factor);	
}

int	Fixed::toInt(void) const{
	unsigned int frac_factor = (1 << this->f_bits);
	return ((float)_value/ (float)frac_factor);	
}