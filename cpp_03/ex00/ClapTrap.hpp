#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap{
  private :
    std::string name;
    int HitPoints;
    int EnergyPoints;
    int AttackDamage;
  public :
    ClapTrap();
    ClapTrap(std::string str);
    ClapTrap(ClapTrap& instance);
    ~ClapTrap();
    ClapTrap& operator=(ClapTrap& instance);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    const std::string& getName(void) const;
    const int& getAttackDamage(void) const;
};

#endif