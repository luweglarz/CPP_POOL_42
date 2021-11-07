#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target): AForm(145, 137, "ShrubberyCreationForm"){
	std::cout << "ShrubberyCreationForm constructor called" << std::endl;
	_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src): AForm(145, 137, "ShrubberyCreationForm"){
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
	*this = src;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src){
	AForm::operator=(src);
	_target = src._target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

void	ShrubberyCreationForm::execute(const Bureaucrat &executor) const{
	AForm::execute(executor);
	std::string string_name = _target;
	string_name.append("_shrubbery");
	std::ofstream file(string_name);


	file << "                   ,           ,                :;%  %;" << std::endl;
	file << "                    :         ;                   :;%;'     .," << std::endl;
	file << "           ,.        %;     %;            ;        %;'    ,;" << std::endl;
	file << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
	file << "              %;       %;%;      ,  ;       %;  ;%;   ,%;'" << std::endl;
	file << "               ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
	file << "                `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
	file << "                 `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
	file << "                    `:%;.  :;bd%;          %;@%;'" << std::endl;
	file << "                      `@%:.  :;%.         ;@@%;'" << std::endl;
	file << "                        `@%.  `;@%.      ;@@%;" << std::endl;
	file << "                          `@%%. `@%%    ;@@%;" << std::endl;
	file << "                            ;@%. :@%%  %@@%;" << std::endl;
	file << "                              %@bd%%%bd%%:;" << std::endl;
	file << "                                #@%%%%%:;;" << std::endl;
	file << "                                %@@%%%::;" << std::endl;
	file << "                                %@@@%(o);  . '" << std::endl;
	file << "                              %@@@o%;:(.,'" << std::endl;
	file << "                           `.. %@@@o%::;" << std::endl;
	file << "                               `)@@@o%::;" << std::endl;
	file << "                                %@@(o)::;" << std::endl;
	file << "                               .%@@@@%::;" << std::endl;
	file << "                              ;%@@@@%%:;;;." << std::endl;
	file << "                          ...;%@@@@@%%:;;;;,.." << std::endl;
	file.close();
}