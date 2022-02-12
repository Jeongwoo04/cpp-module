#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    name = "stranger";
    hitpoint = 100;
    energy = 50;
    damage = 20;
	std::cout << "[ScavTrap] : ";
    std::cout << name << " : ScavTrap default constructor is called : adr [ " << this << " ]"<< std::endl;
};

ScavTrap::ScavTrap( std::string str )
{
    name = str;
    hitpoint = 100;
    energy = 50;
    damage = 20;
	std::cout << "[ScavTrap] : ";
    std::cout << name << " : ScavTrap string constructor is called : adr [ " << this << " ]"<< std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& scavtrap)
{
	std::cout << "[ScavTrap] : ";
	std::cout << name << " : ScavTrap copy constructor is called" << std::endl;
    *this = scavtrap;
}

ScavTrap::~ScavTrap()
{
	std::cout << "[ScavTrap] : ";
    std::cout << name << " : ScavTrap destructor is called : adr [ " << this << " ]"<< std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& scavtrap)
{
	name = scavtrap.name;
	hitpoint = scavtrap.hitpoint;
	energy = scavtrap.energy;
	damage = scavtrap.damage;
	std::cout << "[ScavTrap] : ";
	std::cout << name << " : ScavTrap operator is called" << std::endl;
	return (*this);
}

void    ScavTrap::attack( std::string const& target )
{
	std::cout << "[ScavTrap] : ";
	std::cout << name << " attack " << target << ", causing " << damage << " points of damage!" << std::endl;
}

void    ScavTrap::guardGate( void )
{
	std::cout << "[ScavTrap] : ";
	std::cout << name << " : ScavTrap have enterred in Gate keeper mode." << std::endl;
}
