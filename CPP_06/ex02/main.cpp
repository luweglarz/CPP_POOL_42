#include "ClassA.hpp"
#include "ClassB.hpp"
#include "ClassC.hpp"
#include <stdlib.h>
#include <time.h>
#include <iostream>

Base *generate(void){
    Base *ptr = NULL;
    srand(time(NULL));
    int i = rand() % 3 + 1;
    switch (i)
    {
        case (1):
            ptr = new A;
            break;
        case (2):
            ptr = new B;
            break;
        case (3):
            ptr = new C;
            break;
        default:
            break;
    }
    return (ptr);
}

void    identify(Base *ptr){
    std::cout << "Identify with pointer:   ";
    if (dynamic_cast<A *>(ptr))
        std::cout << "A" << std::endl;
    if (dynamic_cast<B *>(ptr))
        std::cout << "B" << std::endl;
    if (dynamic_cast<C *>(ptr)) 
        std::cout << "C" << std::endl;
}

void    identify(Base &ref){
    std::cout << "Identify with reference: ";
    if (dynamic_cast<A *>(&ref))
        std::cout << "A" << std::endl;
    if (dynamic_cast<B *>(&ref))
        std::cout << "B" << std::endl;
    if (dynamic_cast<C *>(&ref)) 
        std::cout << "C" << std::endl;
}

int main(){
    Base *ptr = generate();
    identify(ptr);
    Base &ref = *ptr;
    identify(ref);
    return (0);
}