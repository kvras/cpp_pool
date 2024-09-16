#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    WrongAnimal* wrong = new WrongAnimal();
    std::cout << wrong->getType() << " " << std::endl;
    wrong->makeSound();
    
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    delete wrong;
    delete meta;
    delete j;
    delete i;
    return 0;
}