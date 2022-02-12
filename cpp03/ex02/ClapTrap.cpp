#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	name = "stranger";
	hitpoint = 10;
	energy = 10;
	damage = 0;
	std::cout << "[ClapTrap] : ";
	std::cout << name << " : ClapTrap default constructor is called : adr [ " << this << " ]"<< std::endl;
}

ClapTrap::ClapTrap( std::string str )
{
	name = str;
	hitpoint = 10;
	energy = 10;
	damage = 0;
	std::cout << "[ClapTrap] : ";
	std::cout << name << " : ClapTrap string constructor is called : adr [ " << this << " ]"<< std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& claptrap)
{
	*this = claptrap;
	std::cout << "[ClapTrap] : ";
	std::cout << name << " : ClapTrap copy constructor is called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "[ClapTrap] : ";
    std::cout << name << " : ClapTrap destructor is called : adr [ " << this << " ]"<< std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& claptrap)
{
	name = claptrap.name;
	hitpoint = claptrap.hitpoint;
	energy = claptrap.energy;
	damage = claptrap.damage;
	std::cout << "[ClapTrap] : ";
    std::cout << name << " : ClapTrap assign operator is called" << std::endl;
    return (*this);
}

void    ClapTrap::attack( std::string const & target )
{
    std::cout << "[ClapTrap] : ";
    std::cout << name << " attack " << target << ", causing " << damage << " points of damage!" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "[ClapTrap] : ";
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
    hitpoint += amount;
    std::cout << "[ClapTrap] : ";
    std::cout << name << " is repaired " << amount << " points of heal! [HP] : " << hitpoint << std::endl;
}

unsigned int    ClapTrap::getDamage( void ) const
{
	std::cout << "[ClapTrap] : ";
	std::cout << "ClapTrap's getDamage func is called" << std::endl;
    return ( damage );
}

// ClapTrap <name> attack <target>, causing <damage> points of damage!
