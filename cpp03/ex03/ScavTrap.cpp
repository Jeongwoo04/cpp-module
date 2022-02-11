#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    name = "stranger";
    hitpoint = 100;
    energy = 50;
    damage = 20;
	std::cout << "[ScavTrap]" << std::endl;
    std::cout << name << " : ScavTrap default constructor is called" << std::endl;
};

ScavTrap::ScavTrap( std::string str )
{
    name = str;
    hitpoint = 100;
    energy = 50;
    damage = 20;
	std::cout << "[ScavTrap]" << std::endl;
    std::cout << name << " : ScavTrap string constructor is called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& scavtrap)
{
	std::cout << "[ScavTrap]" << std::endl;
    std::cout << name << " : ScavTrap copy constructor is called" << std::endl;
    *this = scavtrap;
}

ScavTrap::~ScavTrap()
{
	std::cout << "[ScavTrap]" << std::endl;
    std::cout << name << " : ScavTrap destructor is called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& scavtrap)
{
	std::cout << "[ScavTrap]" << std::endl;
    std::cout << name << " : ScavTrap operator is called" << std::endl;
	this->name = scavtrap.name;
	this->hitpoint = scavtrap.hitpoint;
	this->energy = scavtrap.energy;
	this->damage = scavtrap.damage;
    return (*this);
}

void    ScavTrap::attack( std::string const& target )
{
    std::cout << "[ScavTrap]" << std::endl;
    std::cout << name << " attack " << target << ", causing " << damage << " points of damage!" << std::endl;
}

void    ScavTrap::guardGate( void )
{
    if (energy)
		std::cout << name << " : ScavTrap have enterred in Gate keeper mode." << std::endl;
	else
		std::cout << name << " : ScavTrap is broken" << std::endl;
}