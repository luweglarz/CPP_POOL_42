#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed{
	public:
		Fixed();
		Fixed(const Fixed &src);
		Fixed &operator=(const Fixed &rhs);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);

	private:
		int	_value;
		const static int width;	
};

#endif