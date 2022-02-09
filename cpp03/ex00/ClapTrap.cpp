#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    name = "stranger";
    hitpoint = 10;
    energy = 10;
    damage = 0;
};

ClapTrap::ClapTrap( std::string str )
{
    name = str;
    hitpoint = 10;
    energy = 10;
    damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& claptrap)
{
    *this = claptrap;
}

ClapTrap::~ClapTrap()
{
}

ClapTrap& ClapTrap::operator=(const ClapTrap& claptrap)
{
    if (this != &claptrap)
    {
        *this = claptrap;
        return (*this);
    }
    return (*this);
}

void    ClapTrap::attack( std::string const & target )
{
    std::cout << "[ClapTrap]" << std::endl;
    std::cout << name << " attack " << target << ", causing " << damage << " points of damage!" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "[ClapTrap]" << std::endl;
    if (amount < hitpoint)
    {
        hitpoint -= amount;
        std::cout << name << " take " << amount << " points of damage! [HP] : " << hitpoint << std::endl;
    }
    else
    {
        hitpoint = 0;
        std::cout << name << " is gone! [HP] : " << hitpoint << std::endl;
    }
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "[ClapTrap]" << std::endl;
    hitpoint += amount;
    std::cout << name << " is repaired " << amount << " points of heal! [HP] : " << hitpoint << std::endl;
}

unsigned int    ClapTrap::getDamage( void ) const
{
    return ( damage );
}

// ClapTrap <name> attack <target>, causing <damage> points of damage!