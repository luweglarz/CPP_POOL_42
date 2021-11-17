#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <algorithm>

struct OccurenceNotFound : public std::exception
{
    const char *what() const throw();
};

const char *OccurenceNotFound::what() const throw()
{
    return ("Occurence not found in the container");
}

template <typename T>
int easyfind(const T &t, int n)
{
    if (std::find(t.begin(), t.end(), n) != t.end())
        return (n);
    else
        throw OccurenceNotFound();
}

#endif