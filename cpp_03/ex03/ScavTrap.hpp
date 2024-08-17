#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : virtual public ClapTrap {
    public :
        ScavTrap(std::string str);
        ScavTrap(ScavTrap& instance);
        ~ScavTrap();
        ScavTrap& operator=(ScavTrap& instance);
        void attack(const std::string& target);
        void guardGate(void);
};
#endif