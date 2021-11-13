#include "ClassData.hpp"
#include <cstdint>
#include <iostream>

uintptr_t serialize(Data *ptr){
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data *deserialize(uintptr_t raw){
    return (reinterpret_cast<Data *>(raw));
}

int main(){
    Data *serializedata = new Data;
    serializedata->i = 42;
    serializedata->dbl = 63.30;
    serializedata->str = "String test";
    uintptr_t ptr = serialize(serializedata);

    Data *deserializeData = new Data;
    deserializeData = deserialize(ptr);

    std::cout << deserializeData->i << std::endl;
    std::cout << deserializeData->dbl << std::endl;
    std::cout << deserializeData->str << std::endl;
}