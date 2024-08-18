#include "Zombie.hpp"

int main(){
    Zombie *myZombies = zombieHorde(10, "Mixl");
    for(int i = 0; i < 10 ;i++){
        myZombies[i].announce();
    }
    delete[] myZombies;
}