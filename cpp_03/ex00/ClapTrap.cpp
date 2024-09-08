#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
  EnergyPoints = 10;
  HitPoints = 10;
  AttackDamage = 0;
  name = "?";
}

ClapTrap::ClapTrap(std::string str){
  EnergyPoints = 10;
  HitPoints = 10;
  AttackDamage = 0;
  name = str;
}

ClapTrap::ClapTrap(ClapTrap& instance){
  *this = instance;
}

ClapTrap& ClapTrap::operator=(ClapTrap& instance){
  if (this != &instance)
  {
    this->name = instance.name;
    this->HitPoints = instance.HitPoints;
    this->EnergyPoints = instance.EnergyPoints;
    this->AttackDamage = instance.AttackDamage;
  }
  return *this;
}

ClapTrap::~ClapTrap(){}

void ClapTrap::attack(const std::string& target){
  if(HitPoints <= 0 || EnergyPoints <= 0){
    std::cout << "ClapTrap " << name << " cant attack" << std::endl;
    return;
  }
  std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
    HitPoints -= amount;
    std::cout << "ClapTrap "  << name  << " is taking " << amount << " Attack damage"<< std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
  if (EnergyPoints <= 0){
    std::cout << "Clap Trap cant get repaired" << std::endl;
    return ;
  }
  std::cout << "ClapTrap " << name << " repair itself, it gets " << amount << " back!"<< std::endl;
  HitPoints+=amount;
}

const std::string& ClapTrap::getName(void) const {
  return (name);
}

const int& ClapTrap::getAttackDamage(void) const {
  return (AttackDamage);
}