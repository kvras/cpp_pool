#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>

class Data;

class Serializer{
    public:
        static uintptr_t serialize(Data *ptr);
        static Data* deserialize(uintptr_t raw);
};

#endif