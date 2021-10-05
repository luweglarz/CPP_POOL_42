#include <iostream>
#include <string>

int main(int ac, char **av)
{
	if (ac == 0)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < ac; i++)
		{
			std::string arg(av[i]);
			for (unsigned int j = 0; j < arg.length(); j++)
				std::cout << (char)toupper(arg[j]);
		}
		std::cout << std::endl;
	}
}