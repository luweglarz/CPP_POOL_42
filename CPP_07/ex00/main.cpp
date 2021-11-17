#include <iostream>
#include "whatever.hpp"

void T_int()
{
    int a = 21;
    int b = 42;

    std::cout << "Tests with int" << std::endl;
    std::cout << "____________________" << std::endl;
    std::cout << "a before swap: " << a << std::endl;
    std::cout << "b before swap: " << b << std::endl
              << std::endl;
    ::swap(a, b);
    std::cout << "a after swap: " << a << std::endl;
    std::cout << "b after swap: " << b << std::endl
              << std::endl;
    std::cout << "the smallest number is: " << ::min(a, b) << std::endl;
    std::cout << "the highest number is: " << ::max(a, b) << std::endl << std::endl;
}

void T_float()
{
    float a = 21.32;
    float b = 42.131;

    std::cout << "Tests with float" << std::endl;
    std::cout << "____________________" << std::endl;
    std::cout << "a before swap: " << a << std::endl;
    std::cout << "b before swap: " << b << std::endl
              << std::endl;
    swap(a, b);
    std::cout << "a after swap: " << a << std::endl;
    std::cout << "b after swap: " << b << std::endl
              << std::endl;
    std::cout << "the smallest number is: " << ::min(a, b) << std::endl;
    std::cout << "the highest number is: " << ::max(a, b) << std::endl << std::endl;
}

void T_string()
{
    std::string a = "Hello";
    std::string b = "Worldd";

    std::cout << "Tests with string" << std::endl;
    std::cout << "____________________" << std::endl;
    std::cout << "a before swap: " << a << std::endl;
    std::cout << "b before swap: " << b << std::endl
              << std::endl;
    ::swap(a, b);
    std::cout << "a after swap: " << a << std::endl;
    std::cout << "b after swap: " << b << std::endl
              << std::endl;
    std::cout << "the smallest string is: " << ::min(a, b) << std::endl;
    std::cout << "the highest string is: " << ::max(a, b) << std::endl;
}

int main()
{
    T_int();
    T_float();
    T_string();
}