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

    char    get_cvalue() const;
    int     get_ivalue(bool sub) const;
    float   get_fvalue() const;
    double  get_dvalue() const;

    struct NotDisplayable: std::exception{
        const char *what() const throw();
    };
    struct NotPossible: std::exception{
        const char *what() const throw();
    };

private:
    long double   _dvalue;
};


#endif