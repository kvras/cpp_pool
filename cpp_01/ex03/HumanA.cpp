#include "HumanA.hpp"

HumanA::HumanA(std::string str, Weapon aWeapon){
    name = str;
    wp = aWeapon;
};
void HumanA::attack(void){
    std::cout << name << " attacks with their" << wp.type << std::endl;
}
