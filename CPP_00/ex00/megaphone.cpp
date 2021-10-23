#include <iostream>
#include <string>

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

int main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < ac; i++)
		{
			std::string arg(av[i]);
			for (unsigned int j = 0; j < arg.length(); j++)
				std::cout << (char)ft_toupper(arg[j]);
		}
		std::cout << std::endl;
	}
}