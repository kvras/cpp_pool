#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
  EnergyPoints = 10;
  HitPoints = 10;
  AttackDamage = 0;
  name = "?";
  std::cout << "Default Constructor is called" << std::endl;
}

ClapTrap::ClapTrap(std::string str){
  EnergyPoints = 10;
  HitPoints = 10;
  AttackDamage = 0;
  name = str;
  std::cout << "Constructed an instance with name : <" << str << ">"<<std::endl;
}

ClapTrap::ClapTrap(ClapTrap& instance){
  std::cout << "Copy constructor is called" << std::endl;
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

ClapTrap::~ClapTrap(){
  std::cout<< "ClapTrap destructeur called" << std::endl;
}

void ClapTrap::attack(const std::string& target){
  if(HitPoints <= 0 || EnergyPoints <= 0){
    std::cout << "ClapTrap " << name << " cant attack" << std::endl;
    return;
  }
  std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
  --EnergyPoints;
}

void ClapTrap::takeDamage(unsigned int amount){
    HitPoints -= amount;
    std::cout << "ClapTrap "  << name  << " is taking " << amount << " Attack damage"<< std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
  if (EnergyPoints <= 0 || HitPoints <= 0){
    std::cout << "Clap Trap cant get repaired" << std::endl;
    return ;
  }
  std::cout << "ClapTrap " << name << " repair itself, it gets " << amount << " back!"<< std::endl;
  HitPoints+=amount;
  --EnergyPoints;
}

const std::string& ClapTrap::getName(void) const {
  return (name);
}

const int& ClapTrap::getAttackDamage(void) const {
  return (AttackDamage);
}