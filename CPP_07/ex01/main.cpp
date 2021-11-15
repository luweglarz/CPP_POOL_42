#include "iter.hpp"
#include <iostream>
#include <cmath>

template <typename T>
void print_idx(T &v)
{
    std::cout << v << std::endl;
}

template <typename T>
void square_idx(T &v)
{
    v = pow(v, 2);
}

int main()
{
    int array[4] = {1, 2, 3, 4};
    std::cout << "array before applying function " << std::endl;
    iter(array, 4, print_idx);
    iter(array, 4, square_idx);
    std::cout << "array after applying function " << std::endl;
    iter(array, 4, print_idx);
}