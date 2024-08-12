#include "ScavTrap.hpp"


ScavTrap::ScavTrap(std::string str) : ClapTrap(str){
    this->HitPoints = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 20;
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

void ScavTrap::attack(const std::string& target){
    if(HitPoints <= 0){
    std::cout << "ScavTrap " << name << " is dead and cannot attack." << std::endl;
    return;
  }
  std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
  --HitPoints;

}
