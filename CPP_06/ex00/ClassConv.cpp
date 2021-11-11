#include "ClassConv.hpp"

Conv::Conv(std::string &str): _value(str), _cvalue(0), _ivalue(0), _fvalue(0.0f), _dvalue(0.0){
}

Conv::Conv(const Conv &src){
    *this = src;
}

Conv &Conv::operator=(const Conv &src){
    _value = src._value;
}

~Conv::Conv(){
}
