#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
class HumanB{
    Weapon *wp;
    std::string name;
    public:
        HumanB(std::string str);
        void setWeapon(Weapon& bWeapon);
        void attack(void);
};
#endif