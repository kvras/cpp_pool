#include "Serializer.hpp"

class Data{
    public :    
        std::string _data;
};

int main(){
    Data test;
    test._data="amine";
    uintptr_t int_ptr = Serializer::serialize(&test);
    Data *data_ptr = Serializer::deserialize(int_ptr);
    std::cout << data_ptr->_data << std::endl;
 }