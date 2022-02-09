#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    ClapTrap::name + "_clap_name";
    FragTrap::hitpoint;
    ScavTrap::energy;
    FragTrap::damage;
    std::cout << name << " : DiamondTrap default constructor is called" << std::endl;
};

DiamondTrap::DiamondTrap( std::string str )
{
    ClapTrap::name + str;
    FragTrap::hitpoint;
    ScavTrap::energy;
    FragTrap::damage;
    std::cout << name << " : DiamondTrap string constructor is called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& Diamondtrap)
{
    std::cout << name << " : DiamondTrap copy constructor is called" << std::endl;
    *this = Diamondtrap;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << name << " : DiamondTrap destructor is called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& Diamondtrap)
{
    std::cout << name << " : DiamondTrap operator is called" << std::endl;
    if (this != &Diamondtrap)
    {
        *this = Diamondtrap;
        return (*this);
    }
    return (*this);
}

void    DiamondTrap::attack( std::string const& target )
{
    ScavTrap::attack( target );
}