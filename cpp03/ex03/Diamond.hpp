#ifndef DiamondTRAP_HPP
# define DiamondTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
    std::string name;
public:
    DiamondTrap();
    DiamondTrap( std::string name );
    DiamondTrap(const DiamondTrap& diamondtrap);
    ~DiamondTrap();

    DiamondTrap& operator=(const DiamondTrap& diamondtrap);
    
    void attack( std::string const& target );
    void guardGate();
};

#endif