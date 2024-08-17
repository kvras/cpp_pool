#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string str){
  EnergyPoints = 10;
  HitPoints = 10;
  AttackDamage = 0;
  name = str;
  std::cout << "ClapTrap " << str << " is created" << std::endl;
}

ClapTrap::~ClapTrap(){
  std::cout << "ClapTrap is destructed" << std::endl;
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

void ClapTrap::attack(const std::string& target){
  if(HitPoints <= 0){
    std::cout << "ClapTrap " << name << " is dead and cannot attack." << std::endl;
    return;
  }
  std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
  --HitPoints;
}

void ClapTrap::takeDamage(unsigned int amount){
    HitPoints -= amount;
    std::cout << "ClapTrap "  << name  << " is taking damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
  if (HitPoints <= 0){
    std::cout << "Clap Trap is died cant get repaired" << std::endl;
    return ;
  }
  std::cout << "ClapTrap " << name << " repair itself, it gets " << amount << " back!"<< std::endl;
  HitPoints+=(amount - 1);
}

std::string ClapTrap::getName(void){
  return (name);
}

int ClapTrap::getAttackDamage(void){
  return (AttackDamage);
}
