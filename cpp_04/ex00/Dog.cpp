#include "Dog.hpp"

Dog::Dog() : Animal(){
    type = "Dog";
    std::cout << "Dog constructor" << std::endl;
}

Dog::~Dog(){
    std::cout << "Dog destructor" << std::endl;
}

Dog::Dog(const Dog &dog){
    (Animal&)*this = (Animal&)dog;
    std::cout << "Dog copy constructor" << std::endl;
}

Dog& Dog::operator=(const Dog &dog){
    if (this == &dog)
        return *this;
    this->type = dog.type;
    return *this;
}

void Dog::makeSound() const{
    std::cout << "Woof Woof" << std::endl;
}