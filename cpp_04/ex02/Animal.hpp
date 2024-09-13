#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"
class Animal{
    protected :
        std::string type;
    public :
        Animal();
        virtual ~Animal();
        Animal(const Animal &animal);
        Animal& operator=(const Animal &animal);
    
        const std::string& getType() const;
        virtual void makeSound() const;
};

class Dog : public Animal{
    private :
        Brain *brain;
    public :
        Dog();
        ~Dog();
        Dog(const Dog &dog);
        Dog& operator=(const Dog &dog);
        void makeSound() const;
};

class Cat : public Animal{
    private :
        Brain *brain;
    public :
        Cat();
        ~Cat();
        Cat(const Cat &cat);
        Cat& operator=(const Cat &cat);
        void makeSound() const;
};

#endif