#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("?_clap_name")
{
    name = "?";
    std::cout << "Upgraded to DiamondTrap" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name) {
    std::cout << "Upgraded to DiamondTrap" << std::endl;
    this->name = name;
    this->HitPoints = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap& instance) : ScavTrap(instance.name), FragTrap(instance.name) {
    std::cout << "Upgraded to DiamondTrap by copy" << std::endl;
    *this = instance;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "Downgrade from DiamondTrap" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& instance) {
    if (this != &instance) {
        this->name = instance.name;
        this->HitPoints = instance.HitPoints;
        this->EnergyPoints = instance.EnergyPoints;
        this->AttackDamage = instance.AttackDamage;
    }
    return (*this);
}

void DiamondTrap::whoAmI(void) {
    std::cout << "My name is " << name << " and my ClapTrap name is " << ClapTrap::name << std::endl;
}
