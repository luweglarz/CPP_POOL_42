#include "Karen.hpp"

int main(int ac, char **av){
	Karen instance;
	if (ac == 2)
		instance.complain(av[1]);
	return (0);
}