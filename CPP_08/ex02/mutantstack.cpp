#include "mutantstack.hpp"

template <typename T>
MutantStack<T>::MutantStack(): std::stack<T>(){
}

template <typename T>
MutantStack<T>::~MutantStack(){
}

template <typename T>

MutantStack<T>::MutantStack(const MutantStack &src): std::stack<T>(src){
    *this = src;
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &src){
    std::stack<T>::operator=(src);
    return (*this);
}