#include "span.hpp"

Span::Span(unsigned int N) : _size(N)
{
}

Span::~Span()
{
}

void Span::addNumber(int nb)
{
    if (_vector.size() == _size)
        throw ContainerIsFull();
    _vector.push_back(nb);
    std::sort(_vector.begin(), _vector.end());
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    while (begin != end)
    {
        if (_vector.size() == _size)
            return;
        _vector.push_back(*begin);
        begin++;
    }
    std::sort(_vector.begin(), _vector.end());
}

int Span::shortestSpan() const
{
    if (_vector.size() <= 1)
        throw ContainerIsTooSmall();
    int tmp = *(_vector.begin() + 1) - *_vector.begin();
    auto it = _vector.begin();
    while (it != _vector.end() - 1){
        if (tmp > *(it + 1) - *it){
            tmp = *(it + 1) - *it;}
        it++;
    }
    if (tmp == 0)
        throw ContainerNoSpan();
    return (tmp);
}

int Span::longestSpan()const {
    if (_vector.size() <= 1)
        throw ContainerIsTooSmall();
    int longest = *(_vector.end() -1) - *(_vector.begin());
    if (longest == 0)
        throw ContainerNoSpan();
    return (longest);
}

const char *Span::ContainerIsFull::what() const throw()
{
    return ("Container is full");
}

const char *Span::ContainerIsTooSmall::what() const throw()
{
    return ("Container is too small");
}

const char *Span::ContainerNoSpan::what() const throw(){
    return ("No Span found");
}