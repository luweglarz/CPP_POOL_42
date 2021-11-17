#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iterator>
#include <algorithm>
#include <iostream>

class Span
{
public:
    Span(unsigned int N);
    Span(const Span &src);
    Span &operator=(const Span &src);
    ~Span();

    void addNumber(int nb);
    void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
    int shortestSpan() const;
    int longestSpan() const;

    std::vector<int> getvector() const { return _vector; }
    unsigned int getsize() const { return _size; }

    struct ContainerIsFull : public std::exception
    {
        const char *what() const throw();
    };

    struct ContainerIsTooSmall : public std::exception
    {
        const char *what() const throw();
    };

    struct ContainerNoSpan : public std::exception
    {
        const char *what() const throw();
    };

private:
    unsigned int _size;
    std::vector<int> _vector;
};

#endif