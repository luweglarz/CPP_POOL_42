#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed{
	public:
		Fixed();
		Fixed(const int n);
		Fixed(const float n);
		Fixed(const Fixed &src);
		~Fixed();
	
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		Fixed &operator=(const Fixed &rhs);

	private:
		int	_value;
		const static int f_bits = 8;	
};

std::ostream	&operator<<(std::ostream &output, const Fixed &rhs);

#endif