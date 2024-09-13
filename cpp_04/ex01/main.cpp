#include "Animal.hpp"

int main()
{
   const Animal* j = new Dog();
   const Animal* i = new Cat();
   delete j;
   delete i;
   while (1);
}