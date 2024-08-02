#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string str){
    Zombie *Zombies = new Zombie[N];
    for(int i = 0;i < N;i++){
        Zombies[i].setName(str);
    }
    return Zombies;
}