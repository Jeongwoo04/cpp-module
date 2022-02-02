#include "HumanA.hpp"

HumanA::HumanA(std::string str, Weapon &wp): name(str), weapon(wp)
{
}

void    HumanA::attack( void )
{
    std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}