#include "HumanB.hpp"

HumanB::HumanB(std::string str) : wp(NULL){
    name = str;
}

void HumanB::setWeapon(Weapon& bWeapon){
    wp = &bWeapon;
}

void HumanB::attack(void){
    if (wp == NULL){
        std::cout << name << " has no weapon to attack with" << std::endl;
        return;
    }
    std::cout << name << " attacks with their " << wp->getType() << std::endl;
}