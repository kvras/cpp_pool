#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap{
    public :
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap& instance);
        ~DiamondTrap();
        DiamondTrap& operator=(DiamondTrap& instance);
        void whoAmI(void);
};

#endif