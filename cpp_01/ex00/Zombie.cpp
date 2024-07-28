#include "Zombie.hpp"

Zombie::Zombie(std::string str)
{
    name = str;
}

Zombie *newZombie(std::string str)
{
    Zombie *new_zombie;
    new_zombie = new Zombie(str);
    return(new_zombie);
}

void Zombie::announce(void)
{
    std::cout<< name << ": BraiiiiiiinnnzzzZ...";
}

void randomChump(std::string str)
{
    Zombie *ptr = newZombie(str);
    ptr->announce();
}