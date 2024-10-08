#include "ClapTrap.hpp"

int main()
{
    ClapTrap instance1("Pooler");
    ClapTrap instance2("Student");

    instance1.attack(instance2.getName());
    instance2.takeDamage(instance1.getAttackDamage());


    instance2.attack(instance1.getName());
    instance1.takeDamage(instance2.getAttackDamage());


    instance1.attack(instance2.getName());
    instance2.takeDamage(instance1.getAttackDamage());

    instance1.beRepaired(9);
    instance2.beRepaired(9);

    return 0;
}   
 