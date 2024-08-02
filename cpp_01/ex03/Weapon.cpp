#include "Weapon.hpp"

std::string &Weapon::getType(){
    std::string &ref = type;
    return ref;
}

void Weapon::setType(std::string newType){
    type = newType;
}

Weapon::Weapon(std::string str){
    type = str;
};
