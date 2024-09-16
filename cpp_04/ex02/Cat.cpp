#include "Cat.hpp"

Cat::Cat() : Animal(){
    std::cout << "Cat constructor" << std::endl;
    type = "Cat";
    brain = new Brain();
}
Cat::~Cat(){
    std::cout << "Cat destructor" << std::endl;
    delete brain;
}

Cat::Cat(const Cat &cat){
    (Animal&)*this=(Animal&)cat;
    this->brain = new Brain(*cat.brain);
}

Cat& Cat::operator=(const Cat &cat){
    if (this == &cat)
        return *this;
    this->type = cat.type;
    this->brain = new Brain(*cat.brain);
    return *this;
}

void Cat::makeSound() const{
    std::cout << "Meow Meow" << std::endl;
}
