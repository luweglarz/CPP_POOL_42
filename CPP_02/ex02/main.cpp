#include "Fixed.hpp"

int main(void) {
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
 
	std::cout << "a is " << a << std::endl;
	std::cout << "pre incrementation: " << ++a << std::endl;
	std::cout << "a is " << a << std::endl;
	std::cout << "post incrementation: " << a++ << std::endl;
	std::cout << "a is " << a << std::endl;
	std::cout << b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;
return 0;
}