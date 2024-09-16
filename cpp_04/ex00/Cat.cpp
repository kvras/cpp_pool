#include "Cat.hpp"

Cat::Cat() : Animal(){
    std::cout << "Cat constructor" << std::endl;
    type = "Cat";
}
Cat::~Cat(){
    std::cout << "Cat destructor" << std::endl;
}

Cat::Cat(const Cat &cat){
    (Animal&)*this=(Animal&)cat;
}

Cat& Cat::operator=(const Cat &cat){
    if (this == &cat)
        return *this;
    this->type = cat.type;
    return *this;
}

void Cat::makeSound() const{
    std::cout << "Meow Meow" << std::endl;
}
