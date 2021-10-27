#include "Karen.hpp"

int main(int ac, char **av){
	Karen instance;
	if (ac == 2){
		std::string arg = av[1];
		if (arg == "DEBUG" || arg == "INFO" || arg == "WARNING" || arg == "ERROR" )
			instance.complain(arg);
		else
			std::cout << "You must only have one of those arguments: [DEBUG, INFO, WARNING, ERROR]" << std::endl;
	}
	else
		std::cout << "You must only have one of those arguments: [DEBUG, INFO, WARNING, ERROR]" << std::endl;
	return (0);
}