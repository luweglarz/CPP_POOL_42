#include "easyfind.hpp"
#include <iostream>
#include <array>
#include <vector>
#include <list>

int main()
{
    std::array<int, 10> arraytype;
    for (int i = 0; i < 10; i++)
    {
        arraytype[i] = i;
    }
    std::vector<int> vectortype(arraytype.begin(), arraytype.end());
    std::list<int> listtype(10, 4);
    try
    {
        std::cout << easyfind(arraytype, 5) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        std::cout << easyfind(vectortype, 5) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        std::cout << easyfind(listtype, 5) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}