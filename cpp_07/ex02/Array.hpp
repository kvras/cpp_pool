#pragma once
#include <iostream>
template <typename T>

class Array{
    private:
        T *array;
        unsigned int array_size;
        unsigned int index;
    public:
        Array(): array(0),array_size(0),index(0){};
        Array(unsigned int size):index(0){
            this->array_size = size;
            array = new T[size];
        };
        Array(const Array&obj){
            *this = obj;
        };

        ~Array(){
            if (array)
                delete array;
        }

        Array& operator=(const Array& obj) const{
            if (this != &obj)
            {
                this->array_size = obj.array_size;
                if (this->array)
                    delete this->array;
                this->array = new T[array_size];
                for (size_t i =0;i < array_size;i++)
                    array[i] = obj.array[i];
                this->index = obj.index;
            }
            return *this;
        };
        T& operator[](unsigned int pindex){
            if (pindex >= array_size  || pindex < 0)
                throw std::out_of_range("out of range");
            return array[pindex];
        };
        unsigned int size() const {
            return array_size;
        };
};