#include "Fixed.hpp"

Fixed::Fixed(): _value(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n): _value(n << this->f_bits){
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float n){
	std::cout << "Float constructor called" << std::endl;
	unsigned int frac_factor = (1 << this->f_bits);
	_value = (int)(n * frac_factor);
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
	this->_value = rhs.getRawBits();
	return (*this);
}

std::ostream	&operator<<(std::ostream &output, const Fixed &rhs){
	output << rhs.toFloat();
	return (output);
}

int 	Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (_value);
}

void 	Fixed::setRawBits(int const raw){
	std::cout << "setRawBits member function called" << std::endl;
	_value = raw;
}

float	Fixed::toFloat(void) const{
	unsigned int frac_factor = (1 << this->f_bits);
	return ((float)_value / (float)frac_factor);	
}

int	Fixed::toInt(void) const{
	unsigned int frac_factor = (1 << this->f_bits);
	return ((float)_value/ (float)frac_factor);	
}