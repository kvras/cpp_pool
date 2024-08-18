#include "HumanA.hpp"

HumanA::HumanA(std::string str, Weapon& aWeapon) : wp(aWeapon){
    name = str;
};

void HumanA::attack(void){
    std::cout << name << " attacks with their " << wp.getType() << std::endl;
}
