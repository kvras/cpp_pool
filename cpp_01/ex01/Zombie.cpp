#include "Zombie.hpp"

void Zombie::setName(std::string str){
    name =str;
}

void Zombie::announce(){
    std::cout<< name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}
