#include "Dog.hpp"
#include "Cat.hpp"

void f()
{
   system("leaks brain");
}

int main()
{
   atexit(f);
   Animal *Animals[6];
   Animals[0] = new Dog();
   Animals[1] = new Dog();
   Animals[2] = new Dog();
   Animals[3] = new Cat();
   Animals[4] = new Cat();
   Animals[5] = new Cat();
   for (int i = 0; i < 6; i++)
   {
       delete Animals[i];
   }
   
}