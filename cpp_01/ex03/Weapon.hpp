#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class Weapon{
    std::string type;
    public:
        Weapon(std::string str);
        std::string &getType(void);
        void setType(std::string newType);
};

#endif