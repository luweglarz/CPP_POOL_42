#ifndef CONV_HPP
# define CONV_HPP

#include <string>
#include <iostream>

class Conv{
public:
    Conv(std::string &str);
    Conv(const Conv &src);
    Conv &operator=(const Conv &src);
    ~Conv();

private:
    const std::string &_value;
    char    _cvalue;
    int     _ivalue;
    float   _fvalue;
    double  _dvalue; 
};


#endif