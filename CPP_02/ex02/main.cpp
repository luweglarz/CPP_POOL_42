#include "Fixed.hpp"

int main(void) {
	Fixed eq1(10);
	Fixed eq2(10);
	Fixed a;
	Fixed b(Fixed(5.05f) * Fixed(2));
 
	if (a < b)
		std::cout << "a is smaller " << std::endl;
	else if (b < a)
		std::cout << "b is smaller " << std::endl;
	if (a > b)
		std::cout << "a is bigger " << std::endl;
	else if (b > a)
		std::cout << "b is bigger" << std::endl << std::endl;
	
	if (eq1 == eq2)
		std::cout << "eq1 & eq2 are equal" << std::endl;
	if (eq1 != eq2)
		std::cout << "eq1 & eq2 aren't equal" << std::endl;

	if (eq1 == a)
		std::cout << "eq1 & a are equal" << std::endl;
	if (eq1 != a)
		std::cout << "eq1 & a aren't equal" << std::endl << std::endl;
	
	std::cout << "eq1 is " << eq1 << " Raw value is " << eq1.getRawBits() << std::endl;
	std::cout << "eq1 + 10: " << eq1 + 10 << std::endl;
	std::cout << "eq1 is " << eq1 << " Raw value is " << eq1.getRawBits() << std::endl;
	std::cout << "eq1 * 2: " << eq1 * 2 << std::endl;
	std::cout << "eq1 is " << eq1 << " Raw value is " << eq1.getRawBits() << std::endl;
	std::cout << "eq1 - 10: " << eq1 - 10 << std::endl;
	std::cout << "eq1 is " << eq1 << " Raw value is " << eq1.getRawBits() << std::endl;
	std::cout << "eq1 / 2: " << eq1 / 2 << std::endl;
	std::cout << "eq1 is " << eq1 << " Raw value is " << eq1.getRawBits() << std::endl << std::endl;

 	std::cout << "a is " << a << " Raw value is " << a.getRawBits() << std::endl;
	std::cout << "pre incrementation: " << ++a << std::endl;
	std::cout << "a is " << a << " Raw value is " << a.getRawBits() << std::endl;
	std::cout << "post incrementation: " << a++ << std::endl;
	std::cout << "a is " << a << " Raw value is " << a.getRawBits() << std::endl << std::endl;
	
	std::cout << "b is " << a << " Raw value is " << b.getRawBits() << std::endl;
	std::cout << "pre decrementation: " << --b << std::endl;
	std::cout << "b is " << a << " Raw value is " << b.getRawBits() << std::endl;
	std::cout << "post decrementation: " << b-- << std::endl;
	std::cout << "b is " << a << " Raw value is " << b.getRawBits() << std::endl;


	std::cout << Fixed::max(a, b) << std::endl;
return 0;
}