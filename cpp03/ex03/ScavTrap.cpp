#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
    hitpoint = 100;
    energy = 50;
    damage = 20;
	std::cout << "[ScavTrap] : ";
    std::cout << name << " : ScavTrap default constructor is called : adr [ " << this << " ]"<< std::endl;
};

ScavTrap::ScavTrap( std::string str ): ClapTrap( str )
{
    hitpoint = 100;
    energy = 50;
    damage = 20;
	std::cout << "[ScavTrap] : ";
    std::cout << name << " : ScavTrap string constructor is called : adr [ " << this << " ]"<< std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& scavtrap): ClapTrap( scavtrap )
{
	std::cout << "[ScavTrap] : ";
    std::cout << name << " : ScavTrap copy constructor is called : adr [ " << this << " ]"<< std::endl;
    *this = scavtrap;
}

ScavTrap::~ScavTrap()
{
	std::cout << "[ScavTrap] : ";
    std::cout << name << " : ScavTrap destructor is called : adr [ " << this << " ]"<< std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& scavtrap)
{
	this->name = scavtrap.name;
	this->hitpoint = scavtrap.hitpoint;
	this->energy = scavtrap.energy;
	this->damage = scavtrap.damage;
	std::cout << "[ScavTrap] : ";
	std::cout << name << " : ScavTrap assign operator is called" << std::endl;
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
