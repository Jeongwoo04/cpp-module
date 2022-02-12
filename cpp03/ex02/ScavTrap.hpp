#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap();
    ScavTrap( std::string name );
    ScavTrap(const ScavTrap& scavtrap);
    ~ScavTrap();

    ScavTrap& operator=(const ScavTrap& scavtrap);

    void attack(std::string const & target);
    void guardGate();
};

#endif
