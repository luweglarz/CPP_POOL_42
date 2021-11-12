#include "ClassConv.hpp"
#include <iomanip>

int check_arg(std::string str){
    if ((str.length() > 1) && (isalpha(str[0])) &&
        (str != "-inff" && str != "+inff" & str != "nanf") &&
        (str != "-inf" && str != "+inf" && str != "nan")){
            std::cout << "Arg not a literal" << std::endl;
            return (-1);
    }
    return (1);
}

int main(int ac, char **av){
    std::string cstr;

    if (ac == 2){
        cstr = av[1];
        if (check_arg(cstr) == -1)
            return (1);
        Conv converter(cstr);
        try{
            std::cout << std::setw(8) << std::left << "char:" << converter.get_cvalue() << std::endl;
        }
        catch(std::exception &c){
            std::cout << c.what() << std::endl;
        }
        try{
            std::cout << std::setw(8) << std::left << "int:" << converter.get_ivalue(false) << std::endl;
        }
        catch(std::exception &c){
            std::cout << c.what() << std::endl;
        }
        if (converter.get_dvalue() - converter.get_ivalue(true) == 0.0)
            std::cout << std::setw(8) << std::left << "float:" << converter.get_fvalue() << ".0f" << std::endl;
        else
            std::cout << std::setw(8) << std::left << "float:" << converter.get_fvalue() << "f" << std::endl;
        if (converter.get_dvalue() - converter.get_ivalue(true) == 0.0)
            std::cout << std::setw(8) << std::left << "double:" << converter.get_dvalue() << ".0" << std::endl;
        else
            std::cout << std::setw(8) << std::left << "double:" << converter.get_dvalue() <<  std::endl;
    }
    else{
        std::cout << "./convert takes 2 arguments" << std::endl;
        return (1);
    }
    return (0);
}