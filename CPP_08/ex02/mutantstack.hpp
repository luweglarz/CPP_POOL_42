#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iterator>

template <typename T>
class MutantStack: public std::stack<T>{
public:
    MutantStack();
    MutantStack(const MutantStack &src);
    MutantStack &operator=(const MutantStack &src);
    ~MutantStack();
    
    typedef typename std::stack<T>::container_type cType;
    typedef typename cType::iterator iterator;

    iterator begin() {return (std::stack<T>::c.begin());}
    iterator end() {return (std::stack<T>::c.end());}
     

    

};

#endif