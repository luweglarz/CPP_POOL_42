#include "ClassConv.hpp"
#include <math.h>

Conv::Conv(std::string &str){
    if (str.length() == 1 && isalpha(str[0]))
        _dvalue = str[0];
    else
        _dvalue = std::stod(str);
}

Conv::Conv(const Conv &src){
    *this = src;
}

Conv &Conv::operator=(const Conv &src){
    _dvalue = src._dvalue;
    return(*this);
}

Conv::~Conv(){
}

char    Conv::get_cvalue() const{
    if (isnan(_dvalue) || isnanf(_dvalue) ||
        isinf(_dvalue) || isinff(_dvalue))
        throw NotPossible();
    if ((static_cast<int>(_dvalue) >= 0 && static_cast<int>(_dvalue) < 32) ||
        static_cast<int>(_dvalue) < 0 || !isprint(static_cast<int>(_dvalue)))
        throw NotDisplayable();
    return(static_cast<char>(_dvalue));
}

int     Conv::get_ivalue(bool sub) const{
    if ((isnan(_dvalue) || isnanf(_dvalue) ||
        isinf(_dvalue) || isinff(_dvalue)) && (sub == false))
        throw NotPossible();
    return(static_cast<int>(_dvalue));
}

float   Conv::get_fvalue() const{
    return(static_cast<float>(_dvalue));
}

double  Conv::get_dvalue() const{
    return(static_cast<double>(_dvalue));
}

const char *Conv::NotDisplayable::what() const throw(){
    return ("This value isn't displayable");
}

const char *Conv::NotPossible::what() const throw(){
    return ("Not possible operation");
}
