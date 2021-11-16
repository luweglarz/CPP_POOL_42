#ifndef ARRAY_HPP
#define ARRAY_HPP

#include "string.h"

template <typename T>
class Array
{
public:
    Array(){
        _array = NULL;
        _len = 0;
    };

    Array(unsigned int n){
        _array = new T[n];
        _len = n;
    };

    Array(const Array &src){
        *this = src;
    }

    Array &operator=(const Array &src){
        _len = src._len;
        _array = new T[_len];
        for (unsigned int i = 0; i < _len; i++)
            _array[i] = src._array[i];
        return (*this);
    };

    ~Array() { delete [] _array;};

    unsigned int size() const{return _len;};

    T   &operator[](unsigned int idx){
        if (size() <= idx)
            throw OutOfLimits();
        return (_array[idx]);
    };
    
    struct OutOfLimits: public std::exception{
        const char *what() const throw(){
            return ("Out of the limit of the array");
        }
    };

private:
    T *_array;
    unsigned int _len;
};

#endif