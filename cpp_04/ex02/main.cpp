#include "Cat.hpp"
#include "Dog.hpp"
int main()
{
   // Animal a;   // Error: cannot instantiate abstract class
   const Animal* j = new Dog();
   const Animal* i = new Cat();
   delete j;
   delete i;
}