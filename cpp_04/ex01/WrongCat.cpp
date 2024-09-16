#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}


WrongCat::WrongCat(const WrongCat &wrongCat)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = wrongCat;
}


WrongCat& WrongCat::operator=(const WrongCat &wrongCat)
{
    std::cout << "WrongCat assignation operator called" << std::endl;
    if (this == &wrongCat)
        return *this;
    this->type = wrongCat.type;
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "Wrong Meow Meow" << std::endl;
}
