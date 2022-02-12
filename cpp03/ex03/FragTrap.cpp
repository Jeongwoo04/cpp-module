#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
    hitpoint = 100;
    energy = 100;
    damage = 30;
	std::cout << "[FragTrap] : ";
    std::cout << name << " : FragTrap default constructor is called : adr [ " << this << " ]"<< std::endl;
};

FragTrap::FragTrap( std::string str ): ClapTrap( str )
{
    hitpoint = 100;
    energy = 100;
    damage = 30;
	std::cout << "[FragTrap] : ";
    std::cout << name << " : FragTrap string constructor is called : adr [ " << this << " ]"<< std::endl;
}

FragTrap::FragTrap(const FragTrap& fragtrap): ClapTrap( fragtrap )
{
	std::cout << "[FragTrap] : ";
    std::cout << name << " : FragTrap copy constructor is called : adr [ " << this << " ]"<< std::endl;
    *this = fragtrap;
}

FragTrap::~FragTrap()
{
	std::cout << "[FragTrap] : ";
    std::cout << name << " : FragTrap destructor is called : adr [ " << this << " ]"<< std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& fragtrap)
{
	this->name = fragtrap.name;
	this->hitpoint = fragtrap.hitpoint;
	this->energy = fragtrap.energy;
	this->damage = fragtrap.damage;
	std::cout << "[FragTrap] : ";
	std::cout << name << " : FragTrap assign operator is called" << std::endl;
	return (*this);
}

void    FragTrap::attack( std::string const& target )
{
    std::cout << "[FragTrap] : ";
    std::cout << name << " attack " << target << ", causing " << damage << " points of damage!" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "[FragTrap] : ";
	std::cout << name << " : FragTrap is called positive high fives request" << std::endl;
}
