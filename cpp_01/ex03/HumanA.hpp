#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"
class HumanA{
    Weapon& wp;
    std::string name;
    public:
        HumanA(std::string str, Weapon& aWeapon);
        void attack(void);
};
#endif