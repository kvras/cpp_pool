#include "Weapon.hpp"

const std::string& Weapon::getType(){
    const std::string& ref = type;
    return ref;
}

void Weapon::setType(std::string newType){
    type = newType;
}

Weapon::Weapon(std::string str){
    type = str;
}