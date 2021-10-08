#include "Karen.hpp"

int main(int ac, char **av){
	Karen instance;
	std::string arg = av[1];

	if ((ac == 2) && (arg == "DEBUG" || arg == "INFO" || arg == "WARNING" || arg == "ERROR" ))
		instance.complain(arg);
	return (0);
}