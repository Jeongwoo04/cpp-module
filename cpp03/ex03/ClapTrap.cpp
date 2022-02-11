/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 10:45:21 by jeson             #+#    #+#             */
/*   Updated: 2022/02/11 19:11:00 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    name = "stranger";
    hitpoint = 10;
    energy = 10;
    damage = 0;
	std::cout << "[ClapTrap]" << std::endl;
    std::cout << name << " : ClapTrap default constructor is called" << std::endl;
};

ClapTrap::ClapTrap( std::string str )
{
    name = str;
    hitpoint = 10;
    energy = 10;
    damage = 0;
	std::cout << "[ClapTrap]" << std::endl;
    std::cout << name << " : ClapTrap string constructor is called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& claptrap)
{
	std::cout << "[ClapTrap]" << std::endl;
	std::cout << name << " : ClapTrap copy constructor is called" << std::endl;
	*this = claptrap;
}

ClapTrap::~ClapTrap()
{
	std::cout << "[ClapTrap]" << std::endl;
    std::cout << name << " : ClapTrap destructor is called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& claptrap)
{
	std::cout << "[ClapTrap]" << std::endl;
    std::cout << name << " : ClapTrap operator is called" << std::endl;
	name = claptrap.name;
	hitpoint = claptrap.hitpoint;
	energy = claptrap.energy;
	damage = claptrap.damage;
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
	std::cout << "[ClapTrap]" << std::endl;
	std::cout << "ClapTrap's getDamage func is called" << std::endl;
    return ( damage );
}

// ClapTrap <name> attack <target>, causing <damage> points of damage!
