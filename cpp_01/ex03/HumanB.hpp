#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
class HumanB{
    Weapon& wp;
    std::string name;
    public:
        void attack(void);
};
#endif