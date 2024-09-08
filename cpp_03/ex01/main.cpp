#include "ScavTrap.hpp"

int main()
{
    ScavTrap Pooler("Pooler");
    ScavTrap Staff("Staff");

    Pooler.attack(Staff.getName());
    Staff.takeDamage(Pooler.getAttackDamage());

    // std::cout << std::endl;

    Staff.attack(Pooler.getName());
    Pooler.takeDamage(Staff.getAttackDamage());

    // std::cout << std::endl;

    Pooler.attack(Staff.getName());
    Staff.takeDamage(Pooler.getAttackDamage());

    // std::cout << std::endl;

    Pooler.beRepaired(9);
    Staff.beRepaired(9);

    // std::cout << std::endl;

    Pooler.guardGate();
    Staff.guardGate();

    // std::cout << std::endl;

    return 0;
}
