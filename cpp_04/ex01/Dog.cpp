#include "Dog.hpp"

Dog::Dog() : Animal(){
    type = "Dog";
    brain = new Brain();
    std::cout << "Dog constructor" << std::endl;
}

Dog::~Dog(){
    delete brain;
    std::cout << "Dog destructor" << std::endl;
}

Dog::Dog(const Dog &dog){
    (Animal&)*this = (Animal&)dog;
    this->brain = new Brain(*dog.brain);
    std::cout << "Dog copy constructor" << std::endl;
}

Dog& Dog::operator=(const Dog &dog){
    if (this == &dog)
        return *this;
    this->type = dog.type;
    this->brain = new Brain(*dog.brain);
    return *this;
}

void Dog::makeSound() const{
    std::cout << "Woof Woof" << std::endl;
}