#include "Animal.hpp"

// <-----------------Animal-------------------->

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
void Animal::makeSound() const{
    std::cout << " ? sound" << std::endl;
}

// <-----------------Dog-------------------->


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

// <-----------------Cat-------------------->

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