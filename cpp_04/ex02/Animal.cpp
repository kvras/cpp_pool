#include "Animal.hpp"


Animal::Animal() : type("?"){
    std::cout << "Animal constructor" << std::endl;
}

Animal::~Animal(){
    std::cout << "Animal destructor" << std::endl;
}

Animal::Animal(const Animal &animal){
    std::cout << "Animal copy constructor" << std::endl;
    *this = animal;
}

Animal& Animal::operator=(const Animal &animal){
    if (this == &animal)
        return *this;
    this->type = animal.type;
    return *this;
}

const std::string& Animal::getType() const{
    return type;
}
