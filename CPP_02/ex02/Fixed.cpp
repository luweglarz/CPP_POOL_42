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
}

Fixed::Fixed(const Fixed &src){
	_value = src.getRawBits();
}

Fixed::Fixed(const int n): _value(n << this->f_bits){
}

Fixed::Fixed(const float n){
	unsigned int frac_factor = (1 << this->f_bits);
	_value = (int)roundf((n * frac_factor));
}

Fixed::~Fixed(){
}

/**
    Fixed.cpp

	prototypes & purpose: Operator overloads
		Fixed	&Fixed::operator=(const Fixed &rhs)
			Operator overload on '=', return copy of &rhs
		std::ostream	&operator<<(std::ostream &output, const Fixed &rhs)
			Operator overload on '<<', rhs.toFloat() to &output
    author: lweglarz
*/


Fixed	&Fixed::operator=(const Fixed &rhs){
	this->_value = rhs.getRawBits();
	return (*this);
}

std::ostream	&operator<<(std::ostream &output, const Fixed &rhs){
	output << rhs.toFloat();
	return (output);
}

/**
    Fixed.cpp

	prototypes & purpose: Comparison operator overloads
		bool	operator<(const Fixed &rhs;
		bool	operator<=(const Fixed &rhs)
		bool	operator>(const Fixed &rhs)
		bool	operator>=(const Fixed &rhs)
		bool	operator==(const Fixed &rhs)
		bool	operator!=(const Fixed &rhs)
    author: lweglarz
*/

bool	Fixed::operator<(const Fixed &rhs) const{
	if (_value < rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<=(const Fixed &rhs) const{
	if (_value <= rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>(const Fixed &rhs) const{
	if (_value > rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>=(const Fixed &rhs) const {
	if (_value >= rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator==(const Fixed &rhs) const {
	if (_value == rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator!=(const Fixed &rhs) const {
	if (_value != rhs.getRawBits())
		return (true);
	return (false);
}

/**
    Fixed.cpp

	prototypes & purpose: Arithmetic operator overloads
		Fixed	operator+(const Fixed &rhs)
		Fixed	operator-(const Fixed &rhs)
		Fixed	operator*(const Fixed &rhs)
		Fixed	operator/(const Fixed &rhs)
    author: lweglarz
*/

Fixed	Fixed::operator+(const Fixed &rhs) const{
	Fixed res;

	res.setRawBits(_value + rhs.toFloat());
	return (res);
}

Fixed	Fixed::operator-(const Fixed &rhs) const{
	Fixed res;

	res.setRawBits(_value - rhs.toFloat());
	return (res);
}

Fixed	Fixed::operator*(const Fixed &rhs) const{
	Fixed res;

	res.setRawBits(_value * rhs.toFloat());
	return (res);
}

Fixed	Fixed::operator/(const Fixed &rhs) const{
	Fixed res;

	res.setRawBits(_value / rhs.toFloat());
	return (res);
}

/**
    Fixed.cpp

	prototypes & purpose: Incrementation operator overloads
		Fixed	&Fixed::operator++()
		Fixed	Fixed::operator++(int)
		Fixed	&Fixed::operator--()
		Fixed	Fixed::operator--(int)
    author: lweglarz
*/

Fixed	&Fixed::operator++(){
	_value++;
	return (*this);
}

Fixed	Fixed::operator++(int){
	Fixed res;
	
	res = *this;
	++*this;
	return (res);
}

Fixed	&Fixed::operator--(){
	_value--;
	return (*this);
}

Fixed	Fixed::operator--(int){
	Fixed res;
	
	res = *this;
	--*this;
	return (res);
}

/**
    Fixed.cpp

	prototypes & purpose: Function overloads
	Fixed	&Fixed::min(Fixed &lhs, Fixed &rhs)
	const	Fixed &Fixed::min(const Fixed &lhs, const Fixed &rhs)
	Fixed	&Fixed::max(const Fixed &lhs, const Fixed &rhs)
	const 	Fixed &Fixed::max(const Fixed &lhs, const Fixed &rhs)
    author: lweglarz
*/

Fixed	&Fixed::min(Fixed &lhs, Fixed &rhs){
	if (lhs.getRawBits() < rhs.getRawBits())
		return (lhs);
	return (rhs);
}

const	Fixed &Fixed::min(const Fixed &lhs, const Fixed &rhs){
	if (lhs.getRawBits() < rhs.getRawBits())
		return (lhs);
	return (rhs);
}

Fixed	&Fixed::max(Fixed &lhs, Fixed &rhs){
	if (lhs.getRawBits() > rhs.getRawBits())
		return (lhs);
	return (rhs);
}

const 	Fixed &Fixed::max(const Fixed &lhs, const Fixed &rhs){
	if (lhs.getRawBits() > rhs.getRawBits())
		return (lhs);
	return (rhs);
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
	return (_value);
}

void 	Fixed::setRawBits(int const raw){
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