#include "Zombie.hpp"

Zombie::Zombie(std::string str)
{
    name = str;
}
Zombie::~Zombie()
{
    std::cout << name << " has been destroyed" << std::endl;
}

Zombie *newZombie(std::string str)
{
    Zombie *new_zombie;
    new_zombie = new Zombie(str);
    return(new_zombie);
}

void Zombie::announce(void)
{
    std::cout<< name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void randomChump(std::string str)
{
    Zombie *ptr = newZombie(str);
    ptr->announce();
    delete ptr;
}