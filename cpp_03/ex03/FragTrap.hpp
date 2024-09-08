#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "iostream"
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap{
    public :
        FragTrap();
        FragTrap(std::string str);
        FragTrap(FragTrap& instance);
        FragTrap& operator=(FragTrap& instance);
        ~FragTrap();
        void highFivesGuys(void);
};

#endif