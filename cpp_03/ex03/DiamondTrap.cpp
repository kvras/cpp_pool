#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
    std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name) {
    std::cout << "DiamondTrap constructor called" << std::endl;
    this->name = name;
    this->HitPoints = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap& instance) : ScavTrap(instance.name), FragTrap(instance.name) {
    std::cout << "DiamondTrap Copy constructor is created" << std::endl;
    *this = instance;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap destructeur called" << std::endl;
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
