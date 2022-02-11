#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ScavTrap(), FragTrap()
{
	ClapTrap::name = "_clap_name";
	name = "unkown";
	hitpoint = 100;
	energy = 50;
	damage = 30;
	std::cout << "[DiamondTrap]" << std::endl;
	std::cout << name << " : DiamondTrap default constructor is called" << std::endl;
};

DiamondTrap::DiamondTrap( std::string str ): ClapTrap( str + "_clap_name" ), ScavTrap( str ), FragTrap( str )
{
	name = str;
	this->hitpoint = 100;
	this->energy = 50;
	this->damage = 30;
	std::cout << "[DiamondTrap]" << std::endl;
	std::cout << name << " : DiamondTrap string constructor is called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& diamondtrap): ClapTrap( diamondtrap ), ScavTrap( diamondtrap ), FragTrap( diamondtrap )
{
	std::cout << "[DiamondTrap]" << std::endl;
	std::cout << name << " : DiamondTrap copy constructor is called" << std::endl;
	this->name = diamondtrap.name;
	this->ClapTrap::name = diamondtrap.name + "_clap_name";
	this->hitpoint = diamondtrap.hitpoint;
	this->energy = diamondtrap.energy;
	this->damage = diamondtrap.damage;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "[DiamondTrap]" << std::endl;
	std::cout << name << " : DiamondTrap destructor is called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& diamondtrap)
{
	std::cout << "[DiamondTrap]" << std::endl;
	std::cout << name << " : DiamondTrap operator is called" << std::endl;
	this->name = diamondtrap.name;
	this->ClapTrap::name = name + "_clap_name";
	this->hitpoint = diamondtrap.hitpoint;
	this->energy = diamondtrap.energy;
	this->damage = diamondtrap.damage;
	return (*this);
}

void    DiamondTrap::attack( std::string const& target )
{
	ScavTrap::attack( target );
}

void	DiamondTrap::whoAmI( void )
{
	std::cout << "[DiamondTrap]" << std::endl;
	std::cout << "DiamondTrap name is [" << name << "] / ClapTrap name is " << ClapTrap::name << std::endl;
}
