#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap{
    public :
        DiamondTrap();
        DiamondTrap(const DiamondTrap& instance);
        ~DiamondTrap();
        DiamondTrap& operator=(const DiamondTrap& instance);

        DiamondTrap(std::string name);
        void whoAmI(void);
};

#endif