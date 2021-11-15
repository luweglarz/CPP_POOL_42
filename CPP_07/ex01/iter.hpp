#ifndef ITER_HPP
#define ITER_HPP

template <typename addr>
void iter(addr *Aaddr, int Alength, void (*funcptr)(addr &))
{
    for (int i = 0; i < Alength; i++)
        funcptr(Aaddr[i]);
}

#endif