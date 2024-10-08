#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap {
    public :
        ScavTrap();
        ScavTrap(std::string str);
        ScavTrap(ScavTrap& instance);
        ~ScavTrap();
        ScavTrap& operator=(ScavTrap& instance);
        void guardGate(void);
        void attack(std::string const & target);
};
#endif