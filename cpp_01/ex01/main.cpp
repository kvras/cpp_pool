#include "Zombie.hpp"

void f()
{
    system("leaks test");
}
int main(){
    atexit(f);
    Zombie *myZombies = zombieHorde(10, "Mixl");
    for(int i = 0; i < 10 ;i++){
        myZombies[i].announce();
    }
    delete[] myZombies;
}