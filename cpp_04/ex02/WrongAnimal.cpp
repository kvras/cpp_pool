#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(const std::string &type) : type(type){
    std::cout << "WrongAnimal constructor" << std::endl;
}

WrongAnimal::WrongAnimal() : type("?"){
    std::cout << "WrongAnimal constructor" << std::endl;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal destructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wronganimal){
    std::cout << "WrongAnimal copy constructor" << std::endl;
    *this = wronganimal;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &wronganimal){
    if (this == &wronganimal)
        return *this;
    this->type = wronganimal.type;
    return *this;
}

const std::string& WrongAnimal::getType() const{
    return type;
}

void WrongAnimal::makeSound() const{
    std::cout << " ? sound" << std::endl;
}

