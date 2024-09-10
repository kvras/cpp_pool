#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
    std::cout << "ScavTrap default constructeur called" << std::endl;
}

ScavTrap::ScavTrap(std::string str) : ClapTrap(str)
{
    this->HitPoints = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 20;
    std::cout << "Claptrap " << name << " is now a scavtrap" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap& instance) : ClapTrap(instance){
    std::cout << "ScavTrap copy constructeur called" << std::endl;
}

ScavTrap:: ~ScavTrap(){
    std::cout << "ScavTrap destructeur called" << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap& instance){
    if (this != &instance)
        (ClapTrap&)(*this) = (ClapTrap&)instance;
    return (*this);
}

void ScavTrap::guardGate(void){
    std::cout << "ScavTrap has entered in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(std::string const & target){
    std::cout << "ScavTrap " << name << " attack " << target << " causing " << AttackDamage << " points of damage!" << std::endl;
}