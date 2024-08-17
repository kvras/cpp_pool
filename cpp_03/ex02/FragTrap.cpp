#include "FragTrap.hpp"

FragTrap::FragTrap(std::string str) : ClapTrap(str){
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
    std::cout << str <<" Upgraded to FragTrap" << std::endl;
}

FragTrap::FragTrap(FragTrap& instance) : ClapTrap(instance.name){
    *this = instance;
}

FragTrap& FragTrap::operator=(FragTrap& instance){
    if (this != &instance){
        this->name = instance.name;
        this->HitPoints = instance.HitPoints;
        this->EnergyPoints = instance.EnergyPoints;
        this->AttackDamage = instance.AttackDamage;
    }
    return (instance);
}

FragTrap::~FragTrap(){
    std::cout << "Downgrade from FragTrap to ClapTrap" <<std::endl;
}

void FragTrap::highFivesGuys(){
    std::cout << name << " say highFiveGuys"<<std::endl;
}
