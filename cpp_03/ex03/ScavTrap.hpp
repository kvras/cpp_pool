#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : virtual public ClapTrap {
    public :
        ScavTrap();
        ScavTrap(ScavTrap& instance);
        ~ScavTrap();
        ScavTrap& operator=(ScavTrap& instance);

        ScavTrap(std::string str);
        void guardGate(void);
};
#endif