#include "Zombie.hpp"

Zombie *newZombie(std::string str)
{
    Zombie *new_zombie;
    new_zombie = new Zombie(str);
    return(new_zombie);
}